#include "mainheader.hpp"

VL53L0X sensor2, sensor4, sensor5;

void setupDistance2()
{
    sensor2.init();
    // lower the return signal rate limit (default is 0.25 MCPS)
    sensor2.setSignalRateLimit(0.1);
    // increase laser pulse periods (defaults are 14 and 10 PCLKs)
    sensor2.setVcselPulsePeriod(VL53L0X::VcselPeriodPreRange, 18);
    sensor2.setVcselPulsePeriod(VL53L0X::VcselPeriodFinalRange, 14);

    sensor2.setMeasurementTimingBudget(200000);
}

void setupDistance4()
{
    sensor4.init();
    // lower the return signal rate limit (default is 0.25 MCPS)
    sensor4.setSignalRateLimit(0.1);
    // increase laser pulse periods (defaults are 14 and 10 PCLKs)
    sensor4.setVcselPulsePeriod(VL53L0X::VcselPeriodPreRange, 18);
    sensor4.setVcselPulsePeriod(VL53L0X::VcselPeriodFinalRange, 14);

    sensor4.setMeasurementTimingBudget(200000);
}

void setupDistance5()
{
    sensor5.init();
    // lower the return signal rate limit (default is 0.25 MCPS)
    sensor5.setSignalRateLimit(0.1);
    // increase laser pulse periods (defaults are 14 and 10 PCLKs)
    sensor5.setVcselPulsePeriod(VL53L0X::VcselPeriodPreRange, 18);
    sensor5.setVcselPulsePeriod(VL53L0X::VcselPeriodFinalRange, 14);

    sensor5.setMeasurementTimingBudget(200000);
}

int getDistance2()
{
    return sensor2.readRangeSingleMillimeters();
}

int getDistance4()
{
    return sensor4.readRangeSingleMillimeters();
}

int getDistance5()
{
    return sensor5.readRangeSingleMillimeters();
}