#include <iostream>
#include "Menu.h"
#include "Menu2.h"

using namespace std;

int main() {

    unsigned dType = 1;
    unsigned type = 1;

    while(dType) {

        cout << "Choose data structure:\n";
        cout << "1. Dynamic Array\n2. Linked List" << endl;
        cin >> dType;

        if (dType == 1){
            cout << "Choose type of data:\n";
            cout << "1. Float\n2. Integer" << endl;
            cin >> type;
            if (type == 1){
                menu<float>();
                break;
            } else if(type == 2){
                menu<int>();
                break;
            } else {
                cout << "Wrong type number." << endl;
                type = -1;
            }
            break;
        } else if(dType == 2){
            cout << "Choose type of data:\n";
            cout << "1. Float\n2. Integer" << endl;
            cin >> type;
            if (type == 1){
                menu2<float>();
                break;
            } else if(type == 2){
                menu2<int>();
                break;
            } else {
                cout << "Wrong type number." << endl;
                type = -1;
            }
            break;
        } else {
            cout << "Wrong type number." << endl;
            dType = -1;
        }
    }

    return 0;
}