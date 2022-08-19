/*
 *Altere o valor de "n" para definir o maximo de abas a serem fechadas.
 */

#include "DigiKeyboard.h"
void setup() { 
}

void loop() {
  int n = 5;
  
  for (int i = 0; i < n; i++) {
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(20);
    DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  }

  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(20);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  for(;;){ /*empty*/ }
}
