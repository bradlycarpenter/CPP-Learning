//Switch Statement
/*
Ask the user what grade they expect on an exam and tell them what they need to score to get it.
*/


#include <iostream>
using namespace std;

int main(){

char letter_grade{};

cout << "Enter the letter grade you expect on the exam: " << endl;
cin >> letter_grade;

switch (letter_grade){
    case 'A':
    case 'a': 
        cout << "You need 90 or above, go study!" << endl;
        break;
    case 'B':
    case 'b':
        cout << "You need 80-89 for a B, go study!" << endl;
        break;
    case 'C':
    case 'c':
        cout << "You need 70-79 for an average grade" << endl;
        break;
    case 'D':
    case 'd':
        cout << "Hmm, you should strive for a better grade. All you need is 60-69" << endl;
        break;
    case 'F':
    case 'f':
    {
        char confirm{};
        cout << "Are you sure? (Y/N)" << endl;
        cin >> confirm;
        if (confirm == 'Y' || confirm == 'y')
            cout << "OK, I guess you didn't study." << endl;
        else if (confirm == 'N' || confirm == 'n')
            cout << "Good - go study!" << endl;
        else
            cout << "Illegal choice." << endl;
        break;
    }
       
    default:
        cout << "Invalid choice." << endl;
    
}

}