int Led = 2;
int Button = 3;

void setup() {
  pinMode(Led, OUTPUT);
  pinMode(Button, INPUT);
}

void loop() {
  int a = digitalRead(Button);
  if(a == 1){
    digitalWrite(Led, HIGH);
  }else{
    digitalWrite(Led, LOW);
  }
}
