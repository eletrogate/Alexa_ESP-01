// Aqui definimos o pino de cada relé
#define Rele1 0
#define Rele2 1
#define Rele3 2
#define Rele4 3

void setup() {
  //Aqui definimos cada pino de relé como saída
  pinMode(Rele1, OUTPUT);
  pinMode(Rele2, OUTPUT);
  pinMode(Rele3, OUTPUT);
  pinMode(Rele4, OUTPUT);
}

void loop() {
  //Aqui fazemos com apenas um relé seja LOW, e todos os outros HIGH, e vai alternando a cada segundo
  digitalWrite(Rele1, LOW);
  digitalWrite(Rele2, HIGH);
  digitalWrite(Rele3, HIGH);
  digitalWrite(Rele4, HIGH);
  delay(1000);
  digitalWrite(Rele1, HIGH);
  digitalWrite(Rele2, LOW);
  digitalWrite(Rele3, HIGH);
  digitalWrite(Rele4, HIGH);
  delay(1000);
  digitalWrite(Rele1, HIGH);
  digitalWrite(Rele2, HIGH);
  digitalWrite(Rele3, LOW);
  digitalWrite(Rele4, HIGH);
  delay(1000);
  digitalWrite(Rele1, HIGH);
  digitalWrite(Rele2, HIGH);
  digitalWrite(Rele3, HIGH);
  digitalWrite(Rele4, LOW);
  delay(1000);
}




/*  =============== Versão condensada ===============

#define Rele1 0
#define Rele2 1
#define Rele3 2
#define Rele4 3

void setup() {
  for(int i = 0; i < 4; i++) pinMode(i, OUTPUT); // Seta todas as portas como saída
}

void loop() {
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++) digitalWrite((i+j)%4,constrain(j,0,1)); // Faz com que apenas uma saída seja LOW a cada segundo, e todas as outras HIGH
    delay(1000);
  }
}
*/