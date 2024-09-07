#include <iostream>
#include <string>

using namespace std;

int iterative_sum_of_digits(int n);
int recursive_sum_of_digits(int n);

int iterative_sum_of_digits(int n){
    string numbers = to_string(n);
    size_t total{0};
    for (char c:numbers){
        total += c - 48;
    }
    return total;
}

int recursive_sum_of_digits(int n){
    if (n == 0){
        return 0;
    }
    return (n % 10 + recursive_sum_of_digits(n /10));
}

int main(){
    cout << "Enter a number: ";
    int number{};
    cin >> number;
    cout << "Iterative Sum: " << iterative_sum_of_digits(number) << endl;
    cout << "Relative Sum: " << recursive_sum_of_digits(number) << endl;
}