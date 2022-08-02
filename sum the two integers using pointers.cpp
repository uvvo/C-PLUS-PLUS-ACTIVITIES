
//Create a program that add two numbers using pointers.
#include<stdio.h>
 int main(){
 	
 	//Declaration of Variable
 	int n1, n2,  *a, *b, sum;
 	
 	//Input and Output
 	printf("Enter first number:");
 	scanf("%d", &n1);
 	printf("Enter Second number:");
 	scanf("%d", &n2);
 	
 	a = &n1;
 	b = &n2;
	sum= *a + *b;
	 
 	//Display Result
	 printf("Sum of the numbers = %d \n", sum);
 	     
 	return 0;
 }  
