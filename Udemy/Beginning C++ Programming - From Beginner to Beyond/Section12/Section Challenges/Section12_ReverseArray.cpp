#include <iostream>

using std::cout;
using std::endl;

void reverse_array(int *arr, int size);

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  reverse_array(arr, size);

  cout << arr + 1<< endl;
  
  // After the function call, the array should be reversed:
  // arr[] = {5, 4, 3, 2, 1}
}

void reverse_array(int *arr, int size) {}
