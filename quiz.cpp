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
#include "entertainment.cpp"
#include <vector>
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
    vector<int> vals = {};
    vals.push_back(entertainment_count());
    vals.push_back(baking_count());
    
    //find max
    int max = 0;
    int max_iter = 0;
    for (int i = 0; i < vals.size(); i++) {
        if (vals[i] > max) {
            max = vals[i];
            max_iter = i;
        }
    }
    
    if (max_iter == 0) {
        entertainment_choice();
    }
    if (max_iter == 1) {
        bakingmain();
    }
    
    
    
}

void make_quiz() {
    cout << "Welcome to the quarantine activity picker!" << endl;
    pick_activity();
}
