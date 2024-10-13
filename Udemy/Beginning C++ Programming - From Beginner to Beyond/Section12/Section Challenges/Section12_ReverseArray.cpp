#include <iostream>

using std::cout;

int reverse_array(int *arr, int size);

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  reverse_array(arr, size);

  cout << "Wassup";

  // After the function call, the array should be reversed:
  // arr[] = {5, 4, 3, 2, 1}
}

int reverse_array(int *arr, int size){
  return 0;
}
