Mesh - router_test
=========

This script will just create a connection to an XBee configured as a router and will send characters to the network Coordinator. With a XBee coordinator properly configured, you will see the characters in a terminal session connected to the Coordinator.


##Parts
1 - Arduino Uno  
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

Coordinator AT mode  
Restore to factory defaults  
Function Set: Coordinator AT  
WRITE  
READ  

Networking:  
PAN ID: set to the same value as other radios  
JV: enabled  
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

##Communication Arduino to Pi

Install py-serial: sudo apt-get install python-serial  

http://blog.oscarliang.net/connect-raspberry-pi-and-arduino-usb-cable/  



##TODO

Add wiring diagram based on http://cs.smith.edu/dftwiki/index.php/Tutorial:_Arduino_and_XBee_Communication
