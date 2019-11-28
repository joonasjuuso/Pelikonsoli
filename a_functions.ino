#include <pitches.h>

void _delay(float seconds){
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime);
}

void voittoaani()
  {
    for(int o=0;o<2;o++)
      {
          TimerFreeTone(summeri,NOTE_A5,100);
          delay(20);
          TimerFreeTone(summeri,NOTE_B5,100);
          delay(20);
          TimerFreeTone(summeri,NOTE_C5,100);
          delay(20);
          TimerFreeTone(summeri,NOTE_B5,100);
          delay(20);
          TimerFreeTone(summeri,NOTE_C5,100);
          delay(20);
          TimerFreeTone(summeri,NOTE_D5,100);
          delay(20);
          TimerFreeTone(summeri,NOTE_C5,100);
          delay(20);
          TimerFreeTone(summeri,NOTE_D5,100);
          delay(20);
          TimerFreeTone(summeri,NOTE_E5,100);
          delay(20);
          TimerFreeTone(summeri,NOTE_D5,100);
          delay(20);
          TimerFreeTone(summeri,NOTE_E5,100);
          delay(20);
          TimerFreeTone(summeri,NOTE_E5,100);
          delay(20);
      }
  }
void tuplapotti()
  {
    for(int o=0;o<2;o++)
        {
          TimerFreeTone(summeri,NOTE_F1,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_C2,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_G1,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_C2,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_D2,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_C2,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_G1,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_C2,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_C2,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_C2,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_G1,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_B1,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_B1,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_A1,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_G1,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_F1,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_C2,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_G1,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_C2,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_D2,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_C2,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_G1,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_C2,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_B1,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_B1,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_G1,100);
          delay(50);
          TimerFreeTone(summeri,NOTE_C2,100);
          delay(50);
  }
  }

void havioaani()
  {
          TimerFreeTone(summeri,NOTE_G4,150);
          delay(250);
          TimerFreeTone(summeri,NOTE_C4,400);
          delay(500);
  }
void aloitusnaytto()  //startup screeni
{ 
  lcd.write((byte)0);
  lcd.print(F("  Tekstipeli    "));
  lcd.setCursor(0,1);
  lcd.write((byte)1);
  lcd.print(F("  Music Box     "));
}

void reset() //määrittaa kaikki muuttujat 0.
{
  signals.value=0;
  nappi=1023;
  ylos=0;
  alas=0;
  oikea=0;
  vasen=0;
  ok=0;
}

void alustus() //alustaa arvot
{
  decode_results signals;
  nappi=analogRead(A0);
  nappiReset();
}

void nappiReset() //laskurityyli napeille
  {
    if((nappi >=100) && (nappi<= 200))
      {
        ylos=1;
      }
    if((nappi >=300) && (nappi<= 400))
      {
        alas=1;
      }
    if((nappi >=450) && (nappi<= 600))
      {
        oikea=1;
      }
    if((nappi >=0) && (nappi<=100))
      {
        vasen=1;
      }
    if((nappi >=650) && (nappi<= 800))
      {
        ok=1;
      }
  }
void onOff(){     //countertyyli kaukosäätimen on/off napille
  
    if(signals.value==16580863)
    {
      counter++;
    }
    if(counter % 2)
      {
        lcd.noDisplay();
        pinMode(13,OUTPUT);
        digitalWrite(13,LOW);
      }
    else if(counter==0)
      {
        lcd.noDisplay();
        pinMode(13,OUTPUT);
        digitalWrite(13,LOW);
      }
    else
      {
        lcd.display();
        pinMode(13,OUTPUT);
        digitalWrite(13,HIGH);
      }
}
void aani() //testimielessä volumefunktio kaukosäätimelle (ei toimi)
  {
    if(signals.value==16589023)
    {
      voimakkuus+1;
    }
  else if(signals.value==16593103)
    {
      voimakkuus-1;
    }
  }
void uudestaan(){ //aloitusvalikossa uudestaan jos eri nappi kaukosäätimestä (ei tarvita nykyisessä versiossa)
  lcd.clear();
  lcd.print(F("Valitse uudestaan."));
  signals.value=0;
  delay(2000);
  lcd.clear();
  aloitusnaytto();
}

void voitit(){  //easter egg peliin aikaisemmassa versiossa
  lcd.clear();
  lcd.print(F("Voitit pelin!"));
  signals.value=0;
  delay(10000);
  lcd.clear();
  aloitusnaytto();
}
