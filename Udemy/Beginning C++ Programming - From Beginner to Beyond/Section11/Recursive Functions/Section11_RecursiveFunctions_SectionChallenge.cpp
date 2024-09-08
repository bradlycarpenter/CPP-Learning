// Section 11
#include <iostream>
#include <vector>
#include <string>

using namespace std;

const string print_options();
string print_numbers(const vector<int> &num);
inline void add_numbers(vector<int> &num, char &opt);
double mean_number(const vector<int> &num);
int smallest_number(const vector<int> &num);
int largest_number(const vector<int> &num);

int main(){
    vector<int> numbers{};
    char opt{};

    do {
        cout << print_options();
        cin >> opt;

        switch (tolower(opt)) {
            case 'p': {
                cout << print_numbers(numbers);
                break;
            }
            case 'a': {
                add_numbers(numbers,opt);
                break;
            }
            case 'm': {
                if (numbers.empty()){
                    cout << "No numbers to mean\n";
                } else {
                    cout << "The average is: " + to_string(mean_number(numbers)) + "\n";
                }
                break;
            }
            case 's': {
                if (numbers.empty()) {
                    cout << "No numbers to display smallest.\n";
                } else {
                    cout << "The smallest number is: " 
                        << to_string(smallest_number(numbers)) + "\n";
                }
                break;
            }
            case 'l': {
                if (numbers.empty()) {
                    cout << "No numbers to display largest.\n";
                } else {
                    cout << "The largest number is: " 
                        << to_string(largest_number(numbers)) + "\n";
                }
                break;
            }
            case 'q':
                cout << "Goodbye\n";
                break;
            default:
                cout << "Unknown selection, please try again";
        }
    } while (opt != 'Q' && opt != 'q');
}

const string print_options(){
    const string options{
        "-------------------------------\n"
        "P - Print numbers\n"
        "A - Add a number\n"
        "M - Display mean of the numbers\n"
        "S - Display the smallest number\n"
        "L - Display the largest number\n"
        "Q - Quit\n"
    };
    return options;
}

string print_numbers(const vector<int> &num){
    string numbers{};
    if (num.empty()){
        numbers = "[] - No numbers to display.";
    } else {
        for (auto i:num){
            numbers += to_string(i) + " ";
        }
    }
    return numbers + "\n";
}

inline void add_numbers(vector<int> &num, char &opt){
    int num_to_add{};
        do {
            cout << "What number would you like to add?: \n";
            cin >> num_to_add;
            num.push_back(num_to_add);
            cout << "Would you like to add another number? (Y/N)\n";
            cin >> opt;
        } while (opt != 'n' && opt != 'N');
}

double mean_number(const vector<int> &num){
    int total{};
    for (auto i:num) total += i;
    return static_cast<double>(total) / num.size();
}

int smallest_number(const vector<int> &num){
    int smallest = num.at(0);
    for (auto i:num){
        if (smallest > i){
            smallest = i;
        }
    }
    return smallest;
}

int largest_number(const vector<int> &num){
    int largest = num.at(0);
    for (auto i:num){
        if (largest < i){
            largest = i;
        }
    }
    return largest;
}
