//5.Write a program using do-while looping statement that will print the factors of a user-defined number. 
#include<stdio.h>
int main(){
	 
	int num, count = 1;
	 printf("Enter a number:\n");
	 scanf("%d",num);	
	 
	 printf("The Factors of %d are: \n", num);
	 
	 while (count <= num)
	 {
	  if   (num % count == 0)
	 	{
	 		printf("%d\n",count);
	 			
		 }	
		count++;
	 }
	
	return 0;
}
