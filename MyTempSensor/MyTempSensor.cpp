/*
Sensor Type Labels
   DHT21      DHT21, one wire Sensor
    Blk: Grd
    Red: 3v3 or 5V
    Yellow: Data
   Am2320B    I2C Sensor
    Blk: Grd
    Red: 3V2 or 5V
    Yellow:
    White:
   Waterproof


*/

# include <Arduino.h>
# include <MyTempSensor.h>


class  MyTempSensor

  void init (SenseType, TempAdj, Pin1, Pin2) {
    _SenseType = SensType;
    _TempAdj = TempAdj;
    _Pin1 = Pin1;
    _Pin2 = Pin2;

    Constructor
  }

  

  void mygettemp() {

  }
