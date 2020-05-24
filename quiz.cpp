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
#include "music.cpp"
#include "nature.cpp"
using namespace std;

void officialnum(int num, int yes) {
    if (yes != 0 || yes != 1) {
        yes = 0;
    }
    num = yes + num;
}
int entertainment_count() {
    int num = 0;
    int yes;
    cout << "Do you like to watch TV? Enter 1 for yes and 0 for no" << endl;
    cin >> yes;
    officialnum(num, yes);


    cout << "Do you have Netflix or Hulu? Enter 1 for yes and 0 for no" << endl;
    cin >> yes;
    
    if(yes == 1) {
        officialnum(num, yes);
    }
    else {
        num = -1;
    }
    
    return num;
}

int baking_count() {
    int num = 0;
    int yes;
    cout << "Are you vegan? Enter 1 for yes and 0 for no" << endl;
    cin >> yes;
    num = -2;
    
    cout << "Do you have a sweet tooth? Enter 1 for yes and 0 for no" << endl;
    cin >> yes;
    officialnum(num, yes);
    
    return num;
}

int music_count() {
    int num = 0;
    int yes;
    cout << "Do you like to listen to music? Enter 1 for yes and 0 for no" << endl;
    cin >> yes;
    officialnum(num, yes);
    
    cout << "Do you listening to the radio? Enter 1 for yes and 0 for no" << endl;
    cin >> yes;
    officialnum(num, yes);

    
    return num;
}

int nature_count() {
    int num = 0;
    int yes;
    cout << "Do you like being outside? Enter 1 for yes and 0 for no" << endl;
    cin >> yes;
    officialnum(num, yes);
    
    cout << "Do you love sunny days? Enter 1 for yes and 0 for no" << endl;
    cin >> yes;
    officialnum(num, yes);

    return num;
}

void xtraq(vector<int> vals) {
    
    int num;
    cout << "Would you rather go outside or stay inside? Enter 1 for the first option and 2 for the second option." << endl;
    cin >> num;
    
    if(num == 1) {
        vals[3]++;
    }
    else if(num == 2) {
        vals[3]--;
    }
    
    cout << "Are you alone or with others? Enter 1 for the first option and 2 for the second option." << endl;
    cin >> num;
    
    if(num == 1) {
        vals[2]++;
    }
    if(num == 2) {
        vals[2]--;
    }
    
    cout << "Are you more hungry or more bored? Enter 1 for the first option and 2 for the second option." << endl;
    cin >> num;
    
    if(num == 1) {
        vals[1]++;
    }
    if(num == 2) {
        vals[0]++;
        vals[3]++;
    }
    
}



void pick_activity() {
    vector<int> vals = {};
    vals.push_back(entertainment_count());
    vals.push_back(baking_count());
    vals.push_back(music_count());
    vals.push_back(nature_count());
    xtraq(vals);
    
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
    if (max_iter == 2) {
        musicmain();
    }
    if (max_iter == 3) {
        nature_main();
    }
    
}






void make_quiz() {
    cout << "Welcome to the quarantine activity picker!" << endl;
    pick_activity();
}
