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
using namespace std;


int main() {

    
    
    
    
    int choice = 1;
    
    if(choice == 1) {
        
        int numpeople;
        
        cout << "You should bake during this quarintine! What do you want to make?";
        
        cout << endl << endl << "A) Cookies" << endl << "B) Cake" << endl << "C) Brownies" << endl;
        
        char in;
        
        cin >> in;
        
        cout << "How many people do you need to serve? ";
        
        cin >> numpeople;
        

        if(in == 'A') {
        
            Cookies x(numpeople, "cookies");
            BatchesandPeople bandpcookies(12);
            x.printBatches(bandpcookies);
            x.printList();
            x.printingredCookies(bandpcookies);
            
        }
     
        else if(in == 'B') {
              
            Cake x(numpeople, "cake");
            BatchesandPeople bandpcake(12);
            x.printBatches(bandpcake);
            x.printList();
            x.printingredCake(bandpcake);
        }
        else if(in == 'C') {

            Brownies x(numpeople, "brownies");
            BatchesandPeople bandpbrownies(12);
            x.printBatches(bandpbrownies);
            x.printList();
            x.printingredBrownies(bandpbrownies);
        }
        
    }

}
