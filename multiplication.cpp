//Menor, Harold Mark O. BSCs1D
//Write a C program that generate multiplication table.
#include<stdio.h>

int main()
{
   //Declaration of variable
  int num, count =1;
 
  //display value
   
   printf("\nEnter a number:");
   scanf("%d" ,&num);	
  
  printf("\n Multiplication table for %d is: \n", num);
 
  while(count <= 10)
  {
  
 
  //Display result
  printf("%d x %d =%d\n", num,count, (num*count));
  count++;
}
	return 0;		
}
