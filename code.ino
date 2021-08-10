void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(10, INPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  Serial.println("------Calculator------");
  bool A = digitalRead(10);
  bool B = digitalRead(7);

  Serial.print("A = ");
  Serial.println(A);

  Serial.print("B = ");
  Serial.println(B);

  if( B == 0)
  {
    int M = A*B; 
    Serial.print("Multiplication(M) = ");
    Serial.println(M);

    Serial.print("Division(D) = ");
    Serial.println("INVALID");
    digitalWrite(5, HIGH);
  }

  else
  {
    int M = A*B;
    int D = A/B; 
    Serial.print("Multiplication(M) = ");
    Serial.println(M);

    Serial.print("Division(D) = ");
    Serial.println(D);
    digitalWrite(5, LOW);
  }


  delay(2000);

}
