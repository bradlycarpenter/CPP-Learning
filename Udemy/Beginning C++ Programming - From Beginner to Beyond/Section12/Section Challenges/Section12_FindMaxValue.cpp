#include <iostream>

using std::cout;
using std::size_t;

int find_max_element(int *arr, int size) {
  size_t max_element{0};
  for (size_t i{0}; i < size; ++i) {
    if (arr[i] > max_element) {
      max_element = arr[i];
    }
  }
  return max_element;
}

int main() {
  int arr[] = {12, 45, 67, 23, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  int maxElement = find_max_element(arr, size);
  cout << maxElement;

  // maxElement should be 67
}
