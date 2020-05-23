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
    
    Cookies(int numpeople_in, string name_in)
    : numpeople(numpeople_in), name(name_in) {}
    
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
        << " for a total of " << pred(numpeople) * 12 << " servings of " << name << endl << endl;
    }
    
    void printList() {
        cout << "How to Make \"Best Ever\"" << name << endl;
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
    }
    
    
private:
    
    int numpeople;
    string name;
    
    const int numingred = 9;
    string ingred[9] = {"softened butter", "firmly packed brown sugar", "sugar" , "large egg yolk" , "vanilla extract", "all-purpose flour", "baking soda", "salt", "semi-sweet chocolate chips"};
    
    string measure[9] = {"stick", "cup", "tablespoon", "", "teaspoon", "cup", "teaspoon", "teaspoon", "cup"};
    double num[9] = {.5, .25, 2, 1, .5, .5, .25, .25, .25};
};

class Cake : public Cookies {
    
public:
    
    Cake(int numpeople_in, string name_in)
    : Cookies(numpeople_in, name_in) {}
    
};

class Brownies : public Cookies {
  
public:

    Brownies(int numpeople_in, string name_in)
    : Cookies(numpeople_in, name_in) {}
    
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



/*
cout << "Shopping List for \"Best Ever\" M&M's Brownie Cookies" << endl;
   cout << "---------------------------------------------------" << endl;
   
   //amount of ingredients to buy
   int numFlour;
   int numGranSugar;
   int numBrownSugar;
   int numButter;
   int numCocoaPowder;
   int numEggs;
   int numVanilla;
   int numChocChips;
   int numMMS;
   
   //amount of ingredients for one batch
   const double FLOUR_ONE_BATCH = 3.5;
   const double GRAN_SUGAR_ONE_BATCH = 2.0;
   const double BROWN_SUGAR_ONE_BATCH = 1.5;
   const double BUTTER_ONE_BATCH = 2.0;
   const double COCOA_POWDER_ONE_BATCH = 2.5;
   const double EGGS_ONE_BATCH = 4.0;
   const double VANILLA_ONE_BATCH = 3.5;
   const double CHOC_CHIPS_ONE_BATCH = 1.5;
   const double MMS_ONE_BATCH = 2.0;
   
   //amount of ingredients at store
   const double FLOUR_STORE = 20.0;
   const double GRAN_SUGAR_STORE = 10.0;
   const double BROWN_SUGAR_STORE = 4.5;
   const double BUTTER_STORE = 2.0;
   const double COCOA_POWDER_STORE = 1.9;
   const double EGGS_STORE = 12.0;
   const double VANILLA_STORE = 12.0;
   const double CHOC_CHIPS_STORE = 2.0;
   const double MMS_STORE = 2.0;
   
   using function for how much of each ingredient to buy at store 

   numFlour = ingredientAmount(numBatches, FLOUR_ONE_BATCH, FLOUR_STORE);
   numGranSugar = ingredientAmount(numBatches, GRAN_SUGAR_ONE_BATCH, GRAN_SUGAR_STORE);
   numBrownSugar = ingredientAmount(numBatches, BROWN_SUGAR_ONE_BATCH, BROWN_SUGAR_STORE);
   numButter = ingredientAmount(numBatches, BUTTER_ONE_BATCH, BUTTER_STORE);
   numCocoaPowder = ingredientAmount(numBatches, COCOA_POWDER_ONE_BATCH, COCOA_POWDER_STORE);
   numEggs = ingredientAmount(numBatches, EGGS_ONE_BATCH, EGGS_STORE);
   numVanilla = ingredientAmount(numBatches, VANILLA_ONE_BATCH, VANILLA_STORE);
   numChocChips = ingredientAmount(numBatches, CHOC_CHIPS_ONE_BATCH, CHOC_CHIPS_STORE);
   numMMS = ingredientAmount(numBatches, MMS_ONE_BATCH, MMS_STORE);
   
   cout << "    " << numFlour << pluralize(" bag", " bags", (numFlour))
   << " of flour" << endl;
   
   cout << "    " << numGranSugar << pluralize(" bag", " bags", (numGranSugar))
   << " of granulated sugar" << endl;
   
   cout << "    " << numBrownSugar << pluralize(" bag", " bags", (numBrownSugar))
   << " of brown sugar" << endl;
   
   cout << "    " << numButter << pluralize(" pound", " pounds", (numButter))
   << " of butter" << endl;
   
   cout << "    " << numCocoaPowder << pluralize(" container", " containers",
                                                 (numCocoaPowder))
   << " of cocoa powder" << endl;
   
   cout << "    " << numEggs << " dozen eggs" << endl;
   cout << "    " << numVanilla <<pluralize(" bottle", " bottles",
                                            (numVanilla))
   << " of vanilla" << endl;
   
   cout << "    " << numChocChips <<pluralize(" bag", " bags", (numChocChips))
   << " of chocolate chips" <<endl;
   
   cout << "    " << numMMS << pluralize(" bag", " bags", (numMMS))
   << " of mini baking M&M's" << endl << endl;
*/

template <typename Predicate>
void printingred(Predicate pred, string ingred[], string measure[], int size, int numpeople) {
    
    int batches = pred(numpeople);
    
    for(int i = 0; i < size; i++) {
       
    }
    
    
    
    
}
