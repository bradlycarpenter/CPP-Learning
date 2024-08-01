// Section 9
// Looping

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> vec {};
    int result{0};

    // if (!vec.empty() || vec.size() != 1){

        for (int i {0}; i < vec.size(); i++) {
            for (int j {i+1}; j < vec.size(); ++j) {
                result += vec[i] * vec[j];
                cout << vec[i] << " x " << vec[j] << " = " << vec[i]*vec[j] << endl;
            }
        }
    cout << "Total is: " << result;
    // }

}