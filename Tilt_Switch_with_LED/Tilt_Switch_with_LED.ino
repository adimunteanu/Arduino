/* The setup() function is called when a sketch starts. It is used to initialize variables, pin modes, start using libraries, etc. This function will only run once, after each power up or reset of the Arduino board. */

 

void setup()

{

  pinMode(7,OUTPUT);// set digital pin 7 as “output”

}

 

/* The loop() function executes the program repeatedly until Specified. */

 

void loop()

{

int i;// define variable i

 

while(1)

{

  i=analogRead(5);// read the voltage value of analog pin 5

  if(i>512)// if larger that 512（2.5V）

  {

    digitalWrite(7,LOW);// turn on LED

  }

  else// otherwise

  {

    digitalWrite(7,HIGH);// turn off LED

  }

 }

}
