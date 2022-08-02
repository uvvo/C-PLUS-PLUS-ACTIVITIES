//Write a language program in C++ which accepts the user's first and last name and print them in reverse order with a space between them. 
# include <iostream>
# include <string>
using namespace std;
int main()
{
char firstname[20], lastname [20];// Variable
      //Display the Print the name in reverse where last name comes first
      cout << "\n Print them in reverse order with a space between them. :\n";
      cout << "-----------------------------------------------------------\n";
      cout << "Enter First Name: "; // Asks to User Enter a First Name
      cin >> firstname;
      cout << "Enter Last Name: ";  // Asks to User Enter a Last Name
      cin >> lastname;

      cout << " Name in reverse is: "<< lastname << " "<< firstname <<endl; //Reverse Name
	  cout << endl;
return 0;
}
