#include <chrono>
#include <iostream>
#include <thread>

void clearScreen();
void timer(size_t seconds);

int main() {
  clearScreen();

  std::cout << "--------------------------------------------------------\n"
               "-              Welcome to the Pomodoro Timer           -\n"
               "--------------------------------------------------------\n";

  std::cout
      << "\nHow long would you like your working splits to be? (Minutes): ";
  size_t minutes;
  std::cin >> minutes;
  size_t split_seconds = minutes * 60;
  std::cout << "\nHow long would you like your breaks to be? (Minutes): ";
  std::cin >> minutes;
  size_t break_seconds = minutes * 60;

  char working{'Y'};
  clearScreen();
  do {
    std::cout << "Working..\n";
    timer(split_seconds);

    std::cout << "Work Split is Over\n";
    std::this_thread::sleep_for(std::chrono::seconds(1)); // Freeze for 1 second
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

void timer(size_t seconds) {
  double progress_percent{1};
  double progress_percent_reverse{0.01};
  const int PROGRESS_BAR_LENGTH{60};

  for (size_t i{seconds}; i > 0; --i) {
    if (i > 119) {
      std::cout << i / 60 << " Minutes remaining\n";
    } else if (i > 59) {
      std::cout << i / 60 << " Minute remaining\n";
    } else {
      std::cout << i << " Seconds remaining\n";
    }
    std::cout << "[";

    for (size_t j{0}; j < PROGRESS_BAR_LENGTH * progress_percent_reverse; ++j) {
      std::cout << "+";
    }

    for (size_t j{0}; j < PROGRESS_BAR_LENGTH * progress_percent; ++j) {
      std::cout << "-";
    }

    progress_percent = static_cast<double>(i) / static_cast<double>(seconds);
    progress_percent_reverse = 1 - progress_percent;

    std::cout << "]";

    std::cout << "\n";

    std::this_thread::sleep_for(
        std::chrono::milliseconds(50)); // Freeze for 1 second

    std::cout << "\x1B[1A"; // Move cursor up one line
    std::cout << "\x1B[0K"; // Delete from cursor till end of line
    std::cout << "\x1B[1A"; // Move cursor up one line
    std::cout << "\x1B[0K"; // Delete from cursor till end of line
  }
}
