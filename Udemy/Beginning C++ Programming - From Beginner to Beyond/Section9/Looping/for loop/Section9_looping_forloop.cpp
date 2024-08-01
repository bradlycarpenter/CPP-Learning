#include <iostream>
#include <vector>
using namespace std;

int main(){

    // for (int i{1} ; i <= 10 ; i++)
    //     cout << i << endl;

    // for (int i{1} ; i <= 10 ; i+=2)
    //     cout << i << endl;

    // for (int i{10} ; i >= 0 ; i--)
    //     cout << i << endl;

    // for (int i{10} ; i <= 100 ; i+=10) {
    //     cout << i << endl;
    // }

    // for (int i{1}, j{10} ; i<=10 ; i++, j--)
    //     cout << i << " * " << j << " = " << (i*j) << endl;

    // for (int i{1} ; i<=100 ; i++){
    //     cout << i << ((i % 10 == 0) ? "\n" : " ");
    // }

    // vector <int> nums {10, 20, 30, 40, 50};
    // for (unsigned i{0} ; i < nums.size() ; i++) {
    //     cout << nums[i] << endl;
    // }

       
   int sum{0};
   
   for (int i{1} ; i <= 15 ; ++i)
       (i % 2 != 0) ? sum += i : sum;
    
cout << "------------------------------------" << endl;

}