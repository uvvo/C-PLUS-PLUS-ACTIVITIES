/*Menor, Haarold O. BSCS1D*/
//Write a C program that generate multiplication table.
#include<stdio.h>
int main(){
     
	  //Declaration of variable
	int num,count=1;

  	  //INPUT and OUTPUT
	printf("\nEnter a number:");
	scanf("%d",&num);
	printf("Multiplication table for %d is: \n\n", num);
	
	while(count <= 10)
	{
		printf("%d x %d = %d\n", num, count, (num*count));
		count++;
	}

	return 0;
}

