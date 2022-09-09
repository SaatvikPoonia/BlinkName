void setup() 
{
  pinMode(LED_BUILTIN,OUTPUT);                // setting built in led as output
}

// creating a new function for blinking dot in morse code
void dot()
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN,LOW);
  delay(900);
}

// creating a new function for blinking dash in morse code
void dash()
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN,LOW);
  delay(900);
}

void loop() 
{
  
  // My name:     SAATVIK
  // Morse Code:  ... .- .- - ...- .. -.-

  
 // led blink for letter 'S'
  dot();
  dot();
  dot();
  delay(1500);

 // led blink for letter 'A'
  dot();
  dash();
  delay(1500);

 // led blink for letter 'A'
  dot();
  dash();
  delay(1500);
  
 // led blink for letter 'T'
  dash();
  delay(1500);
  
 // led blink for letter 'V'
  dot();
  dot();
  dot();
  dash();
  delay(1500);
  
 // led blink for letter 'I'
  dot();
  dot();
  delay(1500);
  
 // led blink for letter 'K'
  dash();
  dot();
  dash();
  delay(200000);                            // given a long delay to end the code
 
}
