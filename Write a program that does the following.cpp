//Write a program that does the following:
//a. Prompts the user to input five decimal numbers.
//b. Prints the five decimal numbers.
//c. Converts each decimal number to the nearest integer.
//d. Adds the five integers.
//e. Prints the sum and average of the five integers.

#include <iostream>
using namespace std;
int main(){
	double a, b, c, d, e; //DEclare variable

	cout<<"Ente  decimal a  number: ";
	cin >> a >> b >> c >> d >> e;

	//b
	cout << a << " " << b << " "
		<< c << " " << d << " "
		<< e << endl;

	//c
	int v = a + 0.5;
	int w = b + 0.5;
	int x = c + 0.5;
	int y = d + 0.5;
	int z = e + 0.5;

	
	//d
	int sum = v + w + x + y + z;
	cout << "Summation is: " << sum << endl;

	//e
	cout << "Average is: " << sum / 5.0 << endl;
	return 0;
}
