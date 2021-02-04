int right_motorf = A0;
int right_motorb = A1;
int left_motorf = A2;
int left_motorb = A3;
int left_IR = A4;
int right_IR = A5;

void setup() {
  pinMode(left_IR , INPUT);
  pinMode(right_IR, INPUT);
  pinMode(right_motorf, OUTPUT);
  pinMode(right_motorb, OUTPUT);
   pinMode(left_motorf, OUTPUT);
    pinMode(left_motorb, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if (analogRead(left_IR)<500 && analogRead(right_IR)<500)  //jb dono sensor detects nh krngy to forward
{
  analogWrite(left_motorf, 255);
  analogWrite(right_motorf, 255);
}
else if (analogRead(left_IR)>=500 && analogRead(right_IR)<500)  //jb left sensor detect kry or right na kry to car left turn hojae
{
  analogWrite(left_motorf, 0);
  analogWrite(right_motorf, 255);
}
else if (analogRead(left_IR)<500 && analogRead(right_IR)>=500)   //jb right sensor detect kry or left na kry to car left turn hojae
{
  analogWrite(left_motorf, 255);
  analogWrite(right_motorf, 0);
}
else if (analogRead(left_IR)>=500 && analogRead(right_IR)>=500) //jb dono sensors detect krngy to car stop hojaeyge 
{
  analogWrite(left_motorf, 0);
 analogWrite(right_motorf, 0);
}
}
