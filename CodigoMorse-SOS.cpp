/* Este pequeno e simples código tem o intúito de mandar por meio de um Led
 * um sinal de S.O.S. (socorro/ajuda) em código Morse, utilizando 3 "for"
*/

int Time1 = 500, Time2 = 1000;


void setup()
{
  pinMode(10, OUTPUT);
}

void loop(){
  for(int x = 1; x<=3; x++){
  	digitalWrite(10, HIGH);
  	delay(Time1);
  	digitalWrite(10, LOW);
  	delay(Time1);
  }
  for(int x = 1; x<=3; x++){
  	digitalWrite(10, HIGH);
  	delay(Time2);
  	digitalWrite(10, LOW);
  	delay(Time2);
  }  
  for(int x = 1; x<=3; x++){
  	digitalWrite(10, HIGH);
  	delay(Time1);
  	digitalWrite(10, LOW);
  	delay(Time1);
  }
  delay(2000);

}
