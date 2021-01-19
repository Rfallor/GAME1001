// Lab Exercise 1 assignment
#include <iostream>
using namespace std; //Use the standard namespace

//Main entry point to the application
int main()
{
	cout << "The size of a bool:" << sizeof(bool) << "bytes.\n"; // Shows how much bytes is allocated for a bool function, can be used for all other functions as well. As long as sizeof is included
	cout << "The size of a char:" << sizeof(char) << "bytes.\n"; 
	cout << "The size of a short integer:" << sizeof(short) << "bytes.\n";
	cout << "The size of a integer:" << sizeof(int) << "bytes.\n";
	cout << "The size of a float:" << sizeof(float) << "bytes.\n";
	cout << "The size of a long integer:" << sizeof(long) << "bytes.\n";
	cout << "The size of a double:" << sizeof(double) << "bytes.\n";
	cout << "The size of a long long integer:" << sizeof(long long) << "bytes.\n";
	cout << "The size of a string:" <<sizeof(string) << "bytes.\n";
	

	//Arithmetic operations
	
	double first = 5.75, //Need to include double, so first functions can be utilized. Otherwise an error occurs
		second = 100.57,
		third = 8.891,
		fourth = 4.44;

	cout << "Addition:" << first + fourth << endl;
	cout << "Subtraction:" << second - third << endl;
	cout << "Multiplication:" << second * fourth << endl;
	cout << "Division:" << second / first << endl;
	cout << "Modulus:" << (int)fourth % (int)first << endl;
	
	


	return 0;
}