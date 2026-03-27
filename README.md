# Hexapod With No Experience

A beginner-built hexapod robot project documenting the full process of designing a six-legged walking robot from scratch in Fusion 360, with the goal of taking the model from rough concept to printable mechanical parts and, later, to a functioning servo-driven robot.

This project started as an attempt to learn by doing: studying existing joint ideas, getting comfortable with CAD, and gradually turning separate leg concepts into a complete hexapod body. Over several build sessions, the design progressed from early joint experiments to a full main chassis, a finished single leg, a lid and outer shell, and then a refined version with proper servo mounting spaces and holes for assembly and printing.

## Current Status

The mechanical design is currently focused on:

- main hexagonal body/case
- six-leg layout concept
- servo mounting geometry
- lid and enclosure structure
- print-ready part refinement
- preparation for later electronics and control integration

The current hardware direction includes an Arduino Uno, a Mini Maestro 24-channel servo controller, 18 servos, and LiPo-based power. The software and locomotion side is still exploratory, with possible simulation-based gait development planned for later.

## Project Goals

- design a fully printable hexapod frame
- mount and drive 18 servos reliably
- assemble the robot from custom 3D parts
- develop stable walking behavior
- document the process clearly enough for others to follow

## Design Progress

### Early concept and CAD learning
The first stage focused on researching hexapod joint designs and learning how to work inside Fusion 360 while recreating possible leg mechanisms.
<img width="1027" height="617" alt="image" src="https://github.com/user-attachments/assets/4ebe55ac-fc83-4bc5-aa29-e4f1e51b809e" />
<img width="852" height="657" alt="image" src="https://github.com/user-attachments/assets/7aa0d6fe-f430-4094-a22c-9444dd6fb89d" />
![WIN_20260327_15_18_06_Pro](https://github.com/user-attachments/assets/1920af10-351d-4ce5-b620-b541597439be)


### First full body iteration
The next stage produced the main body, a complete single leg, and the first concrete plan for electronics and power placement inside the chassis.
<img width="493" height="336" alt="image" src="https://github.com/user-attachments/assets/8fc8958d-6dea-4ac3-a603-070e2f4bfd43" />


### Enclosure and overall form
A lid with a snapping mechanism was added, along with the first complete render showing how the legs and body would look as one system.
<img width="909" height="522" alt="image" src="https://github.com/user-attachments/assets/e7c283d5-8802-4226-a8b4-5c7b15fbac32" />

### Printability refinement
The design was then revised to improve mounting holes, servo clearances, and general readiness for full 3D printing and real assembly.
<img width="795" height="459" alt="image" src="https://github.com/user-attachments/assets/38a333d9-7b77-4a56-9c61-c023534fbd70" />


## Planned Features

- six articulated legs
- custom printable structural parts
- internal compartment for electronics
- servo-based actuation
- expandable sensor integration
- future walking control and gait experiments

## Showcase

### Full assembled CAD model
<img width="906" height="542" alt="image" src="https://github.com/user-attachments/assets/0752eb94-e3ab-4a19-b1ef-ad21647705c8" />


### Disassembled 3D parts ready for printing
<img width="949" height="550" alt="image" src="https://github.com/user-attachments/assets/e970e6f0-1ac6-4fc8-aa35-501954338715" />
<img width="531" height="351" alt="image" src="https://github.com/user-attachments/assets/0d041c40-3c03-4f69-9df1-4eaf1dc99984" />
<img width="838" height="507" alt="image" src="https://github.com/user-attachments/assets/21d3aa0e-1fa4-41bd-b068-089af0af310d" />




## BOM
- x1 Mini Maestro 24-channel USB servo controller(https://aliexpress.ru/item/1005010130773880.html?shpMethod=CAINIAO_STANDARD&sku_id=12000051249532312&spm=a2g2w.productlist.search_results.5.7fa43fb3S3rHid)
- x18 standart servo SPT5410LV(https://aliexpress.ru/item/1005007047029542.html?spm=a2g2w.detail.rcmdprod.2.817f47d1sq2Tmm&mixer_rcmd_bucket_id=controlRu3&pdp_trigger_item_id=0_4001279107637&ru_algo_pv_id=118ff2-61b690-d91318-a516da-1774508400&scenario=aerSimilarItemPdpRcmd&sku_id=12000039213827335&traffic_source=recommendation&type_rcmd=core)
- x1 battery GNB LiPo Battery 2S 7.4V 550mah 90C/180C 7.4V(https://ozon.kz/product/1-sht-akkumulyator-gnb-lipo-battery-2s-7-4v-550mah-90c-180c-7-4v-3295553165/?at=ywtAWgOKqu5WL706H5M1G0GiP47njBcm80GZptG28G7p)
- x1 on/off switch XT60(https://aliexpress.ru/item/1005011561068930.html?shpMethod=CAINIAO_SUPER_ECONOMY&sku_id=12000055923969395&spm=a2g2w.productlist.search_results.2.52615b04w40B9X)
- x1 step-down voltage regulator LM2596(https://aliexpress.ru/item/4001202088404.html?shpMethod=CAINIAO_SUPER_ECONOMY&sku_id=10000015286103974&spm=a2g2w.productlist.search_results.2.4bf13a6aifLjv3)
- x1 Hobbywing 10A UBEC voltage regulator for models(https://aliexpress.ru/item/1005004887844653.html?shpMethod=CAINIAO_STANDARD&sku_id=12000056582317936&spm=a2g2w.productlist.search_results.0.606e26cb3K3j09)
