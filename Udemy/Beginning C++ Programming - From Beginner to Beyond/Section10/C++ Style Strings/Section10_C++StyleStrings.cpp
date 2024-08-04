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

     /* Initialization
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

     /* Comparison
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
     */

     /*Assignment
     cout << "\nAssignment" << "\n__________________" << endl;

     s1 = "Watermelon";
     cout << "s1 is now: " << s1 << endl;
     s2 = s1;
     cout << "s2 is now: " << s2 << endl;

     s3 = "Frank";
     cout << "s3 is now: " << s3 << endl;

     s3[0] = 'C';
     cout << "s3 changed first letter to C: " << s3 << endl;
     s3.at(0) = 'P';
     cout << "s3 changed first letter to P: " << s3 << endl; */

     /*Concatenation
     s3 = "Watermelon";
     cout << "\nConcatenation " << "\n______________" << endl;

     s3 = s5 + " and" + s2 + " juice"; // Apple and Banana Juice
     cout << "s3 is now: " << s3 << endl; // Apple and Banana Juice

     // s3 = "nice " + " cold " + s5 + "juice"; // Comipler Error*/

     /*for loop
     cout << "\nLooping" << "\n-------------------------" << endl;

     s1 = "Apple";
     for (size_t i {0}; i < s1.length(); ++i)
          cout << s1.at(i);
     cout << endl;*/

     /*Range-based for loop
     cout << "\nLooping" << "\n-------------------------" << endl;

     s1 = "Apple";
     for (char c:s1)
          cout << c;
     cout << endl;*/

     /*Substring
     cout << "\nSubstring" << "\n--------------------------" << endl;
     s1 = "This is a test";

     cout << s1.substr(0,4) << endl;    // This
     cout << s1.substr(5,2) << endl;    // is
     cout << s1.substr(10,4) << endl;   // test */

     /*Erase
     cout << "\nErase" << "\n---------------------------" << endl;

     s1 = "This is a test";
     s1.erase(0,5);          //Erase This from s1 results in "is a test"
     cout << "s1 is now: " << s1 << endl;  // is a test*/

     /*Getline
     cout << "\ngetline" << "\n-------------------" << endl;

     string full_name {};

     cout << "Enter your full name ";
     getline(cin, full_name);

     cout << "Your full name is: " << full_name << endl;*/

     /*Find
     cout << "\nfind" << "\n------------------------" << endl;

     s1 = "The secret word is Boo";
     string word{};

     cout << "Enter the word to find: ";
     cin >> word;

     size_t position = s1.find(word);
     if (position != string::npos)
          cout << "Found " << word << " at position: " << position << endl;
     else
          cout << "Sorry, " << word << " not found" << endl;

     cout << endl;*/
}