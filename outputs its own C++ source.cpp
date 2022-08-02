// Write a program which outputs its own C++ source file to the screen
#include <iostream>
#include <fstream>
using namespace std;
	
int main() 
{
	char character; //declare variable 
	ifstream in_stream;
	
	in_stream.open("outputs its own C++ source.cpp"); // display the outputs its own C++ source
	
	in_stream.get(character);
	
	for ( ; ! in_stream.fail() ; ) /* alternative: while (! in_stream.eof()) */
	{
		cout << character;
		in_stream.get(character);
	}
	
	in_stream.close();
							
	return 0;
}
