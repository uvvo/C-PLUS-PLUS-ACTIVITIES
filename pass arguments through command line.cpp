//Write a program to pass arguments through command line and print them.
//Menor, Harold O. BSCS1D
#include<stdio.h>
   
    //Variable
   int main(int argc, char** argv)
{
	//Display Input and Output
printf("Welcome to Second Semester!!\n\n");

int i;
printf("The number of arguments are: %d\n",argc);
printf("The arguments are:");

for ( i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return 0;
}
