int ledarray[]={11,10,9,6,5};
int count=0;
int timer=200;

void setup() {
  // put your setup code here, to run once:
  for (count=0; count<5; count++){
    pinMode(ledarray[count],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  //forward loop of the circuit
  for (count=0; count < 5; count++){
    digitalWrite(ledarray[count],HIGH);

    if (count==1){
      analogWrite(ledarray[count-1],50);
    }
    else if (count>=2){
      analogWrite(ledarray[count-1],50);
      analogWrite(ledarray[count-2],10);
    } 
    
    delay(timer);
    
    digitalWrite(ledarray[count],LOW);
    digitalWrite(ledarray[count-1],LOW);
    digitalWrite(ledarray[count-2],LOW);
    delay(timer);
  }

  //backward loop of the circuit
  for (count=4; count >= 0; count--){
    digitalWrite(ledarray[count],HIGH);
    
    if (count==3){
      analogWrite(ledarray[count+1],50);
    }
    else if (count<=2){
      analogWrite(ledarray[count+1],50);
      analogWrite(ledarray[count+2],10);
    } 
    
    delay(timer);
    digitalWrite(ledarray[count],LOW);
    digitalWrite(ledarray[count+1],LOW);
    digitalWrite(ledarray[count+2],LOW);
    delay(timer); 
  }
}
