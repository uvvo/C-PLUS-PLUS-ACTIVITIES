// Write C++ statements that declare the following variables: num1, num2, num3, and average of type int.
#include <iostream>

using namespace std;

int num1 = 150; //variable declaration
int num2 = 30;
int num3 = -25;
int average;

int main ()
{
  
    cout << "Enter the first nummber of your choice " << endl;
    cin >> num1;

    cout << "Now enter another number of your choice" << endl;
    cin >> num2;

    cout << "And finally enter the last number of your choice" << endl;
    cin >> num3;

    //Calculate 3 numbers 
    average = num1 + num2 - num3;

    cout << "Your lucky number is " << average << endl; // display the average

    //return statement
    return 0;
}
