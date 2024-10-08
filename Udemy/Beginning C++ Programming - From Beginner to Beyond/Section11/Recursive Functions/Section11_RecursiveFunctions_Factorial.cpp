#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n){
	if (n == 0){
		return 1;                // base case
	}
	return n * factorial (n-1);  // recursive case
}

int main(){
	cout << factorial(3) << endl; // 6
	cout << factorial(8) << endl; // 40320
	cout << factorial(12) << endl; // 479001600
	cout << factorial(20) << endl; // Big Ass Number
	return 0;
}
