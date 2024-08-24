#include <iostream>
using namespace std;

int num{300};

void local_example(int x){
    int num{1000}; // Local to local_example
    cout << "\nLocal num is: " << num << " in local_example - start" << endl;
    num=x;
    cout << "Local num is: " << num << " in local_example - end" << endl;
    // num1 in main is not within scope - so it can't be used here.
}

void global_example(){
    cout << "\nGlobal num is: " << num << " in global_example - start" << endl;
    num *= 2;
    cout << "Global num is: " << num << " in global_example - end" << endl;
}

void static_local_example(){
    static int num{5000}; /* local to static_local_example
    static - retains it's value between calls*/
    cout << "\nLocal static num is: " << num << " in static_local_example - start" << endl;
    num+=1000;
    cout << "Local static num is: " << num << " in static_local_example - end" << endl;
}

int main(){
    int num{100}; // Local to Main
    int num1{500}; // Local to Main

    cout << "Local num is: " << num << " in main" << endl;

    { // Creates a new level of scope
        int num{200}; // Local to this inner block << endl;
        cout << "Local num is: " << num << " in inner block in main" << endl;
        cout << "Inner block in main can see out - num 1 is: " << num1 << endl;
    }

    cout << "Local num is: " << num << " in main" << endl;

    local_example(10);
    local_example(20);

    global_example();
    global_example();
    static_local_example();
    static_local_example();
}