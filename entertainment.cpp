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
        string filename = make_txt_string();
        file.open(filename);
        if (!file) {
            cout << "Unable to open file";
            return;
        }
        while (more) {
            
            string x;
            //file >> x;
            getline (file, x);
            cout << "Your recommended title is " << x <<
            ". " << endl <<  "Would you like another recommendation?" << endl;
            cout << "Enter A for yes. Enter B for no" << endl;
            char response;
            cin >> response;
            if (response == 'B' || response == 'b') {
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

void entertainment_choice() {
    string service;
    string type;
    string genre;
    cout << "You should watch TV!" << endl;
    cout << "What streaming service do you have?" << endl;
    cout << "A. Netflix" << endl << "B. Hulu" << endl;
    char x;
    cin >> x;
    if (x == 'A' || x == 'a') {
        service = "netflix";
    }
    
    else if (x == 'B' || x == 'b') {
        service = "hulu";
    }
    else {
        cout << "invalid input";
        return;
    }
    
    cout << "Do you prefer TV shows or movies?" << endl;
    cout << "A. TV shows" << endl << "B. Movies" << endl;
    cin >> x;
    if (x == 'A' || x == 'a') {
        type = "tv";
    }
    
    else if (x == 'B' || x == 'b') {
        service = "movie";
    }
    else {
        cout << "invalid input";
        return;
    }
    cout << "What is your favorite genre?" << endl;
    cout << "A. Action/Adventure" << endl << "B. Comedy" << endl << "C. Sci-Fi"
    << endl << "D. Mystery";
    cin >> x;
    if (x == 'A' || x == 'a') {
        genre = "actionadventure";
    }
    
    else if (x == 'B' || x == 'b') {
        genre = "comedy";
    }
    
    else if (x == 'C' || x == 'c') {
        genre = "scifi";
    }
    
    else if (x == 'D' || x == 'd') {
        genre = "mystery";
    }
    else {
        cout << "invalid input";
        return;
    }
    
    Entertainment suggestion(genre, type, service);
    suggestion.read_file();
}
