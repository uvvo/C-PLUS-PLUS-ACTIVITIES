//4.Write a program using while looping statement that will reverse a user-defined number.
#include<stdio.h>
int main(){


	int reverse =0, num, reminder;
	
	printf("\nEnter a number for reverse:");
	scanf("%d",&num);
	
	while (num>0)
	{
		reminder=num%10;
		reverse=reverse*10+reminder;
		num=num/10;
	
		printf("\nreverse the number %d",reverse);
	}	
	return 0;
	
} 
