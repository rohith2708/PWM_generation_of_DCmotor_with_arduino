int M1_PWM = 9;
int M1_E1 = 8;
int M1_E2 = 7;

//Right Motor
int M2_PWM = 3;
int M2_E1 = 4;
int M2_E2 = 5;

void setup()
{
  pinMode(M1_PWM, OUTPUT);
  pinMode(M1_E1, OUTPUT);
  pinMode(M1_E2, OUTPUT);
  pinMode(M2_PWM, OUTPUT);
  pinMode(M2_E1, OUTPUT);
  pinMode(M2_E2, OUTPUT);

 //All off
  digitalWrite(M1_E1, LOW);
  digitalWrite(M1_E2, LOW);
  digitalWrite(M2_E1, LOW);
  digitalWrite(M2_E2, LOW);
}

void loop()
{
  digitalWrite(M1_E1, HIGH);
  digitalWrite(M1_E2, LOW);
  digitalWrite(M2_E1, HIGH);
  digitalWrite(M2_E2, LOW);
 
  //Motor 1
  digitalWrite(M1_PWM, HIGH); //MOtor left
  digitalWrite(M2_PWM, HIGH); //Motor right
  //delay(1); // Wait for x millisecond(s)
  delayMicroseconds(900);
  
  //Motor 2
  digitalWrite(M1_PWM, LOW);
  digitalWrite(M2_PWM, LOW);
  delayMicroseconds(100);
  //delay(1); // Wait for x millisecond(s)
  
  }