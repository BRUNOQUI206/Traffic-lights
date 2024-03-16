int ledVerde_A = 13;
int ledAmarelo_A = 12;
int ledVermelho_A = 11;
int ledVerde_B = 7;
int ledAmarelo_B = 6;
int ledVermelho_B = 5;
int ledVermelho_C = 4;
int ledVerde_C = 3;


void setup()
{
  pinMode(ledVermelho_A, OUTPUT);
  pinMode(ledAmarelo_A, OUTPUT);
  pinMode(ledVerde_A, OUTPUT);
  pinMode(ledVermelho_B, OUTPUT);
  pinMode(ledAmarelo_B, OUTPUT);
  pinMode(ledVerde_B, OUTPUT);
  pinMode(ledVerde_C, OUTPUT);
  pinMode(ledVermelho_C, OUTPUT);

}

void loop()
{ 
  // Começo do semafaro
  digitalWrite(ledVermelho_B, HIGH);
  digitalWrite(ledVermelho_C, HIGH);  



  // Primeiro Loop
  digitalWrite(ledVerde_A, HIGH);
  delay(5000);
  digitalWrite(ledVerde_A, LOW);

  digitalWrite(ledAmarelo_A, HIGH);
  delay(3000);
  digitalWrite(ledAmarelo_A, LOW);

  digitalWrite(ledVermelho_A, HIGH);
  // Final do Loop 1

  delay(2000); // Tempo de espera para troca

  // Segundo Loop
  digitalWrite(ledVermelho_B, LOW);

  digitalWrite(ledVerde_B, HIGH);
  delay(5000);
  digitalWrite(ledVerde_B, LOW);

  digitalWrite(ledAmarelo_B, HIGH);
  delay(3000);
  digitalWrite(ledAmarelo_B, LOW);

  digitalWrite(ledVermelho_B, HIGH);
  // Final do Loop 2
 
  delay(2000); // Tempo de espera para troca
  
  digitalWrite(ledVerde_C, HIGH);
  digitalWrite(ledVermelho_C, LOW);

  delay(5000);
  
  analogWrite(ledVermelho_C, 100);
  delay(1000);
  analogWrite(ledVermelho_C, 255);
  delay(1000);
  analogWrite(ledVermelho_C, 100);
  delay(1000);
  analogWrite(ledVermelho_C, 255);
  delay(1000);
  analogWrite(ledVermelho_C, 100);
  delay(1000);
  analogWrite(ledVermelho_C, 255);
  
  digitalWrite(ledVerde_C, LOW);
  
  delay(2000);

  digitalWrite(ledVerde_A, HIGH);
  digitalWrite(ledVermelho_A, LOW);

}