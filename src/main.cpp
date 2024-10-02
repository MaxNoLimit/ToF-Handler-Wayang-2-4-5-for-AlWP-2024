#include "mainheader.hpp"

bool _run = false;
int _whatSensor;
String _valueString_2, _valueString_4, _valueString_5;

void setup()
{
  // Begining Serial comm
  Serial.begin(9600);

  // Setting up the XSHUT pins
  pinMode(XSHUT_2, OUTPUT);
  pinMode(XSHUT_4, OUTPUT);
  pinMode(XSHUT_5, OUTPUT);

  // Begining I2C comm
  Wire.begin();
  Wire.setTimeout(500);
}

void loop()
{
  Serial.flush();
  if (_run)
  {
    _run = false;
    switch (_whatSensor)
    {
    case 2:
      _valueString_2 = String(getDistance2());
      Serial.write(_valueString_2.c_str());
      break;

    case 4:
      _valueString_4 = String(getDistance4());
      Serial.write(_valueString_4.c_str());
      break;

    case 5:
      _valueString_5 = String(getDistance5());
      Serial.write(_valueString_5.c_str());
      break;
    }
  }
  else
  {
    switch (Serial.read())
    {
    case REQUEST_DISTANCE_2:
      _run = true;
      _whatSensor = 2;
      break;

    case REQUEST_DISTANCE_4:
      _run = true;
      _whatSensor = 4;
      break;

    case REQUEST_DISTANCE_5:
      _run = true;
      _whatSensor = 5;
      break;
    }
  }
}