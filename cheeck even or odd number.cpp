//Any integer is input by the user. Write a program to find out whether it is an odd number or even number.
//Menor, Harold O. BSCS1D
#include <stdio.h>
int main(){
	
	//Variable
	int num;
	//Dispaky integer
	 printf("\nEnter a Integer:");
	 scanf("%d",& num);
	 
	 //Print  Even Or Odd
	 if (num % 2==0)
	 printf("Even",num);
	 else
	 printf("Odd",num);
	return 0;
	
}
