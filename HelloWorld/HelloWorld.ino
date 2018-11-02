/* Program name: Hello World with TFT Screen
 * 
 *  
 *  
 * Author: taiprogramer 
 */

// Screen size: 320 x 480
// You don't need worry about default setup.
/* Start default setup */
#include <MCUFRIEND_kbv.h>

// Define some TFT readable colour codes to human readable names
#define BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF
/* End default setup */

// Create screen object.
MCUFRIEND_kbv tft;

void setup(void) {
  Serial.begin(9600);

  /* Start setup */
  tft.reset();
  uint16_t identifier = tft.readID();
  tft.begin(identifier);
  /* End setup */
  
  Serial.print("Screen size : ");
  Serial.print(tft.width());
  Serial.print(" x "); 
  Serial.println(tft.height());
  
  tft.setRotation(1); // 90 degrees orientation.
  tft.fillScreen(YELLOW); // set background color is YELLOW : 0xFFE0
}

void loop(){
  tft.setTextSize(4);
  tft.setCursor(0, 0);
  tft.setTextColor(RED);
  tft.print("Hello World");
}
