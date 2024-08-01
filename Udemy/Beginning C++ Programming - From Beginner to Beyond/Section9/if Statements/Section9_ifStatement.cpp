// Section 9
// If Statement

#include <iostream>

using namespace std;

int main() {
    int num{};
    const int MIN{10};
    const int MAX{100};

    cout << "Enter a number between " << MIN << " and " << MAX << " : " << endl;
    cin >> num;

    if (num >= MIN) {
        cout << "\n================== If Statement 1 ==================" << endl;
        cout << num << " is greater than or equal to " << MIN << endl;

        int diff {num - MIN};                                                            // Only in scope to this if Statement.
        cout << num << " is " << diff << " greater than " << MIN << endl;
    }

    if (num <= MAX) {
        cout << "\n================== If Statement 2 ==================" << endl;
        cout << num << " is less than or equal to " << MAX << endl;

        int diff {MAX-num};
        cout << num << " is " << diff << " less than " << MAX << endl;
    }

    if (num >= MIN && num <= MAX) {
        cout << "\n================== If Statement 3 ==================" << endl;
        cout << num << " is in range " << endl;
        cout << " This means statements 1 and 2 must also display";
    }

    if (num == MIN || num == MAX) {
        cout << "\n================== If Statement 4 ==================" << endl;
        cout << num << " is right on a boundary " << endl;
        cout << "This means all 4 statements display" << endl;
    }

}