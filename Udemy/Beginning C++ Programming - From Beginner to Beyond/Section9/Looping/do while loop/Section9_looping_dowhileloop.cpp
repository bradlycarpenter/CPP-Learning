// Section 9
// do while loop
// Menu System

#include <iostream>
using namespace std;

int main(){

    char selection{};

    do {

        cout << "\n------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

        switch (selection) {

            case '1' : cout << "You chose option 1"; 
            break;

            case '2' : cout << "You chose option 2"; 
            break;

            case '3' : cout << "You chose option 3"; 
            break;

            case 'Q' : cout << "You chose to quit"; 
            break;

            case 'q' : cout << "You chose to quit"; 
            break;

            default: cout << "Illegal option";

        }

    } while (selection != 'Q' && selection != 'q');

}