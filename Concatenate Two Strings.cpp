//WAP a C++ Program to Concatenate Two Strings.
#include <iostream>
using namespace std;

int main()
{
    string s1, s2, result;//Variable

    cout << "Enter string s1: ";//Ask user to  Eneter String One and Two
    getline (cin, s1);

    cout << "Enter string s2: ";
    getline (cin, s2);

    result = s1 + s2;//Add result one and two

    cout << "Resultant String = "<< result;//Print Result

    return 0;
}
