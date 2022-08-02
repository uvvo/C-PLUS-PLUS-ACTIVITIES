//WAP a C++ Program to Find the Length of a String.
#include <stdio.h>
#include <string.h>
int main()
{
  char a[100];//Varianle
  int length;

  printf("Enter a string to calculate its length\n"); //Ask user to Enter a string
  gets(a);

  length = strlen(a);

  printf("Length of the string = %d\n", length);// Display Length of the string

  return 0;
}
