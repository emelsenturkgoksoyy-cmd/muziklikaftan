/*
   Mehter Marşı – Arduino Tek Dosya
   Do-Re-Mi formatında, cızırtısız
*/

#define BUZZER 8

// Notalar (DO-RE-MI)
#define DO4 262
#define DOs4 277
#define RE4 294
#define REs4 311
#define MI4 330
#define FA4 349
#define FAs4 370
#define SOL4 392
#define SOLs4 415
#define LA4 440
#define LAs4 466
#define SI4 494
#define DO5 523

// Nota çalma fonksiyonu
void notaCal(int nota, int sure) {
  tone(BUZZER, nota, sure);
  delay(sure);
  noTone(BUZZER);
  delay(30); // cızırtıyı azaltır
}

// Melodi ve süreler
int melody[] = {
  SI4, SI4, SI4, SI4, SI4, SI4, SI4, SI4,
  SI4, SI4, SI4, SI4, DO5, SI4, LA4, SOL4, SI4,
  LA4, LA4, LA4, LA4, SOL4, SI4, LA4,
  MI4, DOs4, LA4,
  LA4, SOL4, SI4, LA4, SOL4, FAs4, MI4, FAs4, SOL4, LA4, FAs4, RE4, MI4,
  LA4, SOL4, SI4, LA4, SOL4, FAs4, MI4, FAs4, SOL4, LA4, FAs4, RE4, MI4,
  MI4, SI4, SI4, SI4, LA4, SI4, DO5, RE4, SI4,
  MI4, SI4, SI4, SI4, LA4, SI4, DO5, RE4, SI4,
  DO5, LA4, SI4, SOL4, DO5, SI4, LA4, LA4,
  DO5, SI4, LA4, LA4, SI4, SOL4, FAs4, MI4, LA4,
  LA4, SOL4, FA4, FA4, RE4, MI4, FA4, SOL4, FA4, FAs4, MI4
};

int noteDurations[] = {
  400,400,400,1200,400,400,400,1200,
  400,400,400,400,400,400,400,400,
  400,400,400,1200,400,400,1200,
  400,400,1200,
  400,400,400,400,400,400,400,400,400,400,400,400,400,
  400,400,400,400,400,400,400,400,400,400,400,400,400,
  400,400,400,1200,400,400,400,400,400,
  400,400,400,1200,400,400,400,400,400,
  400,400,400,400,400,400,400,
  400,400,400,400,400,400,400,400,400,
  400,400,400,800,400,400,400,400,400,400,400
};

void setup() {
}

void loop() {
  int notes = sizeof(melody)/sizeof(melody[0]);
  for (int i = 0; i < notes; i++) {
    notaCal(melody[i], noteDurations[i]);
  }
  delay(2000); // tekrar öncesi bekleme
}
