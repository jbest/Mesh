Mesh - Interfacing a network of Xbees with Arduino and Raspberry Pi
=========

This script will just create a connection to an XBee configured as a router and will send characters to the network Coordinator. With a XBee coordinator properly configured, you will see the characters in a terminal session connected to the Coordinator.


##Parts
1 - Arduino Uno  
1 - FTDI cable - http://www.adafruit.com/products/70
2 - XBee radio - https://www.adafruit.com/products/968  
2 - XBee Adaptor Kit - https://www.adafruit.com/products/126  


##Configuration of XBee

The Adafruit tutorial is out of date or incomplete. See parts 1 and 2 of tunnelsup on YouTube:
http://www.youtube.com/watch?v=odekkumB3WQ  
http://www.youtube.com/watch?v=mPx3TjzvE9U

From the above videos, here is the most pertinant information:


Configure using X-CTU
http://www.digi.com/support/productdetail?pid=3352&osvid=57&type=utilities
Windows only

Below are the steps needed to configure a Commander and a Router. The setting files have been added to this repo so these steps don't have to be done manually.


Coordinator AT mode  
Restore to factory defaults  
Function Set: Coordinator AT  
WRITE  
READ  

Networking:  
PAN ID: set to the same value as other radios  
WRITE  

Router AT mode  
Restore to factory defaults  
Function Set: Router AT  

Networking:  
PAN ID: set to the same value as other radios  
JV: enabled  

Addressing:  
Destination High: 0  
WRITE  

## Arduino setup

Configure XBee as a router AT (see config files)
Using the Xbee adaptor kit, connect Arduino's GND and +5V to XBee's GND and +5V.
Connect Arduino pin 2 to XBee TX
Connect Arduino pin 3 to XBee RX
Upload router_test to Arduino

## Desktop and XBee Commander setup

Connect a Windows PC to an XBee using the FTDI cable
Launch X-CTU and confirm connection to XBee (PC Settins, Test/Query button)
Monitor Arduino transmissions on Terminal tab in X-CTU

##Communication of Arduino to Pi (next steps)

Install py-serial: sudo apt-get install python-serial  

http://blog.oscarliang.net/connect-raspberry-pi-and-arduino-usb-cable/  


##TODO

Gather data using RasPi connected to XBee:  
http://www.desert-home.com/2013/09/raspberry-pi-and-xbee.html 
http://cae2100.wordpress.com/2012/12/23/raspberry-pi-and-the-serial-port/http://www.raspberrypi.org/phpBB3/viewtopic.php?t=43915&p=413364  
http://blog.oscarliang.net/connect-raspberry-pi-and-arduino-usb-cable/  
http://blog.oscarliang.net/raspberry-pi-and-arduino-connected-serial-gpio/  
http://blog.oscarliang.net/raspberry-pi-arduino-connected-i2c/    




