#include <iostream>
#include <cmath>

using namespace std;

void temperature_conversion(double);
double fahrenheit_temperature{42.7};

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----

double fahrenheit_to_celcius(double);
double fahrenheit_to_kelvin(double);

//----WRITE YOUR FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void temperature_conversion(double fahrenheit_temperature) {
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    
    double celsius_temperature{fahrenheit_to_celcius(fahrenheit_temperature)};
    double kelvin_temperature{fahrenheit_to_kelvin(fahrenheit_temperature)};
    
    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The fahrenheit temperature " << fahrenheit_temperature 
        << " degrees is equivalent to " << celsius_temperature 
        << " degrees celsius and " << kelvin_temperature 
        << " degrees kelvin.";
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION DEFINITIONS BELOW THIS LINE----

double fahrenheit_to_celcius(double fahrenheit_temperature){
    return round((5.0/9.0)*(fahrenheit_temperature - 32));
}

double fahrenheit_to_kelvin(double fahrenheit_temperature){
    return round(((5.0/9.0)*(fahrenheit_temperature - 32)) + 273);
}
//----DO NOT MODIFY THE CODE BELOW THIS LINE----
int main(){
    temperature_conversion(fahrenheit_temperature);
    return 0;
}