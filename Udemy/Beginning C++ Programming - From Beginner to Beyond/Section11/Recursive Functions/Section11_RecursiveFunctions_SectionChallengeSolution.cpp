#include <iostream>
#include <vector>
using namespace std;

// Prototypes for displaying the menu and getting use selection
void display_menu();
char get_selection();

// Menu handling function prototypes
void handle_display(const vector <int> &v);
void handle_add(vector<int> &v);
void handle_mean(const vector <int> &v);
void handle_smallest(const vector <int> &v);
void handle_largest(const vector <int> &v);
void handle_find(const vector <int> &v);
void handle_quit();
void handle_unknown();

// Prototypes for functons that work with the list.
// To display it calculate mean,etc
void display_list(const vector<int> &v);
double calculate_mean(const vector<int> &v);
int get_smallest(const vector<int> &v);
int get_largest(const vector<int> &v);
bool find(const vector<int> &v, int target);

int main(){
	vector<int> numbers;
	char selection{};

	do {
		display_menu();
		selection = get_selection();
		switch(selection){
			case 'P':
				handle_display(numbers);
				break;
			case 'A':
				handle_add(numbers);
				break;
			case 'M':
				handle_mean(numbers);
				break;
			case 'S':
				handle_smallest(numbers);
				break;
			case 'L':
				handle_largest(numbers);
				break;
			case 'F':
				handle_find(numbers);
				break;
			case 'Q':
				handle_quit();
				break;
			default:
				handle_unknown();
		}
	} while (selection != 'Q');
	cout << endl;
	return 0;
}

/**************************************************
This function displays the menu to the console
**************************************************/

void display_menu(){
	cout << "\nP - Print numbers" << endl;
	cout << "A - Add a number" << endl;
	cout << "M - Display mean of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "L - Display the largest number" << endl;
	cout << "F - Find Number" << endl;
	cout << "Q - Quit" << endl;
	cout << "\nEnter your choice: ";
}

/**************************************************
This function simply reads a character selecdtion from
stdin and returns it as upper case.
**************************************************/

char get_selection(){
	char selection {};
	cin >> selection;
	return toupper(selection);
}

/**************************************************
This function is called when the user selects the 
display list option from the main menu.
Note that the parameter is a const reference parameter.
This function should NOT modify the list of numbers.
**************************************************/

void handle_display(const vector <int> &v){
	if (v.size() == 0)
		cout << "[] - the list is empty" << endl;
	else
		display_list(v);
}

/*************************************************
This function is called when the user selects add a
to the list from the main menu.
Note that the vector parameter must NOT be const
since it will be changing the list of numbers.
**************************************************/

void handle_add(vector<int> &v){
	int num_to_add{};
	cout << "Enter an integer to add to the list: ";
	cin >> num_to_add;
	v.push_back(num_to_add);
	cout << num_to_add << " added" << endl;
}

/**************************************************
This function is called when the user selects calculate
the mean from the main menu.
Note that the parameter is a const reference parameter.
This function should NOT modify the list of numbers.
**************************************************/

void handle_mean(const vector <int> &v){
	if (v.size() == 0)
		cout << "Unable to calculate the mean - list is empty"
			<< endl;
	else
		cout << "The mean is " << calculate_mean(v) << endl;
}

/**************************************************
This function is called when the user selects the 
display smallest option from the menu.
**************************************************/

void handle_smallest(const vector <int> &v){
	if (v.size() == 0)
		cout << "Unable to display smallest - list is empty"
			<< endl;
	else
		cout << "The smallest number is " << get_smallest(v)
			<< endl;
}

/**************************************************
This function is called when the user selects the 
display largest option from the menu.
**************************************************/

void handle_largest(const vector <int> &v){
	if (v.size() == 0)
		cout << "Unable to display largest - list is empty"
			<< endl;
	else
		cout << "The largest number is " << get_largest(v)
			<< endl;
}

/**************************************************
This function is called when the user selects the find
option from the main menu.
**************************************************/

void handle_find(const vector <int> &v){
	int target{};
	cout << "Enter the number to find: ";
	cin >> target;
	if (find(v,target))
		cout << target << " was found";
	else
		cout << target << " was not found"
			<< endl;
}

/**************************************************
This function is called when the user selects the quit
option from the main menu.
**************************************************/

void handle_quit(){
	cout << "Goodbye" << endl;
}

/**************************************************
This function is called whenever the user enters a selection and we don't know how to handle it.
**************************************************/

void handle_unknown(){
	cout << "Unknown selection - try again" << endl;
}

/**************************************************
This function expects a list of integers as a vector 
and displays all the integers in the list in square brackets.
Note that the parameter is a const reference parameter.
This function shuld NOT modify the list of numbers.
**************************************************/

void display_list(const vector<int> &v){
	cout << "[ ";
	for (auto num:v)
		cout << num << " ";
	cout << "]" << endl;
}

/**************************************************
This function expects a list of integers as a vector
and returns the calculated mean.
Note that the parameter is a const reference parameter.
This function should NOT modify the list of numbers.
Note: The list must not be empty.
**************************************************/

double calculate_mean(const vector<int> &v){
	int total{};
	for (auto num:v)
		total += num;
	return static_cast<double>(total)/v.size();
}

/**************************************************
This function expects a list of integers as a vector
and returns the smallest number.
Note that the parameter is a const reference parameter.
This function should NOT modify the list of numbers.
Note: The list must not be empty.
**************************************************/

int get_smallest(const vector<int> &v){
	int smallest = v.at(0);
	for (auto num:v)
		if (smallest > num)
			smallest = num;
	return smallest;
}

/**************************************************
This function expects a list of integers as a vector
and returns the largest number.
Note that the parameter is a const reference parameter.
This function should NOT modify the list of numbers.
Note: The list must not be empty.
**************************************************/

int get_largest(const vector<int> &v){
	int largest = v.at(0);
	for (auto num:v)
		if (largest < num)
			largest = num;
	return largest;
}

/**************************************************
This function expects a list of integers as a vector
and returns true or false depending on wheter or not
the second integer passed in was found in the vector.
Note that the parameter is a const reference parameter.
This function should NOT modify the list of numbers.
Note: The list must not be empty.
**************************************************/

bool find(const vector<int> &v, int target){
	for (auto num:v)
		if (num == target)
			return true;
	return false;
}