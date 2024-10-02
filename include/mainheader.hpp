#ifndef MAINHEADER_HPP
#define MAINHEADER_HPP

#include <Arduino.h>
#include <Wire.h>
#include <VL53L0X.h>

#define REQUEST_DISTANCE_2 0x32
#define REQUEST_DISTANCE_4 0x34
#define REQUEST_DISTANCE_5 0x35

#define VL53L0X_ADDRESS_2 0x20
#define VL53L0X_ADDRESS_4 0x21
#define VL53L0X_ADDRESS_5 0x22

#define XSHUT_2 2
#define XSHUT_4 3
#define XSHUT_5 4

void setupDistance2(); // Rahwana
int getDistance2(); 

void setupDistance4(); // Hanuman
int getDistance4();

void setupDistance5(); // Laksmana
int getDistance5(); // Laksmana


#endif // MAINHEADER_HPP