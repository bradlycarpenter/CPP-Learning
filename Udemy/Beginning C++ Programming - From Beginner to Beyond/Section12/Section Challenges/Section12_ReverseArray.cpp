#include <iostream>

using std::cout;
using std::endl;
using std::size_t;

void reverse_array(int *arr, int size);
void print_array(int *arr, int size);

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  int size = sizeof(arr) / sizeof(arr[0]);

  reverse_array(arr, size);
  print_array(arr, size);

  // After the function call, the array should be reversed:
  // arr[] = {5, 4, 3, 2, 1}
}

void reverse_array(int *arr, int size) {
  for (size_t i{0}; i < size / 2; ++i) {
    arr[i] = arr[i] + arr[size - i - 1];
    arr[size - i - 1] = arr[i] - arr[size - i - 1];
    arr[i] = arr[i] - arr[size - i - 1];
  }
}

void print_array(int *arr, int size) {
  for (size_t i{0}; i < size; ++i) {
    cout << arr[i];
  }
  cout << endl;
}