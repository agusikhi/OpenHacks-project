//
//  music.cpp
//  hackathon
//
//  Created by Anisha Nahta on 5/23/20.
//  Copyright © 2020 Anisha Nahta. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <cassert>
#include <functional>
using namespace std;


class Music {
public:
    
    Music() {
        Node *a = new Node;
        a->datum = "New Rules by Dua Lipa";
        
        Node *b = new Node;;
        b->datum = "Thank U Next by Ariana Grande";
        
        Node *c = new Node;;
        c->datum = "Sunflower by Post Malone";
        
        a->left = b;
        a->right = c;
        root = a;
        
        Node *d = new Node;;
        d->datum = "Shake It Up by Taylor Swift";
        
        Node *e = new Node;;
        e->datum = "One Dance by Drake";
        
        b->left = d;
        b->right = e;
        
        Node *f = new Node;
        f->datum = "Green Light by Lorde";
        
        Node *g = new Node;
        g->datum = "Love Story by Taylor Swift";
        
        c->left = f;
        c->right = g;
        
        Node *h = new Node;
        h->datum = "Future Nostalgia by Dua Lipa";
        h->right = nullptr;
        h->left = nullptr;
        
        Node *i = new Node;
        i->datum = "Ctrl by SZA";
        i->right = nullptr;
        i->left = nullptr;
        
        d->left = h;
        d->right = i;
        
        Node *j = new Node;
        j->datum = "Lately EP by Still Woozy";
        j->right = nullptr;
        j->left = nullptr;
        
        Node *k = new Node;
        k->datum = "Damn by Kendrick Lamar";
        k->right = nullptr;
        k->left = nullptr;
        
        e->left = j;
        e->right = k;
        
        Node *l = new Node;
        l->datum = "Notes on a Conditional Form by the 1975";
        l->right = nullptr;
        l->left = nullptr;
        
        Node *m = new Node;
        m->datum = "Over It by Summer Walker";
        m->right = nullptr;
        m->left = nullptr;
        
        f->left = l;
        f->right = m;
        
        Node *n = new Node;
        n->datum = "Golden Hour by Kacey Musgraves";
        n->right = nullptr;
        n->left = nullptr;
        
        Node *o = new Node;
        o->datum = "Partymobile by PARTYNEXTDOOR";
        o->right = nullptr;
        o->left = nullptr;
        
        g->left = n;
        g->right = o;
    }
    
    void find() {
        
        while(root->left != nullptr) {
            cout << "Do you like listening to " << root->datum << "? "<< endl;
            cout << "1 for Yes and 2 for No or Never Heard of It" << endl << endl;
            
            int num;
            cin >> num;
            
            if(num == 1) {
                root = root->left;
            }
            else if(num == 2) {
                root = root->right;
            }
        }
        
        cout << "You should listen to this album: " << root->datum << endl << endl;
        
    }
    
    
private:

    // A Node stores an element and pointers to its left and right children
    struct Node {

      // Default constructor - does nothing
      Node() {}

      // Custom constructor provided for convenience
      Node(const string &datum_in, Node *left_in, Node *right_in)
              : datum(datum_in), left(left_in), right(right_in) { }

      string datum;
      Node *left;
      Node *right;
    };

    Node *root;
};


void musicmain() {
    
    Music newsong;
    
    cout << "Discover new music during quarintine! For every song that comes up, hit 1 if you like it and 2 if you do not or never heard of it." << endl << endl;
    
    newsong.find();
}
