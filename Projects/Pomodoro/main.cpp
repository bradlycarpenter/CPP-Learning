#include <chrono>
#include <iostream>
#include <string>
#include <thread>

using namespace std;

void playTimer(size_t seconds);
string greetingMessage();
size_t askSeconds();

#if defined(__linux__)
const string CLEAR_COMMAND{"clear"};
#elif (_WIN32)
cons tstring CLEAR_COMMAND{"cls"};
#endif

int main() {
  cout << greetingMessage();
  playTimer(askSeconds());
}

void playTimer(size_t seconds) {
  system(CLEAR_COMMAND.c_str());

  for (size_t i{seconds}; i > 0; --i) {
    if (i > 119) {
      cout << i / 60 << " Minutes remaining\n";
    } else if (i > 59) {
      cout << i / 60 << " Minute remaining\n";
    } else {
      cout << i << " Seconds remaining\n";
    }

    this_thread::sleep_for(chrono::seconds(1)); // Freeze for 1 second
    system(CLEAR_COMMAND.c_str());              // Clear Terminal
  }
}

string greetingMessage() {
  system(CLEAR_COMMAND.c_str());
  return "--------------------------------------------------------------\n"
         "-                 Welcome to the Pomodoro Timer              -\n"
         "--------------------------------------------------------------\n";
}

size_t askSeconds() {
  size_t minutes;
  cout << "\nHow long would you like your split to be? (Minutes): ";
  cin >> minutes;
  return minutes * 60;
}
