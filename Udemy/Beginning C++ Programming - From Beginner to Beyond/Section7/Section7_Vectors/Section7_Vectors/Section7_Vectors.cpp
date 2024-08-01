
#include <iostream>
#include <vector>;
using namespace std;

int main()
{

	/*vector <char> vowels;
	vector <int> test_scores;*/

	/*vector <char> vowels(5);
	vector <int> test_scores(10);

	vector <char> vowels{ 'a','e','i','o','u' };
	vector <int> test_scores{ 100,98,89,85,93 };
	vector <double> hi_temperatures(365, 80.0);*/

	/*vector <int> test_scores{ 100,98,89,85,93 };*/

	//Array Syntax
	/*cout << "First score at index 0: " << test_scores[0] << endl;
	cout << "Second score at index 1: " << test_scores[1] << endl;
	cout << "Third score at index 2: " << test_scores[2] << endl;
	cout << "Fourth score at index 3: " << test_scores[3] << endl;
	cout << "Fifth score at index 4: " << test_scores[4] << endl;*/

	//Vector Syntax
	/*cout << "First score at index 0: " << test_scores.at(0) << endl;
	cout << "Second score at index 1: " << test_scores.at(1) << endl;
	cout << "Third score at index 2: " << test_scores.at(2) << endl;
	cout << "Fourth score at index 3: " << test_scores.at(3) << endl;
	cout << "Fifth score at index 4: " << test_scores.at(4) << endl;*/
	
	//Input
	/*cin >> test_scores.at(0);
	cin >> test_scores.at(1);
	cin >> test_scores.at(2);
	cin >> test_scores.at(3);
	cin >> test_scores.at(4);*/

	//Assignment Statement
	/*test_scores.at(0) = 90;*/

	//Growing Vectors
	//vector <int> test_scores{ 100,95,99 }; // size is 3

	//test_scores.push_back(80); // 100, 95, 99, 80
	//test_scores.push_back(90); // 100, 95, 99, 80, 90

	vector <int> vector1;
	vector <int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	cout << "The values inside vector1 are: " << vector1.at(0) << " " << vector1.at(1) << "\nThe size of vector1 is: " << vector1.size() << endl;

	vector2.push_back(100);
	vector2.push_back(200);

	cout << "The values inside vector2 are: " << vector2.at(0) << " " << vector2.at(1) << "\nThe size of vector2 is: " << vector2.size() << endl;

	vector <vector <int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << "The values inside vector_2d are: " << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

	vector1.at(0) = 1000;
	
	cout << "The values inside vector_2d are: " << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

	cout << "The values inside vector1 are: " << vector1.at(0) << " " << vector1.at(1) << "\nThe size of vector1 is: " << vector1.size() << endl;

}
