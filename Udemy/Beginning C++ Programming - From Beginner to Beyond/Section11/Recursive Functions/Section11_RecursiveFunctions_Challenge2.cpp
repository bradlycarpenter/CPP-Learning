#include <iostream>
#include <iomanip>
using namespace std;

int function_activation_count{0};
double total_amount{};

double a_penny_doubled_everyday();

void amount_accumalated(){
    cout << "If I start with a penny and double it everyday for 25 days, I will have $" 
        << setprecision(10) << total_amount;
}

double a_penny_doubled_everyday(){
    function_activation_count++;
}

int test_function_activation_count(){
    return function_activation_count;
}

int main(){
    amount_accumalated();
}