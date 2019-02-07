/*
  ReadAnalogVoltage

  Reads an analog input on pin 0, converts it to voltage, and prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/ReadAnalogVoltage
*/

int ledstate = LOW;
void setup() {
  Serial.begin(9600);
  pinMode(A1, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5000 / 1023.0);
  Serial.println(sensorValue);
  if(sensorValue > 15){
    ledstate = HIGH;
    }
    else{
      ledstate = LOW;
      }
   digitalWrite(A1, ledstate);
}
