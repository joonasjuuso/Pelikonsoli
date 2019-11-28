
void megalovania()
{
float tempo = 180;
//note values, use these for playing notes/rests
float fourth = (60 / tempo) * 1000;
float half = (120 / tempo) * 1000;
float eight = (30 / tempo) * 1000;
float six = (15 / tempo) * 1000;
  playNote(six, 294);
  playNote(six, 294);
  playNote(eight, 587);
  playNote(eight + six, 440);
  playNote(six, 415);
  playRest(six*1.05);
  playNote(eight, 392);
  playNote(eight, 349);
  playNote(six, 294);
  playNote(six, 349);
  playNote(six, 392);
  //2nd measure
  playNote(six, 262);
  playNote(six, 262);
  playNote(eight, 587);
  playNote(eight + six, 440);
  playNote(six, 415);
  playRest(six*1.05);
  playNote(eight, 392);
  playNote(eight, 349);
  playNote(six, 294);
  playNote(six, 349);
  playNote(six, 392);
  //3rd measure
  playNote(six, 247);
  playNote(six, 247);
  playNote(eight, 587);
  playNote(eight + six, 440);
  playNote(six, 415);
  playRest(six*1.05);
  playNote(eight, 392);
  playNote(eight, 349);
  playNote(six, 294);
  playNote(six, 349);
  playNote(six, 392);
  int i;
  //4th measure
  playNote(six, 233);
  playNote(six, 233);
  playNote(eight,587);
  playNote(eight + six, 440);
  playNote(six, 415);
  playRest(six *1.05);
  playNote(eight, 392);
  playNote(eight, 349);
  playNote(six, 294);
  playNote(six, 349);
  playNote(six, 392);
  //5th measure
  for(i=0;i<=2;i++){
  playNote(six, 294);
  playNote(six, 294);
  playNote(eight, 587);
  playNote(eight + six, 440);
  playNote(six, 415);
  playRest(six*1.05);
  playNote(eight, 392);
  playNote(eight, 349);
  playNote(six, 294);
  playNote(six, 349);
  playNote(six, 392);
  //6th
  playNote(six, 262);
  playNote(six, 262);
  playNote(eight, 587);
  playNote(eight + six, 440);
  playNote(six, 415);
  playRest(six*1.05);
  playNote(eight, 392);
  playNote(eight, 349);
  playNote(six, 294);
  playNote(six, 349);
  playNote(six, 392);
  //7th
  playNote(six, 247);
  playNote(six, 247);
  playNote(eight, 587);
  playNote(eight + six, 440);
  playNote(six, 415);
  playRest(six*1.05);
  playNote(eight, 392);
  playNote(eight, 349);
  playNote(six, 294);
  playNote(six, 349);
  playNote(six, 392);
  //8th
  playNote(six, 233);
  playNote(six, 233);
  playNote(eight,587);
  playNote(eight + six, 440);
  playNote(six, 415);
  playRest(six *1.05);
  playNote(eight, 392);
  playNote(eight, 349);
  playNote(six, 294);
  playNote(six, 349);
  playNote(six, 392);
  }
  playNote(six, 587);
  playNote(six, 587);
  playNote(eight,1175);
  playNote(eight + six, 880);
  playNote(six, 831);
  playRest(six *1.05);
  playNote(eight, 784);
  playNote(eight, 698);
  playNote(six, 587);
  playNote(six, 698);
  playNote(six, 784);
}

//plays a note, takes in a duration and frequency
int playNote(float duration, float freq){
  //the subtraction ensures that there is seperation between notes
  //change the value that duration is multiplied by to get staccato, marcado, legado, etc...
  TimerFreeTone(summeri, freq, duration - (duration * 0.3));
  delay(duration - (duration * 0.05));
}

int playRest(float duration){
  delay(duration - (duration * 0.3));
  delay(duration - (duration * 0.05));
}
