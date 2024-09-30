#include <chrono>
#include <cmath>
#include <iostream>
#include <string>
#include <thread>

void clearScreen();
void timer(std::size_t seconds);

int main() {
  clearScreen();

  std::cout << "--------------------------------------------------------\n"
               "-              Welcome to the Pomodoro Timer           -\n"
               "--------------------------------------------------------\n";

  std::cout
      << "\nHow long would you like your working splits to be? (Minutes): ";
  std::size_t minutes;
  std::cin >> minutes;
  std::size_t split_seconds = minutes * 60;
  std::cout << "\nHow long would you like your breaks to be? (Minutes): ";
  std::cin >> minutes;
  std::size_t break_seconds = minutes * 60;

  char working{'Y'};
  clearScreen();
  do {
    std::cout << "Working..\n";
    timer(split_seconds);

    std::cout << "Work Split is Over\n";
    std::this_thread::sleep_for(std::chrono::seconds(1)); // Freeze for 1 second
    clearScreen();

    std::cout << "Are you ready to start your break? ('y' = Yes)\n";
    std::cin >> working;
    clearScreen();

    std::cout << "Break Time!\n";
    timer(break_seconds);

    std::this_thread::sleep_for(std::chrono::seconds(1)); // Freeze for 1 second
    clearScreen();

    std::cout << "Would you like to continue working? ('y' = Yes, 'n' = No)\n";
    std::cin >> working;
    clearScreen();
  } while (toupper(working) == 'Y');

  std::cout << "See you later";
}

void clearScreen() {
#if defined(_WIN32)
  system("cls");
#else
  system("clear");
#endif
}

void timer(std::size_t seconds) {
  const int PROGRESS_BAR_LENGTH{60};

  for (std::size_t i{seconds}; i > 0; --i) {
    if (i >= 60) {
      std::cout << i / 60 << " Minute" << (i > 119 ? "s" : "")
                << " remaining\n";
    } else {
      std::cout << i << " Second" << (i > 1 ? "s" : "") << " remaining\n";
    }

    double progress_percent = static_cast<double>(seconds - i) / seconds;
    std::size_t plus_char_amount = round(PROGRESS_BAR_LENGTH * progress_percent);
    std::size_t minus_char_amount = PROGRESS_BAR_LENGTH - plus_char_amount;
    std::cout << "[" << std::string(plus_char_amount, '+')
              << std::string(minus_char_amount, '-') << "]\n";

    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "\x1B[1A\x1B[0K\x1B[1A\x1B[0K";
  }
}
