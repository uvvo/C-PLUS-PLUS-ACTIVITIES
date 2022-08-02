//2. Write a program in C to display the multiplication table of a given integer.
#include<stdio.h>
int main(){
     
	  //Declaration of variable
	int num,count=1;

  	  //INPUT and OUTPUT
	printf("\nEnter a number:");
	scanf("%d",&num);
	printf("Multiplication table for %d is: \n\n", num);
	
	// condition
	while(count <= 10)
	{
		printf("%d x %d = %d\n", num, count, (num*count));
		count++;//increment
	}

	return 0;
}

