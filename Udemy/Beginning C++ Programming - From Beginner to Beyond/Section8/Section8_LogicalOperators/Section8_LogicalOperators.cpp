// Section 8
// Logical Operators

#include <iostream>
using namespace std;

int main(){
    int num{};
    const int LOWER{10};
    const int UPPER{20};

    cout << boolalpha;

    // Inside Bounds Check:
    // cout << "Enter an integer - The bounds are " << LOWER << " and " << UPPER << ":" << endl;
    // cin >> num;

    // bool within_bounds{false};

    // within_bounds = (num > LOWER && num < UPPER);
    // cout << num << " is between " << LOWER << " and " << UPPER << " : " << within_bounds << endl;

    // Outside Bounds Check:
    // cout << "Enter an integer - The bounds are " << LOWER << " and " << UPPER << ":" << endl;
    // cin >> num;

    // bool outside_bounds{false};

    // outside_bounds = (num < LOWER || num > UPPER);
    // cout << num << " is outside " << LOWER << " and " << UPPER << " : " << outside_bounds << endl;

    // On Bounds Check:
    // cout << "\nEnter an integer - the bounds are " << LOWER << " and " << UPPER << " : ";
    // cin >> num;

    // bool on_bounds{false};
    // on_bounds = (num == LOWER || num == UPPER);
    // cout << num 
    // << " is one of the bounds which are " 
    // << LOWER 
    // << " and " 
    // << UPPER 
    // << " : " 
    // << on_bounds << endl;

    bool wear_coat{false};
    double temperature{};
    int wind_speed{};

    const int WIND_SPEED_FOR_COAT{25};       // wind over this value requires a coat
    const double TEMPERATURE_FOR_COAT{45};   // temperature below this value requires a coat

    cout << "\nEnter the current temperature in (F): ";
    cin >> temperature;
    cout << "Enter windspeed in (mph): ";
    cin >> wind_speed;

    // // Require a coat if BOTH the windspeed is too high AND temperature is too low
    // wear_coat = (temperature < TEMPERATURE_FOR_COAT && wind_speed > WIND_SPEED_FOR_COAT);
    // cout << "Do you need to wear a coat using AND? : " << wear_coat << endl;

    // Require a coat if BOTH the windspeed is too high OR temperature is too low
    wear_coat = (temperature < TEMPERATURE_FOR_COAT || wind_speed > WIND_SPEED_FOR_COAT);
    cout << "Do you need to wear a coat using AND? : " << wear_coat << endl;
}