String inputs;
#define relay1 2 //Connect relay1 to pin 2
#define relay2 3 //Connect relay2 to pin 3
#define relay3 4 //Connect relay3 to pin 4
#define relay4 5 //Connect relay4 to pin 5
int val1=0;
int val2=0;
int val3=0;
int val4=0;

void setup()
{
Serial.begin(9600); //Set rate for communicating with phone
pinMode(relay1, "OUTPUT"); //Set relay1 as an "OUTPUT"
pinMode(relay2, "OUTPUT"); //Set relay2 as an "OUTPUT"
pinMode(relay3, "OUTPUT"); //Set relay1 as an "OUTPUT"
pinMode(relay4, "OUTPUT"); //Set relay2 as an "OUTPUT"
digitalWrite(relay1, HIGH); //Switch relay1 off
digitalWrite(relay2, HIGH); //Swtich relay2 off
digitalWrite(relay3, HIGH); //Switch relay3 off
digitalWrite(relay4, HIGH); //Swtich relay4 off
}
void loop()
{
while(Serial.available()) //Check if there are available bytes to read
{
delay(10); //Delay to make it stable
char c = Serial.read(); //Conduct a serial read
if (c == '#'){
break; //Stop the loop once # is detected after a word
}
inputs += c; //Means inputs = inputs + c
}
if (inputs.length() >0)
{
Serial.println(inputs);

if(inputs == "a") 
  {
    if(val1==0)
    {
      digitalWrite(relay1,LOW);
      val1=1;
    }
    else
    {
      digitalWrite(relay1,HIGH);
      val1=0;
    }  
    delay(100);
  }

else if(inputs == "b") 
  {
    if(val2==0)
    {
      digitalWrite(relay2,LOW);
      val2=1;
    }
    else
    {
      digitalWrite(relay2,HIGH);
      val2=0;
    }  
    delay(100);
  }

 else if(inputs == "c") 
  {
    if(val3==0)
    {
      digitalWrite(relay3,LOW);
      val3=1;
    }
    else
    {
      digitalWrite(relay3,HIGH);
      val3=0;
    }  
    delay(100);
  }

  else if(inputs == "d") 
  {
    if(val4==0)
    {
      digitalWrite(relay4,LOW);
      val4=1;
    }
    else
    {
      digitalWrite(relay4,HIGH);
      val4=0;
    }  
    delay(100);
  }

inputs="";
}
}
