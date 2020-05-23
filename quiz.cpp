//
//  quiz.cpp
//  hackathon
//
//  Created by Anisha Nahta on 5/23/20.
//  Copyright © 2020 Anisha Nahta. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int entertainment_count() {
    int num = 0;
    char yes;
    cout << "Do you like to watch TV? Enter A for yes and B for no" << endl;
    cin >> yes;
    if (yes == 'B' || yes == 'b') {
        return 0;
    }
    num++;
    return num;
}

int baking_count() {
    int num = 0;
    char yes;
    cout << "Do you like to bake? Enter A for yes and B for no" << endl;
    cin >> yes;
    if (yes == 'B' || yes == 'b') {
        return 0;
    }
    num++;
    return num;
}

void pick_activity() {
    if (baking_count() > entertainment_count()) {
        
    }
    
}

void make_quiz() {
    cout << "Welcome to the quarantine activity picker!" << endl;
    pick_activity();
}
