#include <dht11.h>

dht11 DHT;
#define DHT11_PIN 4

void setup(){
  
  pinMode(13, OUTPUT);
  
  Serial.begin(57600);
  
  //Serial.begin(9600);
  Serial.println("DHT TEST PROGRAM ");
  Serial.print("LIBRARY VERSION: ");
  Serial.println(DHT11LIB_VERSION);
  Serial.println();
  Serial.println("Type,\tstatus,\tHumidity (%),\tTemperature (C)");
}

void loop(){
  
  Serial.print("Moisture Sensor Value:");
  Serial.println(analogRead(A0));  
  delay(100);
  
  int chk;
  Serial.print("DHT11, \t");
  chk = DHT.read(DHT11_PIN);    // READ DATA
  switch (chk){
    case DHTLIB_OK:  
                Serial.print("OK,\t"); 
                break;
    case DHTLIB_ERROR_CHECKSUM: 
                Serial.print("Checksum error,\t"); 
                break;
    case DHTLIB_ERROR_TIMEOUT: 
                Serial.print("Time out error,\t"); 
                break;
    default: 
                Serial.print("Unknown error,\t"); 
                break;
  }
 // DISPLAT DATA
  Serial.print(DHT.humidity,1);
  Serial.print(",\t");
  Serial.println(DHT.temperature,1);

  delay(2000);
  
  if(DHT.temperature > 25){
      
      digitalWrite(13, HIGH);   
      delay(1000);                      
      digitalWrite(13, LOW);    
      delay(1000);  
      
    }
    else{
      digitalWrite(13, LOW);
}
}
