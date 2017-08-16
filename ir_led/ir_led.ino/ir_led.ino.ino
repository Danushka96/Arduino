//IR sensor Programme by Danushka Herath

int LED=13; //LED Port of the circuit 
int IR=7; //IR sensor port
int closer=HIGH; //if High not Close
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(IR, INPUT);
  Serial.begin(9200);
}

void loop() {
  // put your main code here, to run repeatedly:
  closer=digitalRead(IR);
  if (closer==HIGH){
    Serial.println("Path is Clear");
    digitalWrite(LED,LOW);
  }
  else {
    Serial.println("Object is Closer to the IR");
    digitalWrite(LED, HIGH);
  }
  delay(200);
}
