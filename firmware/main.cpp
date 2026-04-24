#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver pwmA = Adafruit_PWMServoDriver(0x40);
Adafruit_PWMServoDriver pwmB = Adafruit_PWMServoDriver(0x41);
const int SERVO_MIN = 102;
const int SERVO_MAX = 512;
const int LEG_COUNT = 6;
const int JOINT_COUNT = 3;
enum JointType {
  COXA = 0,
  FEMUR = 1,
  TIBIA = 2
};
struct ServoConfig{
  char board;
  uint8_t channel;
  int neutral;
  int minAngle;
  int maxAngle;
  bool reversed;
};
ServoConfig robot[LEG_COUNT][JOINT_COUNT] = {
  // Front Left
  {
    {'A', 0, 90, 60, 120, false},   // COXA
    {'A', 1, 90, 50, 130, false},   // FEMUR
    {'A', 2, 90, 40, 140, false}    // TIBIA
  },

  // Middle Left
  {
    {'A', 3, 90, 60, 120, false},
    {'A', 4, 90, 50, 130, false},
    {'A', 5, 90, 40, 140, false}
  },

  // Rear Left
  {
    {'A', 6, 90, 60, 120, false},
    {'A', 7, 90, 50, 130, false},
    {'A', 8, 90, 40, 140, false}
  },

  // Front Right
  {
    {'A', 9,  90, 60, 120, true},
    {'A', 10, 90, 50, 130, true},
    {'A', 11, 90, 40, 140, true}
  },

  // Middle Right
  {
    {'A', 12, 90, 60, 120, true},
    {'A', 13, 90, 50, 130, true},
    {'A', 14, 90, 40, 140, true}
  },

  // Rear Right
  {
    {'B', 0, 90, 60, 120, true},
    {'B', 1, 90, 50, 130, true},
    {'B', 2, 90, 40, 140, true}
  }
};
int angleToPulse(int angleDeg){
  return map(angleDeg, 0, 180, SERVO_MIN, SERVO_MAX); 

}
Adafruit_PWMServoDriver* getBoard(char boardID) {
  if (boardID == 'A') return &pwmA;
  return &pwmB;
}
int clampAngle(int value, int minVal, int maxVal) {
  if (value < minVal) return minVal;
  if (value > maxVal) return maxVal;
  return value;
}
int applyDirection(int angle, bool reversed) {
  return reversed ? (180 - angle) : angle;
}
void setJointAngle(int leg, int joint, int angleDeg){
  ServoConfig cfg = robot[leg][joint];
  angleDeg = clampAngle(angleDeg, cfg.minAngle, cfg.maxAngle);
  angleDeg = applyDirection(angleDeg, cfg.reversed);
  int pulse = angleToPulse(angleDeg);
  Adafruit_PWMServoDriver* board = getBoard(cfg.board);
  board->setPWM(cfg.channel, 0, pulse);
}
void SetLegAngles(int leg, int coxa, int femur, int tibia){
  setJointAngle(leg, COXA, coxa);
  setJointAngle(leg, FEMUR, femur);
  setJointAngle(leg, TIBIA, tibia);
}
void setAllNeutral(){
  for (int leg = 0; leg<LEG_COUNT; leg++){
    setJointAngle(leg, COXA, robot[leg][COXA].neutral);
    setJointAngle(leg, FEMUR, robot[leg][FEMUR].neutral);
    setJointAngle(leg, TIBIA, robot[leg][TIBIA].neutral);
  }
}

void testSingleLeg(int leg){
  SetLegAngles(leg, 90, 90, 90);
  delay(1000);
  
  SetLegAngles(leg, 90, 70, 110);
  delay(1000);  

  SetLegAngles(leg, 110, 70, 110);
  delay(1000);  

  SetLegAngles(leg, 110, 90, 90);
  delay(1000);

  SetLegAngles(leg, 90, 90, 90);
  delay(1000);

}

void testAllLegsSequentially(){
  for (int leg = 0; leg<LEG_COUNT; leg++){
    Serial.print("Testing leg ");
    Serial.println(leg);
    testSingleLeg(leg);
    delay(300);
  }
}
void calibrateServos(){
//future
}
// put function declarations here:
int myFunction(int, int);

void setup() {
  Serial.begin(115200);
  Wire.begin();
  pwmA.begin();
  pwmA.setPWMFreq(50);  
  pwmB.begin();
  pwmB.setPWMFreq(50);

  delay(300);
  setAllNeutral();
  delay(1000);
  int result = myFunction(2, 3);
}

void loop() {
  testAllLegsSequentially();
  delay(2000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}