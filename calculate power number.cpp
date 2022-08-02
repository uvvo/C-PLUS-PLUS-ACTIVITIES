/*Menor, Haarold O. BSCS1D*/
//Write a C program that calculate the power of the number.
#include <stdio.h>
int main(){
	  
	  //Declaration of variable
	 int num, power, result = 1, count = 1;
	 
	 //Input and Output
	 printf("\nEnter a number:");
	 scanf("%d", &num);
	 
	 printf("Enter the power of number");
	 scanf("%d",&power);
	  
	  while(count<=power){
	  	result = result * num;
	  	count++;
	  }
	
	  //Display result
	 printf("Result = %d", result);
	
	return 0;
	
}
