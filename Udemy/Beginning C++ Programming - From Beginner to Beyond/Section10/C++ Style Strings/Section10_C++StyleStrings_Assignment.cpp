// Section 10
// Word Pyramid Assignment

#include <iostream>
#include <string>
using namespace std;

int main(){
    string user{""};
    string output{""};
    string reverse_output{""};
    cout << "Please enter the word you would like to see displayed as a pyramid: " << endl;
    getline(cin,user);
   for (size_t i = 0; i < user.length(); ++i) {
        string white_spaces(user.length() - output.length(),' ');
        cout << white_spaces << output + reverse_output << white_spaces << endl;
        reverse_output = "";
        for (size_t j = output.length(); j > 0; --j) {
            reverse_output += output[j - 1];
        }
        output += user[i];
    }
    cout << output + reverse_output << endl;
}