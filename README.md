
### <a href="https://github.com/mariliahoshino"> My profile </a> <br>


# Protocol_CAN
How to communicate with protocol CAN

In this project, I used two ESP32 and two converter TTL-CAN <br>


Converter TTL-CAN  I used <b>sn65hvd230</b> can bus transceptor <br>
https://pt.aliexpress.com/item/32952650510.html <br>

For install the library in Arduino IDE <br>
<img src="https://github.com/mariliahoshino/Protocol_CAN/blob/master/Picture/install_library_01.png?raw=true"  > <br>

Need install CAN by Sandeep<br>
<img src="https://github.com/mariliahoshino/Protocol_CAN/blob/master/Picture/install_library_02.png?raw=true"  > <br>

After I used the example that are together library <br>
<img src="https://github.com/mariliahoshino/Protocol_CAN/blob/master/Picture/install_library_03.png?raw=true" > <br>

Electric connection test communication <br>
<img src="https://github.com/mariliahoshino/Protocol_CAN/blob/master/Picture/schematic.png?raw=true"> <br>

This image show the boards workings<br>
<img src="https://github.com/mariliahoshino/Protocol_CAN/blob/master/Picture/working_01.png?raw=true" height="600" >


for use a vehicle/machine is necessary change the messages according to the library of your vehicle/machine <br>

For this I used another ESP32 for receiver the signal and display in my cell phone via Bluetooth <br>

After this I received 3 signals interesting for me, and send these 3 signals after<br>
There are <br>

### Signal 1: length 8 id 0x185  data 0x12 0x34 0x56 0x78 0x9A 0xBC 0xDE 0xF0 <br>
### Signal 2: length 8 id 0x185  data 0x12 0x34 0x56 0x78 0x9A 0xBC 0xDE 0xF1 <br>
### Signal 3: length 8 id 0x185  data 0x12 0x34 0x56 0x78 0x9A 0xBC 0xDE 0xF2 <br>

<!--
### Signal 2: length 8 id 0x185  data 0x00 0x00 0x00 0x00 0x02 0x16 0x00 0x00 <br>
### Signal 3: length 8 id 0x185  data 0x00 0x00 0x00 0x80 0x00 0x16 0x00 0x00 <br>
-->

For this need change the example to the attached file

For your car/machine is necessary know the libray for length and data to sent

After I change the file for sender the interesting signal

In attachment there are file I used <br>

<img src="https://github.com/mariliahoshino/Protocol_CAN/blob/master/Picture/circuit.png?raw=true" widht="600"> <br>


source <br>
https://www.fernandok.com/2018/07/protocolo-can-yes-we-can.html <br>

https://github.com/sandeepmistry/arduino-CAN <br>

https://circuitdigest.com/microcontroller-projects/using-classic-bluetooth-in-esp32-and-toogle-an-led <br>

https://assets.vector.com/cms/content/products/VN16xx/docs/VN1600_Interface_Family_Manual_EN.pdf  page. 45 <br>

https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm <br>
