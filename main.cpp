/* 
 * File:   main.cpp
 * Author: philippe SIMIER Lycée Touchard
 *
 * Created on 5 octobre 2024, 08:54
 */

#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include "SSD1306.h"

using namespace std;

int main(int argc, char** argv) {

    try {
        
        SSD1306 oled;

        cout << "test unitaire ssd1306" << endl;
        
        oled.begin();
        oled.setTextSize(2);
        oled.flipScreenVertically();

        char car = 'A';
        for (int i = 0; i < 26; i++) {
            oled.write(car);
            car++;
        }
        oled.display();

        sleep(3);
        
        oled << clear << "Philippe\n(F4JRE)\n" << display;
        oled.scrollLeft(00,0x0F);
        
        sleep(3);
        oled.scrollStop();
        oled << 1960 << '\n' << 3.14 << '\n' << true << display;
        sleep(3);
        oled.setCursor(10,10);
        oled.setTextSize(3);
        oled << "BTS\nCIEL" << display;
               
    }  
    
    
    catch (const std::runtime_error &e) {
        
        cout << "Exception caught: " << e.what() << endl;
    }
    
    return 0;
}

