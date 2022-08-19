//Este script pega uma foto do link e coloca de wallpaper do windows

/*Usei a forma de abrir o cmd que mais achei eficiente,
 * evitando alguns erros quando o foco de digitacao nao estava livre.
 */
 
#include "DigiKeyboard.h"
void setup() {
}

void loop() {

  //abrindo o cmd
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(400);

  //baixando a foto
  DigiKeyboard.print("start https://mundofixa.com/wp-content/uploads/2017/10/carro-rebaixado-divulgacao2.jpg");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  //trocando o plano de fundo
  
  
  for(;;){ /*empty*/ }
}
