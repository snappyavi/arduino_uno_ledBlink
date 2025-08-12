
int animationSpeed=0;

void setup() {
  // put your setup code here, to run once:

pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


animationSpeed =400;

digitalWrite(13, HIGH);
delay(animationSpeed);
digitalWrite(13, LOW);
delay(animationSpeed);
digitalWrite(12, HIGH);
delay(animationSpeed);
digitalWrite(12, LOW);
delay(animationSpeed);
digitalWrite(11, HIGH);
delay(animationSpeed);
digitalWrite(11, LOW);
delay(animationSpeed);

}
