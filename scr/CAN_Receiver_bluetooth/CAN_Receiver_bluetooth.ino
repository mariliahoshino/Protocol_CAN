/*Program to control LED (ON/OFF) from ESP32 using Serial Bluetooth
 * Thanks to Neil Kolbans for his efoorts in adding the support to Arduino IDE
 * Turotial on: www.circuitdigest.com 
 */

// Copyright (c) Sandeep Mistry. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include "BluetoothSerial.h" //Header File for Serial Bluetooth, will be added by default into Arduino

#include <CAN.h>

BluetoothSerial ESP_BT; //Object for Bluetooth
int LED_BUILTIN = 2;
int idpacket;
//char date;
int dados;
//uint8_t CanB[8]; // Name of the array and size

void setup() {
  Serial.begin(115200);
  
  ESP_BT.begin("ESP32_CAN_Control"); //Name of your Bluetooth Signal
  Serial.println("Bluetooth Device is Ready to Pair");

  //pinMode (LED_BUILTIN, OUTPUT);//Specify that LED pin is output
    
  while (!Serial);

  Serial.println("CAN Receiver");

  // start the CAN bus at 500 kbps
  if (!CAN.begin(250E3)) {
    Serial.println("Starting CAN failed!");
    while (1);
  }
}

void loop() {

/*
   CAN.readBytes(CanB, 8); //Access to the raw buffer
            Serial.println(CanB[0]);
           Serial.println(CanB[1]);
           Serial.println(CanB[2]);
           Serial.println(CanB[3]);
           Serial.println(CanB[4]);
           Serial.println(CanB[5]);
           Serial.println(CanB[6]);
           Serial.println(CanB[7]);
 */
   
  beg:
  // Tenta verificar o tamanho do acote recebido
  // try to parse packet
  int packetSize = CAN.parsePacket();
  
          idpacket=(CAN.packetId());
          
        //  Serial.print("CANpacket");
        //Serial.println(CAN.packetId());

        //Serial.print("idpacket");
        //Serial.println(idpacket);
          

           
      if(idpacket != 389)  //389 dec = 185 hex
      {
        goto beg;
      }
    
  if (packetSize) {
    // received a packet
    Serial.print("Received ");

    ESP_BT.print("Received ");

    if (CAN.packetExtended()) {  //verifica se o pacote é estendido
      Serial.print("extended ");
      
      ESP_BT.print("Extended ");
    }

    if (CAN.packetRtr()) {
      //Verifica se o pacote é um pacote remoto (Requisição de dados), neste caso não há dados
      // Remote transmission request, packet contains no data
      Serial.print("RTR ");
      
      ESP_BT.print("RTR ");
    }

    Serial.print("packet with id 0x");
    Serial.print(CAN.packetId(), HEX);
    
    ESP_BT.print("packet with id 0x");
    ESP_BT.print(CAN.packetId(), HEX);

    if (CAN.packetRtr()) {                 //se o pacote recebido é de requisição, indicamos o comprimento solicitado
      Serial.print(" and requested length ");
      Serial.println(CAN.packetDlc());     //obtem o DLC (Data Length Code, que indica o comprimento dos dados)
    } else {
      ESP_BT.print(" and length ");
      ESP_BT.println(packetSize);
      
      Serial.print(" and length ");   // aqui somente indica o comprimento recebido
      Serial.println(packetSize);
      ESP_BT.print("\t");
      ESP_BT.print("\t");      
      ESP_BT.print("\t");  
      ESP_BT.print("\t"); 
      ESP_BT.print("\t"); 
      ESP_BT.print("\t");  
      //delay(20);
      //ESP_BT.println();


      //Imprime os dados somente se o pacote recebido não foi de requisição
      // only print packet data for non-RTR packets
      while (CAN.available()) {
        

        dados = CAN.read();
        Serial.print(dados, HEX);
        Serial.print("\t");
        ESP_BT.print(dados, HEX);
        ESP_BT.print("\t");
        
        //date = (char)(CAN.read());
        //Serial.print(date);
        //ESP_BT.print(date);






        
        //Serial.print((char)CAN.read());
        //ESP_BT.println((char)CAN.read());
      }
      Serial.println();
      ESP_BT.println();
    }

    Serial.println();
    ESP_BT.println();
  }
}
