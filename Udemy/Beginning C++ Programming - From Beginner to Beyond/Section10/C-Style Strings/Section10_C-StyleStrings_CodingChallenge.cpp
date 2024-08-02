// Section 10
// C-Style Strings

#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char first_name[]{"Bjarne"};
  char last_name[]{"Stroustrup"};
  char whole_name[50]{"\0"};

  int first_name_length = strlen(first_name);
  int last_name_length = strlen(last_name);

  strcat(whole_name, first_name);
  strcat(whole_name, last_name);

  int whole_name_length = strlen(whole_name);

  cout << "The length of the first name, " << first_name << ", is "
       << first_name_length << " letters long and the length of the last name, "
       << last_name << ", is " << last_name_length
       << " letters long. This means that the length of the whole name must be "
       << whole_name_length << " letters long.";
}