#include <iostream>

using namespace std;

void swapPointers(int *ptr1, int *ptr2);

int main() {
  int a{5}, b{10};
  int *ptrA{nullptr}, *ptrB{nullptr};
  ptrA = &a;
  ptrB = &b;
  swapPointers(ptrA, ptrB);
  cout << "\na == " << a << ", b == " << b;
  cout << endl;
  return 0;
}

void swapPointers(int *ptr1, int *ptr2) {
  //-- Write your code below this line
  *ptr1 = *ptr1 + *ptr2; // 5+10 = 15
  *ptr2 = *ptr1 - *ptr2; // 15 - 10 = 5
  *ptr1 = *ptr1 - *ptr2; // 15 - 5 = 10
  cout << "Function Completed\n";
  //-- Write your code above this line
}
