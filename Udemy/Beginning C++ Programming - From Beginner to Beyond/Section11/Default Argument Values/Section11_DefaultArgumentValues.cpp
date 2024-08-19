#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function prototype with default arguments
double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);
void greeting(string name, string prefix = "Mr.", string suffix = "");

// Function definition without default arguments
double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost += (base_cost * tax_rate) + shipping;
}
void greeting(string name, string prefix, string suffix){
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}

int main() {
    double cost{0};
    cost = calc_cost(100.0, 0.08, 4.25);  // Uses no defaults: 100 + 100*0.08 + 4.25

    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl; // 112.25

    cost = calc_cost(100.0, 0.08);       // Uses default shipping: 100 + 100*0.08 + 3.50
    cout << "Cost is: " << cost << endl; // 111.50

    cost = calc_cost(200.0);             // Uses default tax rate and shipping: 200 + 200*0.06 + 3.50
    cout << "Cost is: " << cost << endl; // 215.50

    greeting("Glenn Jones", "Dr.", "M.D.");
    greeting("James Rogers", "Professor", "Ph.D");
    greeting("Frank Miller", "Dr.");
    greeting("William Smith");
    greeting("Mary Howard", "Mrs", "Ph.D");
    cout << endl;
}