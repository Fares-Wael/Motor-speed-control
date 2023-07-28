const int echo=5;
const int trig=6;
const int motor=10;
long int t;
long int d;
int s;
void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(motor, OUTPUT);
  pinMode(echo, INPUT);
Serial.begin(9600);
}

void loop()
{
 digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
t = pulseIn(echo, HIGH);
d=0.0343*(t/2);
if(d>20&&d<200){
    s = map(d,20,200,255,0);
    analogWrite(motor,s);}
  else{
    analogWrite(motor,0);}}