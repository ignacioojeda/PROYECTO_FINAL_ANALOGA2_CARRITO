const int AIN1 = 16, AIN2 = 17, PWMA = 22;
const int BIN1 = 18, BIN2 = 19, PWMB = 23;
const int VEL = 180;  // velocidad de 0 a 255

void motores(int a1, int a2, int b1, int b2, int v) {
  digitalWrite(AIN1, a1); digitalWrite(AIN2, a2);
  digitalWrite(BIN1, b1); digitalWrite(BIN2, b2);
  analogWrite(PWMA, v);   analogWrite(PWMB, v);
}
void parar()     { motores(LOW, LOW, LOW, LOW, 0); delay(300); }
void adelante()  { motores(HIGH, LOW, HIGH, LOW, VEL); }
void atras()     { motores(LOW, HIGH, LOW, HIGH, VEL); }
void izquierda() { motores(LOW, HIGH, HIGH, LOW, VEL); }
void derecha()   { motores(HIGH, LOW, LOW, HIGH, VEL); }

void setup() {
  int pines[] = {16, 17, 18, 19, 22, 23};
  for (int p : pines) pinMode(p, OUTPUT);
  parar();
}
void loop() {
  adelante();  delay(2000); parar();
  atras();     delay(2000); parar();
  izquierda(); delay(1500); parar();
  derecha();   delay(1500); parar();
  delay(2000);
}