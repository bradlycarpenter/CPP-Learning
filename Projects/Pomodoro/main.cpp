#include <chrono>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<string> file_contents;
  cout << "Starting up Pomodoro Tracker\n";
  ifstream MyFile;
  MyFile.open("Record.txt");
  if (!MyFile) {
    ofstream MyFile("Record.txt");
  } else {
    cout << "MyFile Exists\n";
  }
}
