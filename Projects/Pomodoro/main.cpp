// #include <chrono>
#include <fstream>
#include <iostream>
// #include <vector>

using namespace std;

void createFile();

int main() {
  cout << "Starting up Pomodoro Tracker\n";
  createFile();
}

void createFile() {
  // Create File Object
  ifstream MyFile;
  MyFile.open("Record.txt");
  // Check if the file exists
  if (!MyFile) {
    // Create File
    ofstream MyFile("Record.txt");
  } else {
    cout << "File Exists\n";
  }
}
