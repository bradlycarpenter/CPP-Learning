#include <iostream>
using namespace std;

int main () {
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    int age{15};
    bool has_car = true;
    if (age > 15) {
        if (has_car == true) 
            cout << "Yes - you can drive!";
         else 
            cout << "Sorry, you need to buy a car before you can drive!";        
     } else {
        cout << "Sorry, come back in " << 16 - age << " years and be sure you own a car when you come back.";    
    
        
        
    }
    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
}