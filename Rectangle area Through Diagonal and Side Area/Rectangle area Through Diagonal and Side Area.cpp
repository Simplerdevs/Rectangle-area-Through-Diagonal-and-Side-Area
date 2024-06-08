
	/* Program to calculate Rectangle area Through Diagonal and Side Area */

#include <iostream>
#include <cmath> // For sqrt function
using namespace std;


int main()

{
	
	double d, a;
	cout << "Enter the length of one side : " << endl;
	cin >> a;

	cout << "Enter the length of the diagonal : " << endl;
	cin >> d;


	double Area = a * sqrt(d * d - a * a);
	
	cout << "The area of the rectangle is : " << Area << endl;

	return 0;

	// created by @ilyes_Trabelsi
}