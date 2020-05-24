//
//  nature.cpp
//  openHacks
//
//  Created by Anastacia Gusikhin on 5/23/20.
//  Copyright © 2020 Anastacia Gusikhin. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

class Nature {
public:
    Nature() : active(true) {}
    Nature(bool active_in) : active(active_in) {}
    
    void suggest_activity() {
        if (active) {
            cout << "You should go on a walk in the park! Want another suggestion?";
            cout << "Enter A for yes and B for no";
            char x;
            cin >> x;
            if (x == 'B') {
                return;
                
            }
            cout << "You should go on a bike ride!";
            
        }
        else {
            cout << "You should sit outside! Want another suggestion?";
            cout << "Enter A for yes and B for no";
            char x;
            cin >> x;
            if (x == 'B') {
                return;
                
            }
            cout << "You should try gardening!";
        }
    }
private:
    bool active;
};

void nature_main() {
    cout << "You should do a nature activity!" << endl;
    cout << "Do you like to be active? Enter A for yes and B for no" << endl;
    char x;
    cin >> x;
    bool activ = false;
    if (x == 'B' || x == 'b') {
        activ = false;
    }
    else if (x == 'A' || x == 'b') {
        activ = true;
    }
    else {
        cout << "Invalid input" << endl;
    }
    Nature suggest(activ);
    suggest.suggest_activity();
}
