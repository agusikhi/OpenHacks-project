//
//  baking.cpp
//  hackathon
//
//  Created by Anisha Nahta on 5/23/20.
//  Copyright © 2020 Anisha Nahta. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


class Cookies {
    
public:
    
    Cookies(int numpeople_in, string name_in, int servingsize_in)
    : numpeople(numpeople_in), name(name_in), servingsize(servingsize_in) {}
    
    string pluralize(string singular, string plural, int number) {
        if (number <= 1) {
            return singular;
    }
        return plural;
    }
    
    template <typename Predicate>
    void printBatches(Predicate pred) {
        
        cout << "You need to make: " << pred(numpeople) << " "
        << pluralize("batch", "batches", pred(numpeople))
        << " for a total of " << pred(numpeople) * servingsize << " servings of " << name << endl << endl;
    }
    
    void printList() {
        cout << "How to Make \"Best Ever\" " << name << endl;
        cout << "---------------------------------------------------" << endl << endl;
        
    }
    
    template <typename Predicate>
    void printingredCookies(Predicate pred) {
        
        double batches = pred(numpeople);

        for(int i = 0; i < numingred; i++) {
            num[i] = num[i] * batches;
            cout << num[i] << " ";
            
            if(i != 3) {
                cout<< pluralize(measure[i], (measure[i] + "s"), num[i]) << " of ";
            }
        
            cout << ingred[i] << endl;;
        }
        
        cout << endl << endl;
    }
    
    int get_numpeople() {
        return numpeople;
    }
    
    void steps() {
        
        cout << "Step 1" << endl;
        cout << "Heat oven or toaster oven to 350°F." << endl << endl;
        
        cout << "Step 2" << endl;
        cout << "Beat butter and sugars together in small bowl until creamy. Add egg yolk and vanilla; beat until well mixed." << endl << endl;
        
        cout << "Step 3" << endl;
        cout << "In another small bowl, combine flour, baking soda and salt. Add flour mixture and chocolate chips to butter mixture. Stir, by hand, until combined." << endl << endl;
        
        cout << "Step 4" << endl;
        cout << "Drop dough by rounded tablespoonfuls, 2 inches apart, onto ungreased cookie sheet (or multiple based on # of batches). Bake 9-11 minutes or until edges are light golden brown." << endl << endl;
        
    }
    
private:
    
    int numpeople;
    string name;
    int servingsize;
    const int numingred = 9;
    string ingred[9] = {"softened butter", "firmly packed brown sugar", "sugar" , "large egg yolk" , "vanilla extract", "all-purpose flour", "baking soda", "salt", "semi-sweet chocolate chips"};
    
    string measure[9] = {"stick", "cup", "tablespoon", "", "teaspoon", "cup", "teaspoon", "teaspoon", "cup"};
    double num[9] = {.5, .25, 2, 1, .5, .5, .25, .25, .25};
};

class Brownie : public Cookies {
    
public:
    
    Brownie(int numpeople_in, string name_in, int servingsize_in)
    : Cookies(numpeople_in, name_in, servingsize_in) {}
    
    template <typename Predicate>
    void printingredBrownie(Predicate pred) {
        
        double batches = pred(get_numpeople());

        for(int i = 0; i < numingredbrownie; i++) {
            numbrownie[i] = numbrownie[i] * batches;
            cout << numbrownie[i] << " ";
            
            if(i != 3) {
                cout<< pluralize(measurebrownie[i], (measurebrownie[i] + "s"), numbrownie[i]) << " of ";
            }
        
            cout << ingredbrownie[i] << endl;
        }
        cout << endl << endl;

    }
    
    void stepsBrownie() {
        
        cout << "Step 1" << endl;
        cout << "Preheat oven to 350°F. Grease an 8x8 square pan (or multiple based on # of batches) or line with foil and set aside." << endl << endl;
        
        cout << "Step 2" << endl;
        cout << "In a medium bowl combine melted butter and cocoa and sugar stir until fully dissolved. Add eggs one at a time then vanilla and stir until well combined." << endl << endl;
        
        cout << "Step 3" << endl;
        cout << "Stir in flour and salt until the flour is fully combine. Be careful not to overmix mix." << endl << endl;
        
        cout << "Step 4" << endl;
        cout << "Spread in pan and bake for approximately 20-22 minutes or until the center is slightly set. " << endl << endl;
        
    }
    
private:
    
