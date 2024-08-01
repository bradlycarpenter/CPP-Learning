#include <iostream>
using namespace std;

int main(){

    float meters{0.0};
    cout << "Please input the amount of meters you would like converted to feet: " << endl;
    cin >> meters;

    const float CONVERSION_VALUE{33.28084};
    cout << meters << " meters is equivalent " << meters * CONVERSION_VALUE << " feet.";

}
