
int A = 2;
int B = 3;
int C = 12;
int D = 4;
int E = 5;
int F = 10;
int G = 11;

// runs once after each powerup or reset
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
}

// the loop function runs over and over again forever
void loop() {
  breadthFirstSearch(A);
}

void blinkPin(int pin) {
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(500);
}

void breadthFirstSearch(int head) {
  blinkPin(A);
  blinkPin(B);
  blinkPin(C);
  blinkPin(D);
  blinkPin(E);  
  blinkPin(F);
  blinkPin(G);
}

void lightPin(int pin) {
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
}
