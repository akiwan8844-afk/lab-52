// lab-52.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//add two numbers using pointers.
#include <iostream>
using namespace std;
void add(int* a, int* b, int* sum)
{
	*sum = *a + *b;
}


int main()
{
	//declare variables
	int num1, num2, result;
	//get user input
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	//call add function
	add(&num1, &num2, &result);
	cout << "The sum is: " << result << endl;
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
