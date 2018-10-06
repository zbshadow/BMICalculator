/*
Program Name BMI Calculator
Author: Brice Bayless
Last Updated: 10/5/2018
Purpose: To take inputs and calculate the Body mass index of a person, then output the results.
*/

//BMI = weight * 703/height^2
//weight is pounds and height is inches
//optimal BMI is between 18.5 and 25
//less than range is underweight
//over the range is overweight

#include <iostream>
#include <cmath>
using namespace std;
int userWeight;
int userHeight;
double bmi;


int main () {
	cout << "Welcome" << endl;
	cout << "Please enter your weight in pounds: " << endl;
	cin >> userWeight;
	cout << "You entered " << userWeight << endl << endl;
	cout << "Please enter your height in inches: " << endl;
	cout << "(There are 12 inches in a foot)" << endl;
	cin >> userHeight;

	//doing some math
	bmi = userWeight * 703 / pow(userHeight, 2);

	cout << "Your BMI is " << bmi << endl;
	



	return 0;
}