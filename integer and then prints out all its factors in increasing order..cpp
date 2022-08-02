#include<iostream>
using namespace std;
int main() {
       int number=0; // declare variable 
       cout<<"\n Enter a number:"; 
       cin >> number;
       while (number > 1) {
              if (number % 2 == 0) {
                     number = number / 2;
                     cout << 2<<endl;
              }
              else if (number % 3 == 0) {
                     number = number / 3;
                     cout << 3 << endl;
              }

              else if (number % 4 == 0) {
                     number = number / 4;
                     cout << 4 << endl;
              }

              else if (number % 5 == 0) {
                     number = number / 5;
                     cout << 5 << endl;
              }
              else if (number % 6 == 0) {
                     number = number / 6;
                     cout << 6 << endl;
              }

              else if (number % 7 == 0) {
                     number = number / 7;
                     cout << 7 << endl;
              }
              else if (number % 8 == 0) {
                     number = number / 8;
                     cout << 8 << endl;
              }

              else if (number % 9 == 0) {
                     number = number / 9;
                     cout << 9 << endl;
              }
              else {
                     cout << number << endl;
                     number = number / number;
              }
       }

}

