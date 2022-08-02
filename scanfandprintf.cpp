//Write a C program that displays the sum of the two integers
#include<stdio.h>
 int main(){
 	
 	//Declaration of Variable
 	int number1;
 	int number2;
 	int sum;
 	
 	//Input and Output
 	printf("Enter first number:");
 	scanf("%d", &number1);
 	printf("Enter Second number:");
 	scanf("%d", &number2);
 	
	 sum = number1 + number2;
	 
 	//Display Result
	 printf("%d + %d = %d", number1, number2,sum);
 	     
 	return 0;
 }  
