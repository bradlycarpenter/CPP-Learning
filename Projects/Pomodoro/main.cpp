#include <chrono>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>
#include <thread>

using std::cin;
using std::cout;
using std::size_t;
using std::string;
using std::time_t;

void clearScreen();
void timer(size_t seconds);

int main() {
  clearScreen();

  auto current_time = std::chrono::system_clock::now();
  time_t time_now = std::chrono::system_clock::to_time_t(current_time);
  cout << ctime(&time_now);

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
    std::this_thread::sleep_for(std::chrono::seconds(1));
    clearScreen();

    cout << "Are you ready to start your break? ('y' = Yes)\n";
    cin >> working;
    clearScreen();

    cout << "Break Time!\n";
    timer(break_seconds);

    std::this_thread::sleep_for(std::chrono::seconds(1));
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
  const int PROGRESS_BAR_LENGTH{60};

  for (size_t i{seconds}; i > 0; --i) {
    if (i >= 60) {
      cout << i / 60 << " Minute" << (i > 119 ? "s" : "") << " remaining\n";
    } else {
      cout << i << " Second" << (i > 1 ? "s" : "") << " remaining\n";
    }

    double progress_percent = static_cast<double>(seconds - i) / seconds;
    size_t plus_char_amount = round(PROGRESS_BAR_LENGTH * progress_percent);
    size_t minus_char_amount = PROGRESS_BAR_LENGTH - plus_char_amount;
    cout << "[" << string(plus_char_amount, '+')
         << string(minus_char_amount, '-') << "]\n";

    std::this_thread::sleep_for(std::chrono::seconds(1));
    cout << "\x1B[1A\x1B[0K\x1B[1A\x1B[0K";
  }
}
