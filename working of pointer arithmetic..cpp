//WAP which illustrates the working of pointer arithmetic. 
#include <iostream>
using namespace std;
const int MAX = 5;

int main () {
   int  var[MAX] = {10, 20, 20, 40, 50 }; //Declare variable
   int  *ptr;

   //  array address in pointer.
   ptr = var;
   
   for (int i = 0; i < MAX; i++) {
      cout << "Address of var[" << i << "] = "; // print the address of var
      cout << ptr << endl;

      cout << "Value of var[" << i << "] = ";// print the value of var
      cout << *ptr << endl;

      // point to the next location
      ptr++;
   }
   
   return 0;
}
