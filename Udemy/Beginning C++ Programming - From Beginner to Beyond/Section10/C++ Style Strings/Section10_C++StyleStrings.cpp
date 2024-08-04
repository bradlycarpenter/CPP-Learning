#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
     string s0;
     string s1{"Apple"};
     string s2{"Banana"};
     string s3{"Kiwi"};
     string s4{"apple"};
     string s5{s1};       // Apple
     string s6{s1, 0, 3}; // App
     string s7(10, 'X');  // XXXXXXXXXX

     // Handling S1
     // cout << s0 << endl;          // No Garbage
     // cout << s0.length() << endl; // Empty String

     // Initialization
     /*
     cout << "\nInitialization"
     << "\n________________________" << endl;
     cout << "s1 is initialized to: " << s1 << endl;
     cout << "s2 is initialized to: " << s2 << endl;
     cout << "s3 is initialized to: " << s3 << endl;
     cout << "s4 is initialized to: " << s4 << endl;
     cout << "s5 is initialized to: " << s5 << endl;
     cout << "s6 is initialized to: " << s6 << endl;
     cout << "s7 is initialized to: " << s7 << endl;
     */

     cout << "\nComparison"
     << "\n------------------------------" << endl;
     cout << boolalpha;
     cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl; // True Apple == Apple
     cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl; // False Apple != Banana
     cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl; // True Apple != Bananan
     cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;   // True Apple < Banana
     cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;   // True Banan > Apple
     cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;   // False apple > Apple
     cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl; // True Apple = Apple


}