    const int numingredbrownie = 7;
    string ingredbrownie[7] = {"butter", "unsweetened cocoa", "sugar" , "large eggs" , "vanilla extract", "flour", "salt"};
    
    string measurebrownie[7] = {"stick", "cup", "cup", "", "teaspoon", "cup", "teaspoon"};
    double numbrownie[7] = {1, .5, 1, 2, 1, .5, .25};
};

class Cake : public Cookies {
  
public:

    Cake(int numpeople_in, string name_in, int servingsize_in)
    : Cookies(numpeople_in, name_in, servingsize_in) {}
    
    template <typename Predicate>
    void printingredCake(Predicate pred) {
        
        double batches = pred(get_numpeople());

        for(int i = 0; i < numingredcake; i++) {
            numcake[i] = numcake[i] * batches;
            cout << numcake[i] << " ";
            
            if(i != 3) {
                cout<< pluralize(measurecake[i], (measurecake[i] + "s"), numcake[i]) << " of ";
            }
        
            cout << ingredcake[i] << endl;
        }
        cout << endl << endl;

    }
    
    void stepsCake() {
        
        cout << "Step 1" << endl;
        cout << "Preheat oven to 350 degrees°F. Grease and flour a 9x9 inch pan (or multiple based on # of batches) or line a muffin pan with paper liners." << endl << endl;
        
        cout << "Step 2" << endl;
        cout << "In a medium bowl, cream together the sugar and butter. Beat in the eggs, one at a time, then stir in the vanilla. Combine flour and baking powder, add to the creamed mixture and mix well. " << endl << endl;
        
        cout << "Step 3" << endl;
        cout << "Finally stir in the milk until batter is smooth. Pour or spoon batter into the prepared pan." << endl << endl;
        
        cout << "Step 4" << endl;
        cout << "Bake for 30 to 40 minutes in the preheated oven. " << endl << endl;
        
    }

    
private:
    
    const int numingredcake = 9;
        
    string ingredcake[9] = {"butter", "sugar", "vanilla extract", "eggs", "all-purpose flour", "baking powder", "milk"};
        
        
    string measurecake[9] = {"stick", "cup", "teaspoon", "", "cup", "teaspoon", "cup"};
        
    double numcake[9] = {1, 1, 2, 1, .5, .5, .25, 1.75, .5};
};

class BatchesandPeople {
    
    
    public:
      BatchesandPeople(int numof_in) : numof(numof_in) {}

      int operator()(int numPeople) const {
        return ceil(static_cast<double>(numPeople)/ numof);
      }

    private:
    
      int numof;
};

void bakingmain() {
    
    int numpeople;
       
       cout << "You should bake during this quarantine! What do you want to make?";
       
       cout << endl << endl << "A) Cookies" << endl << "B) Cake" << endl << "C) Brownies" << endl;
       
       char in;
       
       cin >> in;
       
       cout << "How many people do you need to serve? ";
       
       cin >> numpeople;
       

       if(in == 'A') {
       
           Cookies x(numpeople, "cookies", 12);
           BatchesandPeople bandpcookies(12);
           x.printBatches(bandpcookies);
           x.printList();
           x.printingredCookies(bandpcookies);
           x.steps();

       }
    
       else if(in == 'B') {
             
           Cake x(numpeople, "cake", 16);
           BatchesandPeople bandpcake(16);
           x.printBatches(bandpcake);
           x.printList();
           x.printingredCake(bandpcake);
           x.stepsCake();

       }
       else if(in == 'C') {

           Brownie x(numpeople, "brownies", 12);
           BatchesandPeople bandpbrownies(12);
           x.printBatches(bandpbrownies);
           x.printList();
           x.printingredBrownie(bandpbrownies);
           x.stepsBrownie();
       }
       
}

