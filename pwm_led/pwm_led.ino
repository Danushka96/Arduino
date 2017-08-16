int LED =11;
int LED1=12;
int count=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(LED1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (count=2; count < 100 ; count+=10){
  analogWrite(LED,count);
  delay(100);
  }

    for (count=100; count > 0 ; count-=10){
  analogWrite(LED,count);
  delay(100);
  }


}

