// LED is in GPIO - 16
int LED_PIN = 16;

// library func like main()
void setup()
{
    // assigning pin 16 as output pin
    pinMode(LED_PIN, OUTPUT);
}

// library func, for looping things
void loop()
{
    // sending continues HIGH signal to set LED
    digitalWrite(LED_PIN, HIGH);

    // waiting 100 millisecs so that it looks like blinking
    delay(100);

    // sending continues HIGH signal to set LED
    digitalWrite(LED_PIN, LOW);

    // waiting 100 millisecs so that it looks like blinking
    delay(100);
}