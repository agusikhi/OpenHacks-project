//
//  main.cpp
//  hackathon
//
//  Created by Anisha Nahta on 5/23/20.
//  Copyright © 2020 Anisha Nahta. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include "baking.cpp"
#include "quiz.cpp"
using namespace std;


int main() {

    make_quiz();
    
    
    
    int choice = 1;
    
    if(choice == 1) {
        bakingmain();
    }
}
