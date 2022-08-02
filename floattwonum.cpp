//2.Write a program to determine the sum of two floating-point variables.
#include <stdio.h>
int main(){
	
	float num1, num2, sum;
	printf("Enter a two floating two number");
	scanf("%f%f",&num1,&num2);
	
	sum = num1 + num2;
	
	printf("Sum of two number = %f",sum);
	return 0;
	
}
