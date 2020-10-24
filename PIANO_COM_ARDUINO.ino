
#define NOTA_DO 264
#define NOTA_RE 297
#define NOTA_MI 330
#define NOTA_FA 352
#define NOTA_SOL 396
#define NOTA_LA 440
#define NOTA_SI 495

int botao_do = 2;
int botao_re = 3;
int botao_mi = 4;
int botao_fa = 5;
int botao_sol = 6;
int botao_la = 7;
int botao_si = 8;

int pino_buzzer = 9;

void setup() {

  pinMode(botao_do, INPUT_PULLUP);
  pinMode(botao_re, INPUT_PULLUP);
  pinMode(botao_mi, INPUT_PULLUP);
  pinMode(botao_fa, INPUT_PULLUP);
  pinMode(botao_sol, INPUT_PULLUP);
  pinMode(botao_la, INPUT_PULLUP);
  pinMode(botao_si, INPUT_PULLUP);
  

pinMode(pino_buzzer, OUTPUT);

}

void loop() {

if(digitalRead(botao_do) == LOW){
   tone(pino_buzzer, NOTA_DO);
   delay(250);
   noTone(pino_buzzer);
}


if(digitalRead(botao_re) == LOW){
   tone(pino_buzzer, NOTA_RE);
   delay(250);
   noTone(pino_buzzer);
}



if(digitalRead(botao_mi) == LOW){
   tone(pino_buzzer, NOTA_MI);
   delay(250);
   noTone(pino_buzzer);
}


if(digitalRead(botao_fa) == LOW){
   tone(pino_buzzer, NOTA_FA);
   delay(250);
   noTone(pino_buzzer);
}


if(digitalRead(botao_sol) == LOW){
   tone(pino_buzzer, NOTA_SOL);
   delay(250);
   noTone(pino_buzzer);
}


if(digitalRead(botao_la) == LOW){
   tone(pino_buzzer, NOTA_LA);
   delay(250);
   noTone(pino_buzzer);
}


if(digitalRead(botao_si) == LOW){
   tone(pino_buzzer, NOTA_SI);
   delay(250);
   noTone(pino_buzzer);
}

 
}

