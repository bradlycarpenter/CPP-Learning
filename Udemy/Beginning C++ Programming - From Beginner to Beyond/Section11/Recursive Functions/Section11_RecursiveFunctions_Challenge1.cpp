#include <iostream>
#include <string>
using namespace std;

int recursive_sum_of_digits(int n){
    if (n == 0){
        return 0;
    }
    return (n % 10 + recursive_sum_of_digits(n / 10)); 
}

int iterative_sum_of_digits(int n){
    string numbers = to_string(n);
    size_t total{0};
    for (auto c:numbers){
        total += c - 48;
    }
    return total;
}

int main(){
    cout << iterative_sum_of_digits(1234);
    cout << recursive_sum_of_digits(1234);
}