

// include the library code:
#include <LiquidCrystal.h>
#include <IRremote.h>
#include <TimerFreeTone.h>



const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; //näytön pinnejä
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int input_pin = 6;   //näytön input pin
IRrecv irrecv(input_pin);
decode_results signals;   //kaukosäätimen ominaisuuksien määritys
  int nappi;
  int counter=0;
  int volume[]= { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int voimakkuus=5;
  int ylos=0;
  int alas=0;
  int oikea=0;
  int vasen=0;
  int ok=0;
  int randNumber=0;
const int summeri=7;   //summerin input pin
byte nuoliYlos[8] = {   //määrittää
  B00000,
  B00000,
  B00100,
  B01110,
  B10101,
  B00100,
  B00100,
  B00000
};
byte nuoliAlas[8] = {
  B00000,
  B00100,
  B00100,
  B10101,
  B01110,
  B00100,
  B00000,
  B00000
};
byte nuoliOikea[8] = {
  B00000,
  B01000,
  B00100,
  B00010,
  B11111,
  B00010,
  B00100,
  B01000
};
byte nuoliVasen[8] = {
  B00000,
  B00010,
  B00100,
  B01000,
  B11111,
  B01000,
  B00100,
  B00010
};
byte nappiA[8] = {
  B00000,
  B00000,
  B00100,
  B01110,
  B11111,
  B01110,
  B00100,
  B00000
};

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2); //lcd aloitus
  Serial.begin(9600);
  pinMode(27, OUTPUT);
  pinMode(A0, INPUT);
  irrecv.enableIRIn(); // enable input from IR receiver
  lcd.noDisplay();    //aloitetaan pimeänä
  lcd.createChar(0, nuoliYlos);
  lcd.createChar(1, nuoliAlas);
  lcd.createChar(2, nuoliOikea);
  lcd.createChar(3, nuoliVasen);
  lcd.createChar(4, nappiA);
  randomSeed(analogRead(1));
}

void loop() {
  // set the cursor to (0,0):
  lcd.setCursor(0,0);   //aloittaa printtaamaan aina vasen ylä lcd
  if (irrecv.decode(&signals)) 
      { //Kaukosäätimen toimintojen määrittämistä
      Serial.println(signals.value);
      irrecv.resume();
      }
  
  onOff();
  reset();
  alustus();
  aloitusnaytto();
  if(ylos==1  || signals.value==16724175)
    { reset();
      lcd.clear();
      delay(50);
      tekstipeli();
    }
  else if(alas==1 || signals.value==16718055)
    { reset();
      lcd.clear();
      delay(200);
      jukebox();
    }
  else if( signals.value==16716015 || signals.value==16726215 || signals.value==16734885 || signals.value==16728765 || signals.value==16730805 || signals.value==16732845 || signals.value==16754775 || signals.value==16756815 || signals.value==16720605 || signals.value==16712445 || signals.value==16761405 || signals.value==16753245 || signals.value==16736925)
    {
      uudestaan();
    }
  else if(signals.value==16769565)
    {
      voitit();
    }
}
