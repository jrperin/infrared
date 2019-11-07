/*
 * IRremote: IRsendDemo - demonstrates sending IR codes with IRsend
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */
 
#include <IRremote.h>

// #define ligar 0xE0E040BF //Codigo do botao power da tv samsung
// #define volume 0xE0E0E01F //Codigo do botao volume+ da tv samsung
#define meu_codigo 0xF7C03F //Codigo "ON" daquele controle remoto de fita de led (pequeno)

IRsend irsend;

void setup()
{
}

void loop() {
  irsend.sendSAMSUNG(meu_codigo, 32); // Envia o comando de ligar/desligar
  delay (1000); // Cria um atraso entre cada envio
}
