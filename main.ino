
const int PIN_BOTAO_A = 6;  
const int PIN_BOTAO_B = 7;  
const int PIN_BOTAO_C = 5;  
const int PIN_BOTAO_D = 4;  
const int PIN_LED = 13;     

void setup() {
  pinMode(PIN_BOTAO_A, INPUT_PULLUP);
  pinMode(PIN_BOTAO_B, INPUT_PULLUP);
  pinMode(PIN_BOTAO_C, INPUT_PULLUP);
  pinMode(PIN_BOTAO_D, INPUT_PULLUP);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  bool bA = !digitalRead(PIN_BOTAO_A);
  bool bB = !digitalRead(PIN_BOTAO_B);
  bool bC = !digitalRead(PIN_BOTAO_C);
  bool bD = !digitalRead(PIN_BOTAO_D);


  bool resultado = bD && (bA || (bB && !bC));


  if (resultado) {
    digitalWrite(PIN_LED, HIGH);
  } else {
    digitalWrite(PIN_LED, LOW);
  }
  delay(10);
}
