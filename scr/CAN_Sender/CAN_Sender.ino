// Copyright (c) Sandeep Mistry. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include <CAN.h>

void setup() {
  Serial.begin(115200);
  while (!Serial);

  Serial.println("CAN Sender");

  // start the CAN bus at 250 kbps
  if (!CAN.begin(250E3)) {
    Serial.println("Starting CAN failed!");
    while (1);
  }
}

void loop() {

  // Usando o CAN 2.0 padrão
  //Envia um pacote: o id tem 11 bits e identifica a mensagem (prioridade, evento)
  //o bloco de dados deve possuir até 8 bytes
  
  // send packet: id is 11 bits, packet can contain up to 8 bytes of data
  Serial.println("Sending data 1 ");

  CAN.beginPacket(0x185);  //389 dec
  CAN.write(0x00);
  CAN.write(0x00);
  CAN.write(0x00);
  CAN.write(0x00);
  CAN.write(0x01);
  CAN.write(0x16);
  CAN.write(0x00);
  CAN.write(0x00);
  CAN.endPacket();

  Serial.println("Sent data 1 \n");

  delay(1000);

  Serial.println("Sending data 2");

  CAN.beginPacket(0x185);
  CAN.write(0x00);
  CAN.write(0x00);
  CAN.write(0x00);
  CAN.write(0x00);
  CAN.write(0x02);
  CAN.write(0x16);
  CAN.write(0x00);
  CAN.write(0x00);
  CAN.endPacket();

  Serial.println("Sent data 2  \n");

  delay(1000);
  

  Serial.println("sending data 3");

  CAN.beginPacket(0x185);
  CAN.write(0x00);
  CAN.write(0x00);
  CAN.write(0x00);
  CAN.write(0x80);
  CAN.write(0x00);
  CAN.write(0x16);
  CAN.write(0x00);
  CAN.write(0x00);
  CAN.endPacket();

  Serial.println("sent data 3\n");

  delay(1000);

  //Usando CAN 2.0 Estendido
  //Envia um pacote: o id tem 29 bits e identifica a mensagem (prioridade, evento)
  //o bloco de dados deve possuir até 8 bytes

  // send extended packet: id is 29 bits, packet can contain up to 8 bytes of data

  /*
  Serial.print("Sending extended packet ... ");

  CAN.beginExtendedPacket(0xabcdef);  //id 11259375 decimal ( abcdef em hexa) = 24 bits preenchidos até aqui
  CAN.write('w');
  CAN.write('o');
  CAN.write('r');
  CAN.write('l');
  CAN.write('d');
  CAN.endPacket();  //encerra o pacote para envio

  Serial.println("done");

  delay(1000);
  */
}
