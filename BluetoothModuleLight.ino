               //VARIABLE TO STORE INPUT.
int led1 = 13;                 //DECLARING "led1" PIN FOR A LED.

void setup() {
  Serial.begin(9600);          //STARTS SERIAL MONITOR AT 9600 BAUD RATE.
  pinMode(led1, OUTPUT);       //DEFINING "led1" AS A OUTPUT.
}

void loop() {
  if ( Serial.available())
  {
    String command = Serial.readString();    //READS THE DATA AND STORES IT AS A VARIABLE.
    Serial.println(command);     //PRINTS THE INPUT.

    if(command == "light on"){
      digitalWrite(led1,HIGH);
    }
    else if(command == "good night"){
      digitalWrite(led1, LOW);
    }
    else{
      Serial.println("Wrong Command");
    }
    delay(1000);
  }
}