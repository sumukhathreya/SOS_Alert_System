

#include <SoftwareSerial.h>
#include <TinyGPS++.h>

float latitude,longitude; // create variable for latitude and longitude object 
SoftwareSerial gpsSerial(8,9);//tx,rx
SoftwareSerial gsmm(0,1);//tx,rx
TinyGPSPlus gps;// create gps object
void setup(){
Serial.begin(9600);
  
gpsSerial.begin(9600);
gpsSerial.listen();
 textgps();
 gsmm.begin(9600);
  gsmm.print("AT\r");
  delay(1000);                  
  gsmm.print("AT+CMGF=1\r");    
  delay(1000);
 
  gsmm.print("AT+CMGS=\"+918431336997\"\r");    
  delay(1000);
  gsmm.print("ATD+918431336997""\r");
  delay(1000);
  //The text of the message to be sent.
   gsmm.print("In Danger: Their location is ");
   gsmm.print(latitude,longitude);
   gsmm.print(latitude); 
   gsmm.print(longitude); 
  gsmm.println("https://www.google.com/maps/place/");
      gsmm.print(latitude, 6);
      gsmm.print(",");
      gsmm.print(longitude, 6);
      delay(1000);
      gsmm.write((char)26);
      delay(10000); 

gsmm.print("AT+CMGS=\"+917349606212\"\r");    
  delay(1000);
  gsmm.print("ATD+917349606212""\r");
  delay(1000);
  //The text of the message to be sent.
   gsmm.print("In Danger: Their location is ");
   gsmm.print(latitude,longitude);
   gsmm.print(latitude); 
   gsmm.print(longitude); 
  gsmm.println("https://www.google.com/maps/place/");
      gsmm.print(latitude, 6);
      gsmm.print(",");
      gsmm.print(longitude, 6);
      delay(1000);
      gsmm.write((char)26);
      delay(10000); 

gsmm.print("AT+CMGS=\"+919880229123\"\r");    
  delay(1000);
  gsmm.print("ATD+919880229123""\r");
  delay(1000);
  //The text of the message to be sent.
   gsmm.print("In Danger: Their location is ");
   gsmm.print(latitude,longitude);
   gsmm.print(latitude); 
   gsmm.print(longitude); 
  gsmm.println("https://www.google.com/maps/place/");
      gsmm.print(latitude, 6);
      gsmm.print(",");
      gsmm.print(longitude, 6);
      delay(1000);
      gsmm.write((char)26);
      delay(1000); 
// connect gps sensor


}
void loop(){
  

}

void textgps()
{

    while(1)
  {
   while (gpsSerial.available() > 0)
   { gps.encode(gpsSerial.read()); }

      if (gps.location.isUpdated())
      {
       Serial.print("LAT=");  Serial.println(gps.location.lat(), 6);
       Serial.print("LONG="); Serial.println(gps.location.lng(), 6);
       latitude=gps.location.lat();
       longitude=gps.location.lng();
      break;
      }
  
   
  
}

 Serial.print("LATITUDE="); Serial.println(latitude,6);
 Serial.print("LONGITUDE="); Serial.println(longitude,6);
 
 delay(1000);

}
