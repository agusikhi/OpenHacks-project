//
//  entertainment.cpp
//  hackathon
//
//  Created by Anisha Nahta on 5/23/20.
//  Copyright © 2020 Anisha Nahta. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

void entertainment_choice() {
    cout << "You should watch TV";
}

class Entertainment {
    
public:
    // constructor
    Entertainment(string genre_in, string type_in, string service_in) :
    genre(genre_in), type(type_in), service(service_in)
    {}
    
    string make_txt_string() {
        return service + "_" + genre + "_" + type + ".txt";
    }
    
    void read_file() {
        bool more = true;
        ifstream file;
        file.open (make_txt_string());
        if (!file) {
            cout << "Unable to open file";
            
        }
        while (more) {
            
            string x;
            file >> x;
            cout << "Your recommended title is " << x <<
            ". Would you like another recommendation?" << endl;
            cout << "Enter A for yes. Enter B for no" << endl;
            char response;
            cin >> response;
            if (response == 'B') {
                more = false;
            }
           
        }
         file.close();
    }
private:
    string genre;
    string type;
    string service;
};
