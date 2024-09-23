#include <chrono>
#include <iostream>
#include <thread>

using namespace std;

void clearScreen();
void timer(size_t seconds);

int main() {
  clearScreen();

  cout << "--------------------------------------------------------\n"
          "-              Welcome to the Pomodoro Timer           -\n"
          "--------------------------------------------------------\n";

  cout << "\nHow long would you like your working splits to be? (Minutes): ";
  size_t minutes;
  cin >> minutes;
  size_t split_seconds = minutes * 60;
  cout << "\nHow long would you like your breaks to be? (Minutes): ";
  cin >> minutes;
  size_t break_seconds = minutes * 60;

  char working{'Y'};
  clearScreen();
  do {
    cout << "Working..\n";
    timer(split_seconds);

    cout << "Work Split is Over\n";
    this_thread::sleep_for(chrono::seconds(1)); // Freeze for 1 second
    clearScreen();

    cout << "Break Time!\n";
    timer(break_seconds);

    this_thread::sleep_for(chrono::seconds(1)); // Freeze for 1 second
    clearScreen();

    cout << "Would you like to continue working? ('y' = Yes, 'n' = No)\n";
    cin >> working;
    clearScreen();
  } while (toupper(working) == 'Y');

  cout << "See you later";
}

void clearScreen() {
#if defined(_WIN32)
  system("cls");
#else
  system("clear");
#endif
}

void timer(size_t seconds) {
  for (size_t i{seconds}; i > 0; --i) {
    if (i > 119) {
      cout << i / 60 << " Minutes remaining\n";
    } else if (i > 59) {
      cout << i / 60 << " Minute remaining\n";
    } else {
      cout << i << " Seconds remaining\n";
    }

    cout << "\n";

    this_thread::sleep_for(chrono::milliseconds(50)); // Freeze for 1 second

    cout << "\x1B[1A"; // Move cursor up one line
    cout << "\x1B[0K"; // Delete from cursor till end of line
    cout << "\x1B[1A"; // Move cursor up one line
    cout << "\x1B[0K"; // Delete from cursor till end of line
  }
}
