int led1=13;
int led2=12;
int led3=11;
int led4=10;
int led5=9;
int timer=100;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led2, HIGH);
  delay(timer);
  digitalWrite(led2, LOW);
  delay(timer);
  digitalWrite(led1, HIGH);
  delay(timer);
  digitalWrite(led1, LOW);
  delay(timer);
  digitalWrite(led3, HIGH);
  delay(timer);
  digitalWrite(led3, LOW);
  delay(timer);
  digitalWrite(led4, HIGH);
  delay(timer);
  digitalWrite(led4, LOW);
  delay(timer);
  digitalWrite(led5, HIGH);
  delay(timer);
  digitalWrite(led5, LOW);
  delay(timer);
}
