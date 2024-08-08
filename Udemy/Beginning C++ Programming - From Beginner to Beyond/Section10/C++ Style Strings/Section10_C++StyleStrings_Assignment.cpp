// Section 10
// Word Pyramid Assignment

#include <iostream>
#include <string>

using namespace std;

int main(){
    string user_string{};
    cout << "Please enter the word you would like to see displayed as a pyramid: " << endl;
    getline(cin,user_string);
    string pyra_half{""};
    for (size_t i{0};i<user_string.length();++i){
        pyra_half += user_string[i];
        cout << pyra_half << endl;
    }
}