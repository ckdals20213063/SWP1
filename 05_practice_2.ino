int cnt=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(cnt!=5)
  {
    digitalWrite(7,1);
    delay(1000);
    digitalWrite(7,0);
    delay(1000);
    cnt++;
  }
  else
  {
    digitalWrite(7,1);
  }
}
