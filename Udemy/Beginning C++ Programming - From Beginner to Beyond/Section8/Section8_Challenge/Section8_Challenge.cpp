#include <iostream>
using namespace std;

int main()
{

    const int ONE_RAND{100};
    const int FIFTY_CENTS{50};
    const int TWENTY_CENTS{20};
    const int TEN_CENTS{10};
    const int FIVE_CENTS{5};

    int one_rand_amount{}, fifty_cents_amount{}, twenty_cents_amount{}, ten_cents_amount{}, five_cents_amount{}, one_cent_amount{};
    int user_money{};

    cout << "Please enter the amount of money you would like change for in cents: ";
    cin >> user_money;

    one_rand_amount = user_money / ONE_RAND;
    user_money -= one_rand_amount * ONE_RAND;

    fifty_cents_amount = user_money / FIFTY_CENTS;
    user_money -= fifty_cents_amount * FIFTY_CENTS;

    twenty_cents_amount = user_money / TWENTY_CENTS;
    user_money -= twenty_cents_amount * TWENTY_CENTS;

    ten_cents_amount = user_money / TEN_CENTS;
    user_money -= ten_cents_amount * TEN_CENTS;

    five_cents_amount = user_money / FIVE_CENTS;
    user_money -= five_cents_amount * FIVE_CENTS;

    cout <<

        "One rands: " << one_rand_amount << " \n50 cents: " << fifty_cents_amount << " \n20 cents: " << twenty_cents_amount << " \n10 cents: " << ten_cents_amount << " \n5 cents: " << five_cents_amount << " \n1 cents: " << user_money << endl;

    // Array Option a la zoinx
    // int total = 420;

    // int coinnumber[] = {100 ,50, 10, 5, 1};

    // int cent100 = total / coinnumber[0];
    // total -= cent100 * coinnumber[0];

    // int cent50 = total / coinnumber[1];
    // total -= cent50 * coinnumber[1];

    // int count10 = total / coinnumber[2];
    // total -= count10 * coinnumber[2];

    // int count5 = total / coinnumber[3];
    // total -= count5 * coinnumber[3];

    // int count1 = total;
}