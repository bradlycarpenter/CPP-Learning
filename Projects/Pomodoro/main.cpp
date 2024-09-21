#include <chrono>
#include <iostream>
#include <thread>

using namespace std;

// string getPresentDateTime();
void Timer(size_t &seconds);

int main() {
  system("clear");

  cout << "Starting up Pomodoro Tracker"
       << "\nHow long would you like your first split to be? (Minutes): ";

  size_t minutes;
  cin >> minutes;
  size_t seconds = minutes * 60;

  Timer(seconds);
}

void Timer(size_t &seconds) {
  system("clear");
  // Red
  cout << "\x1b[91m";

  for (size_t i{seconds}; i > 0; --i) {
    if (i > 119) {
      cout << i / 60 << " Minutes remaining\n";
    } else if (i > 59) {
      cout << i / 60 << " Minute remaining\n";
    } else {
      cout << i << " Seconds remaining\n";
    }

    this_thread::sleep_for(chrono::seconds(1)); // Freeze for 1 second
    system("clear");
  }
}
