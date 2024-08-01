

#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Frank's Cleaning Service." << endl;
    cout << "How many rooms would you like cleaned?" << endl;

    int room_count{ 0 };
    cin >> room_count;

    cout << "Number of rooms: " << room_count << endl;

    const double price_per_room{ 30 };
    cout << "The price per room is: R" << price_per_room << endl;
    cout << "Cost: R" << room_count * price_per_room << endl;

    const double service_tax{ 0.06 };

    cout << "Tax: R" << room_count * price_per_room * service_tax << endl;

    cout << "Total Estimate: R" <<
        room_count * price_per_room
        +
        room_count * price_per_room * service_tax
        << endl;

    return 0;
   
}
