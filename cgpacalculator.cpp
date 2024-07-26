// ChessGameC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


int main()
{
	int courses{};
	int counter{};
	int mark{};
	float average{};
	vector<int> marks;
	cout << "Enter the number of courses you took: ";
	cin >> courses;

	cout << "You entered " << courses << " courses \n";

	for (int i{ 1 }; i <= courses; ++i) {
		cout << "Please enter the grade for course " << i <<" out of 100: ";
		cin >> mark;
		if (mark > 100) {
			cout << "Please enter a number between 0 and 100: ";
			cin >> mark;
		}
		if (mark < 0) {
			cout << "Please enter a number between 0 and 100: ";
			cin >> mark;
		}
		marks.insert(marks.begin(), mark);
	}
	
	for (auto i = marks.begin(); i < marks.end(); i++) {
		cout << *i << "\n";
	}
	
	average = accumulate(marks.begin(), marks.end(), 0) / courses;

	cout << "Your CGPA is: " << average;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
