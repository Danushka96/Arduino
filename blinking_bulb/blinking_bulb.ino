// LED is in pin 13
int LED_PIN = 13;

// library func like main()
void setup() {
  
  // assigning pin 13 as output pin
  pinMode(LED_PIN, OUTPUT);
}

// library func, for looping things
void loop() {
  
  // calling blink() func again and again
  blink();
}

// user-defined func
void blink(){

  // sending continues HIGH signal to pin 13
  digitalWrite(LED_PIN, HIGH);

  // waiting 100 millisecs so that it looks like blinking
  delay(100);
}
