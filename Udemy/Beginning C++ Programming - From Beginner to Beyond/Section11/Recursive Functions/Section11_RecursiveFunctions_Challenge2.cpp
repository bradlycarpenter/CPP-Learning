#include <iostream>
#include <iomanip>
using namespace std;

int function_activation_count{0};
int n{25};
double total_amount{};

double a_penny_doubled_everyday(double total_amount, int n);

void amount_accumalated(){
    total_amount = a_penny_doubled_everyday(0.01, 25);
    cout <<  "If I start with a penny and doubled it every day for 25 days, I will have $" 
        << setprecision(10) << total_amount;
}

double a_penny_doubled_everyday(double total_amount, int n){
    function_activation_count++;
    if (function_activation_count == n){
        return total_amount;
    }
    return total_amount;
}

int test_function_activation_count(){
    return function_activation_count;
}

int main(){
    amount_accumalated();
}