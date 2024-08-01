#include <iostream>

using namespace std;

int main(){

    int length{}, width{}, height{};

    const int MAX_DIMENSION{10};

    const double BASE_COST{2.5};
    
    const int TIER1_THRESHOLD{100}, TIER2_THRESHOLD{250};
    const double TIER1_PERCENTAGE{0.10}, TIER2_PERCENTAGE{0.25};

    int total_volume{};

    cout << "Enter your package length, width and height in that order seperated by spaces." << endl;
    cin >> length;
    cin >> width;
    cin >> height;

    if (length <= MAX_DIMENSION && width <= MAX_DIMENSION && height <= MAX_DIMENSION) {
        if (length*width*height >= TIER2_THRESHOLD)
            cout << "Your Shipping Cost will be: $" << BASE_COST + BASE_COST * TIER2_PERCENTAGE << endl;
        else if (length*width*height >= TIER1_THRESHOLD)
            cout << "Your Shipping Cost will be: $" << BASE_COST + BASE_COST * TIER1_PERCENTAGE << endl;
        else
            cout << "Your Shipping Cost will be: $" << BASE_COST << endl;
    } else {
        cout << "No single dimension may be greater than 10." << endl;
    }
    

}