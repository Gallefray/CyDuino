const int RHforwards = 2;     // RH motor forwards
const int LHforwards = 3;     // LH motor forwards

const int RHbackwards = 8;    // RH motor backwards
const int LHbackwards = 9;    // LH motor backwards

void setup() {
  // initialize the pins as outputs:
  pinMode(RHforwards, OUTPUT);
  pinMode(LHforwards, OUTPUT);
  
  pinMode(RHbackwards, OUTPUT);
  pinMode(LHbackwards, OUTPUT);
}

void loop(){
  setStop();
  setForwards();
  delay(400);
  setStop(); 
  setRight();
  delay(250);
  
}

void setStop()
{
   digitalWrite(RHforwards, LOW);
   digitalWrite(LHforwards, LOW);
   digitalWrite(RHbackwards, LOW);
   digitalWrite(LHbackwards, LOW);
}

void setForwards()
{
  digitalWrite(RHforwards, HIGH);
  digitalWrite(LHforwards, HIGH); 
  digitalWrite(RHbackwards, LOW);
  digitalWrite(LHbackwards, LOW); 
}

void setBackwards()
{
  digitalWrite(RHforwards, LOW);
  digitalWrite(LHforwards, LOW); 
  digitalWrite(RHbackwards, HIGH);
  digitalWrite(LHbackwards, HIGH); 
}

void setLeft()
{
  digitalWrite(RHforwards, HIGH);
  digitalWrite(LHforwards, LOW); 
  digitalWrite(RHbackwards, LOW);
  digitalWrite(LHbackwards, HIGH); 
}

void setRight()
{
  digitalWrite(RHforwards, LOW);
  digitalWrite(LHforwards, HIGH); 
  digitalWrite(RHbackwards, HIGH);
  digitalWrite(LHbackwards, LOW); 
}
