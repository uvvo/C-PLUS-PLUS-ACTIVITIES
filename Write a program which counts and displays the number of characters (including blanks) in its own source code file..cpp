//Write a program which counts and displays the number of characters (including blanks) in its own source code file.
#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	char character; //Declare variable 
	char previous_character;
	int count = 0;
	ifstream in_stream;
	
	in_stream.open("displays the number of characters (including blanks).cpp"); // display the  characters (including blanks)
	in_stream.get(character);
	for ( ; ! in_stream.fail() ; ) /* alternative: 'while (! in_stream.eof())' */
	{
		count++;
		previous_character = character;
		in_stream.get(character);	
	}
	in_stream.close();
	
	cout << "The total number of characters in 'displays the number of characters (including blanks).cpp', "; // Count the numcer of displays the number of characters (including blanks)
	cout << "is " << count << ".\n";
	if (count > 1)
		cout << "The last character is a '" << previous_character << "'.\n";

	return 0;
}
