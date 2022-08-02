//Write a C program that use scanf AND printf function
#include<stdio.h>
 int main(){
 	
 	//Declaration of Variable
 	int a,b,product;
 	
 	//Input and Output
 	printf("Enter first number:");
 	scanf("%d", &a);
 	printf("Enter Second number:");
 	scanf("%d", &b);
 	
	 product = a / b;
	 
 	//Display Result
	 printf("%d / %d = %d", a, b,product);
 	     
 	return 0;
 }  
