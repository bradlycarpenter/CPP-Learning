#include <iostream>
using namespace std;

int main(){
    int x{4};
    int *pX = &x;
    cout << "pX is equal to: " << pX << endl;
    cout << "x is equal to: " << &x << endl;
}
