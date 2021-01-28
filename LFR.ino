int right_motorf = 6;
int right_motorb = 7;
int left_motorf = 4;
int left_motorb = 5;
int left_IR = 2;
int right_IR = 3;

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
if (digitalRead(left_IR)<500 && digitalRead(right_IR)<500)  //jb dono sensor detects nh krngy to forward
{
  digitalWrite(left_motorf, 255);
  digitalWrite(right_motorf, 255);
}
else if (digitalRead(left_IR)>=500 && digitalRead(right_IR)<500)  //jb left sensor detect kry or right na kry to car left turn hojae
{
  digitalWrite(left_motorf, 0);
  digitalWrite(right_motorf, 255);
}
else if (digitalRead(left_IR)<500 && digitalRead(right_IR)>=500)   //jb right sensor detect kry or left na kry to car left turn hojae
{
  digitalWrite(left_motorf, 255);
  digitalWrite(right_motorf, 0);
}
else if (digitalRead(left_IR)>=500 && digitalRead(right_IR)>=500) //jb dono sensors detect krngy to car stop hojaeyge 
{
  digitalWrite(left_motorf, 0);
  digitalWrite(right_motorf, 0);
}
}
