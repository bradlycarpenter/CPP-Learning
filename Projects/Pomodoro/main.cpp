#include <chrono>
#include <cstdio>
#include <ctime>
#include <iostream>
#include <thread>

using namespace std;

string getPresentDateTime();
void Timer(size_t &seconds);

int main() {
  cout << "Starting up Pomodoro Tracker";
  cout << "\nHow long would you like your first split to be? (Minutes): ";
  size_t minutes;
  cin >> minutes;
  size_t seconds = minutes * 60;
  Timer(seconds);
}

void Timer(size_t &seconds) {
  for (size_t i{seconds}; i > 0; --i) {
    if (i > 120) {
      cout << i / 60 << " Minutes remaining";
    } else if (i > 60) {
      cout << i / 60 << " Minute remaining";
    } else {
      cout << i << " Seconds remaining";
    }
    system("clear");
    fflush(stdout); // Flash buffer to display numbers sequentially
    this_thread::sleep_for(chrono::seconds(1)); // Freeze for 1 second
  }
}

string getPresentDateTime() {
  // Declare a time_t variable to hold the current time.
  time_t tt;
  // Declare a pointer to a tm struct to hold the local time.
  struct tm *st;

  return asctime(st);
}
