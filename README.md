# Protocol_CAN
How to communicate with protocol CAN

In this project, I used two ESP32 and two converter TTL-CAN <br>


Converter TTL-CAN  I used <b>sn65hvd230</b> can bus transceptor <br>
https://pt.aliexpress.com/item/32952650510.html <br>

For install the library in Arduino IDE <br>
<img src="https://github.com/mariliahoshino/Protocol_CAN/blob/master/Picture/install_library_01.png?raw=true"  > <br>

<img src="https://github.com/mariliahoshino/Protocol_CAN/blob/master/Picture/install_library_02.png?raw=true"  > <br>

After I used the example that are together library <br>

<img src="https://github.com/mariliahoshino/Protocol_CAN/blob/master/Picture/install_library_03.png?raw=true" > <br>

Electric connection <br>
<img src="https://github.com/mariliahoshino/Protocol_CAN/blob/master/Picture/schematic.png?raw=true"> <br>

This image show the boards workings
<img src="https://github.com/mariliahoshino/Protocol_CAN/blob/master/Picture/working_01.png?raw=true" height="600" >


for use a vehicle is necessary change the messages according to the library of your vehicle 

In my case I need send 3 signals
There are 

###Signal 1 0x00 0x00 0x00 0x00 0x01 0x16 0x00 0x00
###Signal 2 0x00 0x00 0x00 0x00 0x02 0x16 0x00 0x00
###Signal 3 0x00 0x00 0x00 0x80 0x00 0x16 0x00 0x00

For this need change the example to the attached file

For your car is necessary know the libray for length and data to sent



### My Degree

<a href="https://www.sp.senac.br/">   <img src="https://github.com/mariliahoshino/mariliahoshino/blob/master/School/logo_senac.png?raw=true" height="30" widht="400" > </a> &nbsp;Post graduation Quality of Software Engineering 

<a href="http://www.umc.br/">    <img src="https://github.com/mariliahoshino/mariliahoshino/blob/master/School/logo_umc.png?raw=true" height="30" widht="400"></a>  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Bachelor Electric Engineering UMC  

<a href="https://eletronica.sp.senai.br/"> <img src="https://github.com/mariliahoshino/mariliahoshino/blob/master/School/logo_senai.png?raw=true" height="30" widht="400"></a>  &nbsp;&nbsp;&nbsp; Electronic Technical SENAI - Anchieta  

<a href="https://www.cps.sp.gov.br/tag/etec-presidente-vargas/">  <img src="https://github.com/mariliahoshino/mariliahoshino/blob/master/School/logo_etec.png?raw=true" height="30" widht="400"> </a> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Mechatronics Technical ETEC Presidente Vargas 

<a href="https://suzano.sp.senai.br/"> <img src="https://github.com/mariliahoshino/mariliahoshino/blob/master/School/logo_senai.png?raw=true" height="30" widht="400"></a>  &nbsp;&nbsp;&nbsp; Maintenance Electrical SENAI - Suzano  

### My profile in 

<a href="https://www.linkedin.com/in/mariliahoshino/"><img src="https://github.com/mariliahoshino/mariliahoshino/blob/master/profile/logo_linkedin.png?raw=true" height="20" widht="400"></a> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 
<a href="https://mariliahoshino.wixsite.com/cvitae/"> Personal page <img src ="https://github.com/mariliahoshino/mariliahoshino/blob/master/profile/logo_site.png?raw=true" height="20" widht="400"></a> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 
<a href="https://www.instagram.com/mari.zeniti/"><img src = "https://github.com/mariliahoshino/mariliahoshino/blob/master/profile/logo_instagram.png?raw=true"  height="20" widht="400"></a> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 
<a href="https://www.facebook.com/mari.zeniti"><img src="https://github.com/mariliahoshino/mariliahoshino/blob/master/profile/logo_facebook.png?raw=true"   height="20" widht="400"></a>


source <br>
https://www.fernandok.com/2018/07/protocolo-can-yes-we-can.html <br>

https://github.com/sandeepmistry/arduino-CAN <br>

https://circuitdigest.com/microcontroller-projects/using-classic-bluetooth-in-esp32-and-toogle-an-led <br>

https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm
