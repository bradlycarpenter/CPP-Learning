#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n){
	if (n == 0){
		return 1;                // base case
	}
	return n * factorial (n-1);  // recursive case
}

int main(){
	cout << factorial(8) << endl; // 40320
	return 0;
}