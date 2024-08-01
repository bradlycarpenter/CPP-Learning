// Section 9
#include <iostream>
#include <vector>

using namespace std;

int main() {
    char opt{};
    vector<int> numbers{};
    int num_to_add{};
    int total{};
    int smallest{};
    int largest{};

    do {
        cout << "-------------------------------" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "-------------------------------" << endl;

        cin >> opt;

        switch (tolower(opt)) {
            case 'p': {
                cout << "-------------------------------" << endl;
                cout << "[ ";
                if (numbers.empty()) {
                    cout << "[] - No numbers to display." << endl;
                } else {
                    for (auto i : numbers) cout << i << " ";
                }
                cout << "]" << endl;
                break;
            }
            case 'a': {
                do {
                    cout << "What number would you like to add?: " << endl;
                    cin >> num_to_add;
                    numbers.push_back(num_to_add);
                    cout << "Would you like to add another number? (Y/N)"
                         << endl;
                    cin >> opt;
                } while (opt != 'n' && opt != 'N');
                break;
            }
            case 'm': {
                if (numbers.empty()) {
                    cout << "No numbers to median." << endl;
                } else {
                    for (auto i : numbers) total += i;
                    cout << "The average is: "
                         << static_cast<double>(total) / numbers.size() << endl;
                }
                break;
            }
            case 's': {
                if (numbers.empty()) {
                    cout << "No numbers to display smallest." << endl;
                } else {
                    smallest = numbers.at(0);
                    for (auto i : numbers) {
                        if (smallest > i) smallest = i;
                    }
                    cout << "The smallest number is: " << smallest << endl;
                }
                break;
            }
            case 'l': {
                if (numbers.empty()) {
                    cout << "No numbers to display largest." << endl;
                } else {
                    largest = numbers.at(0);
                    for (auto i : numbers) {
                        if (largest < i) largest = i;
                    }
                    cout << "The largest number is: " << largest << endl;
                }
                break;
            }
            case 'q':
                cout << "Goodbye" << endl;
                break;
            default:
                cout << "Unknown selection, please try again";
        }
    } while (opt != 'Q' && opt != 'q');
}