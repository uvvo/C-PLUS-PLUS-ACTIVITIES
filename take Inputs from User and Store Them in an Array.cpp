//WAP to take Inputs from User and Store Them in an Array.
#include <iostream>
using namespace std;

int main() {
    int numbers[10]; //Variable

    cout << "Enter 10 numbers: " << endl; // ask to user to enter 10 numbers

    //   take Inputs from User and Store Them in an Array
    for (int i = 0; i < 10; ++i) {
        cin >> numbers[i];
    }

    cout << "The numbers are: "; //Display the numbers

    //  print array elements
    for (int n = 0; n < 10; ++n) {
        cout << numbers[n] << "  ";
    }

    return 0;
}
