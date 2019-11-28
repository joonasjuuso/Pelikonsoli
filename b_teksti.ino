void tekstipeli(){    //reset pois viimesestä funktiosta jos haluat
  int randNumber;                   //lopettaa pelin
  reset();
  lcd.clear();
  lcd.print(F("On kuun 1.paiva "));
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print(F("Tukipaiva siis. "));
  delay(2500);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(F("Mutta tuet eivat"));
  lcd.setCursor(0,1);
  lcd.print(F("ole tulleet.    "));
  delay(3000);
  lcd.clear();
  lcd.print(F("Mita teet?      "));
  delay(2500);
  lcd.clear();
  lcd.write((byte)0);
  lcd.print(F("   Mene kelaan. "));
  lcd.setCursor(0,1);
  lcd.write((byte)1);
  lcd.print(F("   Menet kotiin "));
  while(ylos==0||alas==0||oikea==0||vasen==0||ok==0)
  {
    delay(1);
    alustus();
    if(ylos==1 || signals.value==16724175)
    {
      reset();
      delay(100);
      lcd.clear();
      lcd.print(F("Menit kelaan    "));
      delay(2000);
      lcd.clear();
      lcd.print(F("Et saanut rahaa."));
      delay(2000);
      lcd.clear();
      lcd.print(F("Sinun pitaisi   "));
      lcd.setCursor(0,1);
      lcd.print(F("menna toihin.   "));
      delay(2500);
      lcd.clear();
      reset();
      while(ylos==0||alas==0||oikea==0||vasen==0||ok==0)
       { 
        delay(1);
        lcd.write((byte)0);
        lcd.print(F("   Toihin       "));
        lcd.setCursor(0,1);
        lcd.write((byte)1);
        lcd.print(F("   Koulu  Koti  "));
        lcd.setCursor(10,1);
        lcd.write((byte)2);
        delay(50);
        alustus();
        if(ylos==1  || signals.value==16724175)
        {
          reset();
          delay(100);
          lcd.clear();
          lcd.print(F("Oletko varma?  "));
          lcd.setCursor(0,1);         
          lcd.write((byte)0);
          lcd.print(F("  Kylla    Ei   "));
          lcd.setCursor(9,1);
          lcd.write((byte)1);
          delay(1000);
          while(ylos==0||alas==0||oikea==0||vasen==0||ok==0)
            {
              delay(1);
              alustus();
              if(ylos==1)
                {
                  delay(200);
                  ylos=2;
                  lcd.clear();
                  lcd.print(F("Ei sun oo pakko."));
                  delay(2000);
                  lcd.setCursor(0,1);
                  lcd.print(F("Toisaalta...    "));
                  delay(2000);
                  lcd.clear();
                  lcd.print(F("Posti tarvitsisi"));
                  lcd.setCursor(0,1);
                  lcd.print(F("vuokratyovoimaa "));
                  delay(3500);
                  lcd.clear();
                  lcd.print(F("Ei sulla taida  "));
                  lcd.setCursor(0,1);
                  lcd.print(F("nyt olla muita  "));
                  delay(3000);
                  lcd.clear();
                  lcd.print(F("vaihtoehtoja.   "));
                  delay(2000);
                  lcd.clear();
                  lcd.print(F("Tervetuloa vaan "));
                  lcd.setCursor(0,1);
                  lcd.print(F("toihin. :)      "));
                  delay(4000);
                  lcd.clear();
                  lcd.print(F("Voitit (ja myos "));
                  lcd.setCursor(0,1);
                  lcd.print(F("havisit) pelin! "));
                  voittoaani();
                  delay(1000);
                  havioaani();
                  lcd.clear();
                  break;
                }
                
        }
        }
        if(alas==1 || signals.value==16718055)
        {
          delay(100);
          reset();
          lcd.clear();
          lcd.print(F("Et sa kuitenkaan"));
          lcd.setCursor(0,1);
          lcd.print(F("opiskele.       "));
          delay(3500);
          lcd.clear();
          lcd.print(F("Haluatko testata"));
          lcd.setCursor(0,1);
          lcd.print(F("viela kelaa?    "));
          delay(3500);
          lcd.clear();
          lcd.print(F("Vai menetko vaan"));
          lcd.setCursor(0,1);
          lcd.print(F("toihin?         "));
          delay(3500);
          lcd.clear();
          lcd.write((byte)0);
          lcd.print(F("  1. Kelaan     "));
          lcd.setCursor(0,1);
          lcd.write((byte)1);
          lcd.print(F("  2. Toihin     "));
          while(ylos==0||alas==0||oikea==0||vasen==0||ok==0)
            {
              delay(1);
              alustus();
              if(ylos==1)
                {
                 delay(100);
                 reset();
                 lcd.clear();
                 lcd.print(F("Kela laittoi    "));
                 lcd.setCursor(0,1);
                 lcd.print(F("sinut karenssiin"));
                 delay(2500);
                 lcd.clear();
                 lcd.print(F("Sinun on pakko  "));
                 lcd.setCursor(0,1);
                 lcd.print(F("menna toihin    "));
                 delay(2500);
                 lcd.clear();
                 lcd.print(F("Sina saat valita"));
                 lcd.setCursor(0,1);
                 lcd.print(F("vain naista:    "));
                 delay(2500);
                 lcd.clear();
                 lcd.write((byte)0);
                 lcd.print(F("   Kaupan kassa "));
                 lcd.setCursor(0,1);
                 lcd.write((byte)1);
                 lcd.print(F("   Siivooja     "));
                 while(ylos==0||alas==0||oikea==0||vasen==0||ok==0)
                  {
                    delay(1);
                    alustus();
                    if(ylos==1)
                      {
                       ylos=2;
                       lcd.clear();
                       lcd.print(F("Valitsit kassan "));
                       lcd.setCursor(0,1);
                       delay(2000);
                       lcd.print(F("Havisit pelin   "));
                       havioaani();
                       delay(4000);
                       lcd.clear();
                       break;
                      }
                    if(alas==1)
                      { 
                        alas=2;
                        lcd.clear();
                        lcd.print(F("Menit siivoamaan"));
                        delay(2000);
                        lcd.setCursor(0,1);
                        lcd.print(F("Havisit pelin   "));
                        havioaani();
                        delay(4000);
                        lcd.clear();
                        break;
                      }
                  }
                 }
              if(alas==1)
                {
                  alas=2;
                  delay(100);
                  lcd.clear();
                  lcd.print(F("Paatit vihdoin "));
                  lcd.setCursor(0,1);
                  lcd.print(F("menna toihin.  "));
                  delay(2500);
                  lcd.clear();
                  lcd.print(F("Voitit pelin.  "));
                  voittoaani();
                  delay(3000);
                  lcd.clear();
                  break;
                }
              if(ylos>0||alas>0||oikea>0||vasen>0||ok>0||alas==2||ylos==2||oikea==2)
              break;
            }
          
        }
        if(oikea==1)
          {
            delay(100);
            oikea=2;
            lcd.clear();
            lcd.print(F("Menit kotiin    "));
            delay(2500);
            lcd.clear();
            lcd.print(F("Kela myonsi     "));
            lcd.setCursor(0,1);
            lcd.print(F("sinulle tukesi  "));
            delay(3000);
            lcd.clear();
            lcd.print(F("Voit nyt elaa   "));
            lcd.setCursor(0,1);
            lcd.print(F("verorahoilla    "));
            delay(3000);
            lcd.clear();
            lcd.print(F("Voitit pelin    "));
            voittoaani();
            delay(3000);
            lcd.clear();
            break;
          }
            if(ylos>0||alas>0||oikea>0||vasen>0||ok>0)
              break;
      }
    }
      if(alas==1)
      { 
        reset();
        delay(200);
        lcd.clear();
        lcd.print(F("Mita sa muka    "));
        lcd.setCursor(0,1);
        lcd.print(F("kotona teet?    "));
        delay(3000);
        lcd.clear();
        lcd.print(F("Valitsepa uusiks"));
        lcd.setCursor(0,1);
        lcd.print(F("                "));
        delay(3000);
        lcd.clear();
        lcd.write((byte)0);
        lcd.print(F("  Toihin        "));
        lcd.setCursor(0,1);
        lcd.write((byte)1);
        lcd.print(F("  Kotiin        "));
        while(ylos==0||alas==0||oikea==0||vasen==0||ok==0)
          {
            delay(1);
            alustus();
            if(ylos==1)
              {
                reset();
                delay(100);
                lcd.clear();
                lcd.print(F("Noni.         "));         //tulee jatkumaan
                lcd.setCursor(0,1);
                lcd.print(F("Hyvin valittu "));
                delay(3500);
                lcd.clear();
                lcd.print(F("Olet lahella  "));
                lcd.setCursor(0,1);
                lcd.print(F("voittoa.      "));
                delay(3500);
                lcd.clear();
                lcd.print(F("Viela on mahd-"));
                lcd.setCursor(0,1);
                lcd.print(F("ollista havita"));
                delay(3500);
                lcd.clear();
                lcd.print(F("Se mita nyt   "));
                lcd.setCursor(0,1);
                lcd.print(F("valitset      "));
                delay(3500);
                lcd.clear();
                lcd.print(F("maarittaa     "));
                lcd.setCursor(0,1);
                lcd.print(F("loppupelin.   "));
                delay(3500);
                lcd.clear();
                lcd.print(F("Oletko:       "));
                delay(2500);
                lcd.clear();
                lcd.write((byte)0);
                lcd.print(F("  Ohjelmoija  "));
                delay(4000);
                lcd.clear();
                lcd.write((byte)1);
                lcd.print(F("  Laitesuunni-"));
                lcd.setCursor(0,1);
                lcd.print(F("ttelija (IoT) "));
                while(ylos==0||alas==0||oikea==0||vasen==0||ok==0)
                  {
                    delay(1);
                    alustus();
                    if(ylos==1)
                      {
                        ylos=2;
                        lcd.clear();
                        lcd.print(F("Huijasin.       "));
                        delay(2000);
                        lcd.setCursor(0,1);
                        lcd.print(F("Ja sina huijasit"));
                        delay(3500);
                        lcd.clear();
                        lcd.print(F("Jos haluaisit   "));
                        lcd.setCursor(0,1);
                        lcd.print(F("koodariksi, niin"));
                        delay(3500);
                        lcd.clear();
                        lcd.print(F("et olisi tassa  "));
                        lcd.setCursor(0,1);
                        lcd.print(F("leikkimassa     "));
                        delay(3500);
                        lcd.clear();
                        lcd.print(F("jollakin hiton  "));
                        lcd.setCursor(0,1);
                        lcd.print(F("Arduinolla....  "));
                        delay(4000);
                        lcd.clear();
                        lcd.print(F("Ei olisi kannat-"));
                        lcd.setCursor(0,1),
                        lcd.print(F("tanut valehdella"));
                        delay(3500);
                        lcd.clear();
                        lcd.print(F("HAVISIT PELIN!!!"));
                        havioaani();
                        delay(4000);
                        lcd.clear();
                        break;
                      }
                    if(alas==1)
                      {
                        reset();
                        lcd.clear();
                        lcd.print(F("Ainakin olit    "));
                        lcd.setCursor(0,1);
                        lcd.print(F("rehellinen.     "));
                        delay(3500);
                        lcd.clear();
                        lcd.print(F("Arvostan sita..."));
                        lcd.setCursor(0,1);
                        lcd.print(F("vaikka oletkin  "));
                        delay(3500);
                        lcd.clear();
                        lcd.print(F("laitepuolella   "));
                        lcd.setCursor(0,1);
                        lcd.print(F("etka ohjelmointi"));
                        delay(3500);
                        lcd.clear();
                        lcd.print(F("saat viela yhden"));
                        lcd.setCursor(0,1);
                        lcd.print(F("mahdollisuuden. "));
                        delay(3500);
                        lcd.clear();
                        lcd.print(F("Vastaa tahan    "));
                        lcd.setCursor(0,1);
                        lcd.print(F("seuraavaan      "));
                        delay(2500);
                        lcd.clear();
                        lcd.print(F("kysymykseen nyt "));
                        lcd.setCursor(0,1);
                        lcd.print(F("oikein:         "));
                        delay(3000);
                        lcd.clear();
                        lcd.print(F("Mika on Oiva?   "));
                        lcd.setCursor(0,1);
                        lcd.print(F("Onko se:        "));
                        delay(4000);
                        lcd.clear();
                        lcd.write((byte)0);
                        lcd.print(F("  Baari Oulussa "));
                        lcd.setCursor(0,1);
                        lcd.write((byte)1);
                        lcd.print(F("  Nettisivu     "));
                        while(ylos==0||alas==0||oikea==0||vasen==0||ok==0)
                          {
                            delay(1);
                            alustus();
                            if(ylos==1)
                              {
                                ylos=2;
                                lcd.clear();
                                lcd.print(F("...             "));
                                delay(2000);
                                lcd.setCursor(0,1);
                                lcd.print(F("HAVISIT PELIN!  "));
                                havioaani();
                                delay(4000);
                                lcd.clear();
                                break;
                              }
                             if(alas==1)
                              {
                                alas=2;
                                lcd.clear();
                                lcd.print(F("VOITIT PELIN!!  "));
                                voittoaani();
                                delay(4000);
                                lcd.clear();
                                break;
                              }
                          }
                      }
                    if(ylos==2||alas==2||oikea==2||vasen==2)
                    break;
                  }
              }
            if(alas==1)
              {
                reset();
                delay(100);
                lcd.clear();
                lcd.print(F("Et sa paase     "));
                lcd.setCursor(0,1);
                lcd.print(F("kotiin.         "));
                delay(3500);//tulee jatkumaan
                lcd.clear();
                lcd.print(F("Oon vihjannu    "));
                lcd.setCursor(0,1);
                lcd.print(F("etta sun pitas  "));
                delay(3500);
                lcd.clear();
                lcd.print(F("menna toihin.   "));
                delay(3000);
                lcd.clear();
                lcd.print(F("Jos et kuuntele "));
                lcd.setCursor(0,1);
                lcd.print(F("niin haviat.    "));
                delay(3500);
                lcd.clear();
                lcd.print(F("Yksinkertainen  "));
                lcd.setCursor(0,1);
                lcd.print(F("kysymys:        "));
                delay(3500);
                lcd.clear();
                lcd.print(F("Menetko toihin?"));
                lcd.setCursor(0,1);
                lcd.write((byte)0);
                lcd.print(F("  Kylla   Ei   "));
                lcd.setCursor(9,1);
                lcd.write((byte)1);
                while(ylos==0||alas==0||oikea==0||vasen==0||ok==0)
                  {
                    delay(1);
                    alustus();
                    if(ylos==1)
                      {
                        delay(100);
                        ylos=2;
                        lcd.clear();
                        lcd.print(F("Ei se ny niin   "));
                        lcd.setCursor(0,1);
                        lcd.print(F("vaikeeta ollu   "));
                        delay(3500);
                        lcd.clear();
                        lcd.print(F("Saat viela      "));
                        lcd.setCursor(0,1);
                        lcd.print(F("rahaakin!       "));
                        delay(3500);
                        lcd.clear();
                        lcd.print(F("Toivottavasti et"));
                        lcd.setCursor(0,1);
                        lcd.print(F("jatkossa oo yhta"));
                        delay(3500);
                        lcd.clear();
                        lcd.print(F("itsepainen...   "));
                        delay(2000);
                        lcd.setCursor(0,1);
                        lcd.print(F("Voitit pelin... "));
                        voittoaani();
                        delay(5000);
                        break;
                      }
                   if(alas==1)
                    {
                      delay(100);
                      reset();
                      lcd.clear();
                      lcd.print(F("Joo ei mulla oo "));
                      lcd.setCursor(0,1);
                      lcd.print(F("muuta sanottavaa"));
                      delay(3500);
                      lcd.clear();
                      lcd.print(F("Painu helvettiin"));
                      lcd.setCursor(0,1);
                      lcd.print(F("taalta.         "));
                      delay(3500);
                      lcd.clear();
                      lcd.print(F("Itseasiassa...  "));
                      delay(2000);
                      lcd.setCursor(0,1);
                      lcd.print(F("Saat yrittaa    "));
                      delay(3000);
                      lcd.clear();
                      lcd.print(F("viela tuuriasi. "));
                      lcd.setCursor(0,1);
                      lcd.print(F("Jos siis haluat."));
                      delay(3500);
                      lcd.clear();
                      lcd.print(F("Haluatko koittaa"));
                      lcd.setCursor(0,1);
                      lcd.print(F("voittaa?        "));
                      delay(3500);
                      lcd.clear();
                      lcd.write((byte)0);
                      lcd.print(F("  Kylla   En    "));
                      lcd.setCursor(9,0);
                      lcd.write((byte)1);
                      while(ylos==0||alas==0||oikea==0||vasen==0||ok==0)
                        {
                          delay(50);
                          alustus();
                          if(ylos==1)
                            {
                              delay(100);
                              lcd.clear();
                              lcd.print(F("Selva.          "));
                              delay(3000);
                              lcd.clear();
                              lcd.print(F("Laitetaan lotto-"));
                              lcd.setCursor(0,1);
                              lcd.print(F("kone pyorimaan. "));
                              delay(4000);
                              lcd.clear();
                              lcd.print(F("Pyoritetaan.... "));
                              tuplapotti();
                              delay(1000);
                              lcd.clear();
                              randNumber=random(0,3);
                              if(randNumber==1||randNumber==2)
                                {
                                  delay(100);
                                  ylos=2;
                                  lcd.clear();
                                  lcd.print(F("Onneksi olkoon! "));
                                  delay(2500);
                                  lcd.setCursor(0,1);
                                  lcd.print(F("Voitit pelin!   "));
                                  voittoaani();
                                  delay(5000);
                                  lcd.clear();
                                  break;
                                }
                              if(randNumber==0||randNumber==3)
                                {
                                  delay(100);
                                  ylos=2;
                                  lcd.clear();
                                  lcd.print(F("Valitettavasti..."));
                                  delay(2000);
                                  lcd.setCursor(0,1);
                                  lcd.print(F("Havisit pelin!   "));
                                  havioaani();
                                  delay(4000);
                                  lcd.clear();
                                  break;
                                }
                            }
                          if(alas==1)
                            {
                              delay(100);
                              alas=2;
                              lcd.clear();
                              lcd.print(F("Et kylla osaa   "));
                              lcd.setCursor(0,1);
                              lcd.print(F("pelata tata...  "));
                              delay(3500);
                              lcd.clear();
                              lcd.print(F("HAVISIT PELIN!  "));
                              havioaani();
                              delay(4000);
                              lcd.clear();
                              break;
                            }
                        }
                    }
                   if(ylos==2||alas==2||oikea==2||vasen==2)
                   break;
                  }
              }
            if(ylos==2||alas==2||oikea==2||vasen==2)
            break;
          }
      }
     if(ylos==2||alas==2||oikea==2||vasen==2)
        break;
  }
}
