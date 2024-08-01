// Switch Cases
// Coding Exercise: Day of the Week

#include <iostream>
using namespace std;

int main(){
    
    int day_code{3};

    /* Codes to be used:

    1. Day Code        Display
    2. --------        ------------------------
    3.    0            Sunday
    4.    1            Monday
    5.    2            Tuesday
    6.    3            Wednesday
    7.    4            Thursday
    8.    5            Friday
    9.    6            Saturday
    10.  other          Error - illegal day code

    */

   switch (day_code) {

    case 0:
        cout << "Sunday";       break;
    case 1:
        cout << "Monday";       break;
    case 2:
        cout << "Tuesday";      break;
    case 3:
        cout << "Wedesday";     break;
    case 4:
        cout << "Thursday";     break;
    case 5:
        cout << "Friday";       break;
    case 6:
        cout << "Saturday";     break;
    default:
        cout << "Error - illegal day code";

   }

}