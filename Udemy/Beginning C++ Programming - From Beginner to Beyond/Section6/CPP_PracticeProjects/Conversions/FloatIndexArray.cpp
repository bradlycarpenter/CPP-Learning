#include <iostream>
using namespace std;

int main(){

    int array[]{10, 20, 30, 40};
    float weird_number{1.3466623828};

    cout << array[static_cast<int>(weird_number)];

    
}