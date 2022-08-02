//. Write a program in C++ to find the first 10 natural numbers.
#include <stdio.h>
int main()
{
    int  num, sum = 0; //Variable

    printf("The first 10 natural number is :\n"); //Display the first 10 natural number.
    for (num = 1; num <= 10; num++)
    {
        sum = sum + num; // add sum value num
        printf("%d ",num);    //print tha value of N
    }
    printf("\nThe Sum is : %d\n", sum); // print the the sum
    
	return 0;
}
