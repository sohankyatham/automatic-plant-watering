# Self Watering Plant System

An Arduino-based automatic plant watering system that monitors soil moisture and waters your plant when it gets too dry.

![Project Demo](assets/Plant-watering.gif)

---
 
## How It Works
 
A soil moisture sensor is inserted into the plant's soil and continuously monitors moisture levels. When the soil gets too dry, the Arduino triggers a relay module which activates a mini water pump — automatically watering the plant. Once the soil is moist enough, the pump shuts off.
 
```
Soil too dry → sensor reads high value → Arduino triggers relay → pump waters plant
Soil is moist → sensor reads low value → Arduino does nothing → pump stays off
```
 
---


## Calibration
 
1. Upload the code and open Serial Monitor at **9600 baud**
2. Insert sensor into **dry soil** — note the reading (typically 700-1023)
3. Water the soil and note the reading (typically 300-500)
4. Set `dryThreshold` to a value between the two readings
---
 
## Setup
 
1. Place pump fully submerged in a water container
2. Run tubing from pump to your plant pot
3. Insert sensor prongs into soil
4. Power Arduino via USB wall charger
5. Done — no laptop needed after upload
---


## Built With
 
- Arduino IDE 2
- C++ (Arduino framework)

*Built as a beginner hardware project to learn Arduino, sensors, and relay modules.*