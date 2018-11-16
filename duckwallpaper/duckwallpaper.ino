#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // Open image in browser
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("chrome.exe http://www.thecuriosityworkshop.com/wp-content/uploads/2015/03/01-rubberduck-hongkong.jpg");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  //saves it
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_RIGHT);
  DigiKeyboard.delay(1500);
  //set name for it
  DigiKeyboard.print("%userprofile%");

  DigiKeyboard.sendKeyStroke(KEY_plus, MOD_ALT_LEFT | MOD_CONTROL_RIGHT);

  DigiKeyboard.print("downloads");

  DigiKeyboard.sendKeyStroke(KEY_plus, MOD_ALT_LEFT | MOD_CONTROL_RIGHT);
  DigiKeyboard.print("giantduck");
  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.delay(1000);

  //open paint becaose it is best way to change background
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  
  DigiKeyboard.delay(500);
  DigiKeyboard.print("mspaint");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_O, MOD_CONTROL_RIGHT);
  
  //DigiKeyboard.print("%userprofile%\downloads\giantduck");
  DigiKeyboard.delay(1500);

  DigiKeyboard.print("%userprofile%");

  DigiKeyboard.sendKeyStroke(KEY_plus, MOD_ALT_LEFT | MOD_CONTROL_RIGHT);
  
  DigiKeyboard.print("downloads");
    
  DigiKeyboard.sendKeyStroke(KEY_plus, MOD_ALT_LEFT | MOD_CONTROL_RIGHT);



  DigiKeyboard.print("giantduck");
  
  DigiKeyboard.delay(100);
   
  //DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("k");
  DigiKeyboard.delay(100);
  DigiKeyboard.print("f");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
 // DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("x");
}
