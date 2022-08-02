//Write a program that prompts the user to input a sequence of characters an outputs the number of vowels.
#include <iostream>
#include <string>
using namespace std;

//functions declared
    bool isVowel(char ch);

    int main ()
{
       string letters;
       int num = 0;
       int len;

       cout<<"Enter a sequence of characters: ";
       getline(cin, letters);

       len = letters.length();

     for (int i = 0; i < len; i++)
     {
      if (isVowel(letters[i]))
      num++;
}

        if (num == 0)
        cout << "There were 0 vowels.\n";
        else if (num == 1)
        cout << "There was 1 vowel.\n";
        else
        cout << "There were " << num << " vowels.\n";

     //this keeps the prompt console from closing
     system ("pause");

     // this adds butter to the potatoes
     return 0;

}   // closing main function

// function to identify vowels
bool isVowel(char ch)
{
// make it lower case so we don't have to compare
// to both 'a' and 'A', 'e' and 'E', etc.
char ch2 = tolower(ch);

if (ch2 == 'a' || ch2 == 'e' || ch2 == 'i' || ch2 == 'o' || ch2 == 'u')
return true;
else
return false;
}


