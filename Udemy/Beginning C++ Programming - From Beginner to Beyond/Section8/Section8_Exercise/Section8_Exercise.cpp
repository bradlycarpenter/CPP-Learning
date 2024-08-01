#include <iostream>

using namespace std;

int main(int age, bool parental_consent, bool ssn, bool accidents)
{

    //----WRITE YOUR CODE BELOW THIS LINE----
    age = 19;
    parental_consent = true;
    ssn = true;
    accidents = false;

    if ((age >= 18 || (age >= 16 && parental_consent)) && ssn && !accidents)
    {
        // WRITE ALL YOUR CODE WITHIN THE PARENTHESES
        cout << "Yes, you can work.";
    }
    else
    {
        cout << "No, you can not work.";
    }
    // //----WRITE YOUR CODE ABOVE THIS LINE----
}