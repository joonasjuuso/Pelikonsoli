void jukebox(){
  reset();
  lcd.clear();
  delay(100);
      lcd.write((byte)0);
      lcd.print(F("  Tetris        "));
      lcd.setCursor(0,1);
      lcd.write((byte)1);
      lcd.print(F("  Toto          "));
      reset();
      delay(3000);
      lcd.clear();
      lcd.write((byte)2);
      lcd.print("  Take on me    ");
      lcd.setCursor(0,1);
      lcd.write((byte)3);
      lcd.print("  All Star      ");
      delay(3000);
      lcd.clear();
      lcd.write((byte)4);
      lcd.print(" Very good song ");
      while(true)
          {
          alustus();
          delay(1);
          if(ylos==1  || signals.value==16724175)
            {
              delay(50);
              lcd.clear();
              lcd.print(F("Now playing:    "));
              lcd.setCursor(0,1);
              lcd.print(F("Tetris          "));
              tetris();
              delay(1000);
              lcd.clear();
              break;
            }
          if(alas==1)
            {
              delay(50);
              reset();
              lcd.clear();
              lcd.print(F("Now playing:    "));
              lcd.setCursor(0,1);
              lcd.print(F("Toto - Africa   "));
              Toto();
              delay(1000);
              lcd.clear();
              break;
             }
           if(oikea==1)
             {
              delay(50);
              reset();
              lcd.clear();
              lcd.print(F("Now playing:     "));
              lcd.setCursor(0,1);
              lcd.print(F("Take on me       "));
              takeonme();
              delay(1000);
              lcd.clear();
              break;
             }
           if(vasen==1)
            {
              delay(50);
              reset();
              lcd.clear();
              lcd.print(F("Now playing:     "));
              lcd.setCursor(0,1);
              lcd.print(F("All Star         "));
              yes();
              delay(1000);
              lcd.clear();
              break;
            }
           if(ok==1)
            {
              delay(50);
              reset();
              lcd.clear();
              lcd.print(("Now playing:      "));
              lcd.setCursor(0,1);
              lcd.print(F("Very good song   "));
              yes2();
              delay(1000);
              lcd.clear();
              break;
            }
        }
    
    
}
