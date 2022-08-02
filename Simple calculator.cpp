//Menor, Harold O. BSCS1D
//Create a program that calculate simple operators like
//addition, subtraction, multiplication and division.
#include<stdio.h>
int main (){
	int num1, num2;	
    char Operators;
	
	printf("Choose the Operator\n");
	printf("Press a for Addition\n");
	printf("Press b for Subtraction\n");
	printf("Press c for Multiplication\n");
	printf("press d for Division\n");
	scanf("%c,",& Operators);
	
	printf("Enter a two Number:\n");
	scanf("%d %d",&num1 ,&num2);
	
	switch(Operators)
	{
		case 'a': printf("%d + %d = %d\n",num1,num2, (num1+num2));
		   break; 
		   
		case 'b': printf("%d - %d = %d\n",num1,num2, (num1 - num2));
		   break;
		   
		case 'c': printf("%d * %d = %d\n",num1,num2, (num1*num2));
		   break;
		   
			
		case 'd': printf("%d / %d = %d\n",num1,num2, (num1/num2));
		         
		     
		default: printf("You enter wrong Operator\n");
		   break;
	}
	
	return 0;	
}
