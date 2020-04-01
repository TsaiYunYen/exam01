#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);


int main()

{

      uLCD.printf("\n107061174\n"); //Default Green on black text
      uLCD.line(0,0,80,0,0xFF0000);
      uLCD.line(0,0,0,80,0xFF0000);
      uLCD.line(80,0,80,80,0xFF0000);
      uLCD.line(80,80,0,80,0xFF0000);

      wait(30);

}