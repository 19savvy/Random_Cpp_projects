#include <stdlib.h>
#include <stdio.h>
#include <iostream>
/**
 * main - function that returns the length in feet
 * @conv: constant for converting from inch to feet
 * @inches: the length in inches
 * @feet: the height in feet
 * @rem: the remainder which will be written in inches
 * return: Always 0 (success)
 */

using namespace std;

int main(void)
{
	const double conv = 0.08333333333333333;
	int inches;
	double feet, rem;

	cout << "Enter height in inches here_";
	cin >> inches;

	feet = inches * conv;
	rem = feet - int (feet);
	cout << "height is " << int (feet)\
		<< " feet and " << float (rem) << " inches";
	return (0);
}

