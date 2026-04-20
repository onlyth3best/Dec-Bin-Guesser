/*

&& and
|| or

button1 = D0
button2 = D1
button3 = D2
LED1 = D3
LED2 = D4
LED3 = D5
buzzer1 = D6 (P0_D6_TX)

int len = 0;
int pGBdec = 0;
int base = 1;
*/
int playerGuess = 0;
int theRandomNumber = random(1, 100);


int BUT1 = D0;
int BUT2 = D1;
int BUT3 = D2;

int LED1 = D3;
int LED2 = D4;
int LED3 = D5;
int BUZZ = D6;

/* - - - - - - - */

void setup() {
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(BUT3, INPUT_PULLUP);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  pinMode(BUZZ, OUTPUT);

  Serial.begin(9600);
  long startTime = millis();
}

/* - - - - - - - */



void loop() {
  /* example */
  long but1time;
  long but2time;
  long but3time = 0;


  if (digitalRead(BUT1) == HIGH) {
    playerGuess += 10;
    Serial.println(playerGuess); /*so i can check stuff*/
    delay(200);
  }
  if (digitalRead(BUT3) == HIGH) {
    playerGuess += 1;
    Serial.println(playerGuess);
    delay(200);
  }


  if (digitalRead(BUT2) == HIGH) {  
    if (playerGuess == theRandomNumber) {
      digitalWrite(LED2, LOW);
      delay(500);
      digitalWrite(LED2, HIGH);
      delay(500);

      playerGuess = 0; /*to reset*/
      theRandomNumber = random(1, 100);
    }

    else if (playerGuess > theRandomNumber) {
      digitalWrite(LED3, HIGH);
      delay(1000);
      digitalWrite(LED3, LOW);
    }

    else { /*less than, as well as some other cases I suppose? errors, etc*/
      digitalWrite(LED1, HIGH);
      delay(1000);
      digitalWrite(LED1, LOW);
    }
  }
} /*end loop*/







/*
    for (int i = len - 1; i >= 0; i--) {
      if (playerGuessBin[i] == '1') {
        pGBdec += base;
      }
      base = base * 2;
    }
*/

