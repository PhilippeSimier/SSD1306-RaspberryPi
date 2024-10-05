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
    
    SSD1306 oled;
    
    cout << "test unitaire ssd1306" << endl;
    oled.begin();
    oled.clear();
    oled.setTextSize(2);
    
    char car = 'A';
    for (int i=0; i<26; i++){      
        oled.write(car);
        car++;
    }
    oled.display();
    
    sleep(3);
    
    oled.clear();
    oled.write("Philippe\nF4JRE");
    oled.display();

    
    

    
    return 0;
}

