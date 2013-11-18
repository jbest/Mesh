// From http://cs.smith.edu/dftwiki/index.php/Tutorial:_Arduino_and_XBee_Communication

/*
  Xbee1
  D. Thiebaut
  
  Makes Arduino send 1 character via XBee wireless to another XBee connected
  to a computer via a USB cable. 

  The circuit: 
  * RX is digital pin 2 (connect to TX of XBee)
  * TX is digital pin 3 (connect to RX of XBee)
 
  Based on a sketch created back in the mists of time by Tom Igoe
  itself based on Mikal Hart's example
 
*/

#include <SoftwareSerial.h>

SoftwareSerial xbee(2, 3); // RX, TX
int  txFlash = 1;

void setup()  {
   //Serial.begin(57600);
   Serial.begin(9600);
   Serial.println( "Arduino started sending bytes via XBee" );

   // set the data rate for the SoftwareSerial port
   //xbee.begin( 19200 );
   xbee.begin( 9600 );
   xbee.print( "Beginning Tx..." );
}

void loop()  {
  // send character via XBee to other XBee connected to Mac
  // via USB cable
  
  xbee.print( "Hello world! " );    
  //--- display the character just sent on console ---
  Serial.println( "Tx: Hello world! " );
  
  
  //--- switch LED on Arduino board every transmission sent---
  // For some reason, the LED only seems to flash when the Arduino IDE
  // Serial monitor window is open.
  if ( txFlash == 0 ) 
    digitalWrite(13, LOW);
  else
    digitalWrite(13, HIGH);
  txFlash = 1 - txFlash;
  delay( 1000 );
}
