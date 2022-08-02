//C program that Swap two Integer. 
#include<stdio.h>

   int main()
   {
	//Declaration Of variable
	int a,b,c;
	
	//Dispaly value, Input and Output
	printf("Swapping 2 number");
	printf("\n Enter first number:");
	scanf("%d",&a);
	printf("\nEnter second number:");
    scanf("%d",&b);
    
     printf("\n The value Before swapping:");
     printf("\n A: %d",a);
     printf("\n B: %d",b);
     
    //Swapping two variables
	c=a;
    a=b;
    b=c;
    
     printf("\n The value after swapping:");
     printf("\n A: %d",a);
     printf("\n B: %d",b);
     
     return 0;
}
