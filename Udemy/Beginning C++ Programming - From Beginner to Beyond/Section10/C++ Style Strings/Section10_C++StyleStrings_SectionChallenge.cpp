#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    char choice{};
    string message{};
    cout << "Would you like to encrypt a message or decrypt a message?(E/D)" << endl;
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Please enter the message: " << endl;
    getline(cin, message);
    switch (choice){
        case 'e' :
        case 'E' :{
           for (size_t i{0}; i < message.size() ; ++i){
                    size_t j = alphabet.find(message[i]);
                    if(j != string::npos){
                        message.at(i) = key.at(j);
                    }
            }
        break;
        }
        case 'd' :
        case 'D' :{
            for (size_t i{0}; i < message.size() ; ++i){
                int j = key.find(message[i]);
                if(j != string::npos){
                    message.at(i) = alphabet.at(j);
                }
            }
        break;
        }
        default: break;
    }
   cout << "Your " << ((choice == 'e' || choice == 'E') ? "encrypted" : "decrypted")  << " message is: " << message;
}