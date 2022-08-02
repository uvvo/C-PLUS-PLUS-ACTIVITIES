/*Menor, Harold 0. BSCS1D*/ 
// Write a C program to print pyramids and patterns. 
#include <stdio.h>
int main (){
	
	 //Declaration of variable
	int totalrowno, row, space, symbol;
	 
	 //Input and Output
	 printf("\nEnter the Number of rows:");
	 scanf("%d", &totalrowno);
	
	 
	for (row = 1; row <= totalrowno; row++ )
	{
	for (space= 1; space <= (totalrowno-row); space++)	
	      printf(" ");
	
	for (symbol =1; symbol <=(2*row)-1; symbol++)
	      printf(".");
          printf("\n");
	}
	
	return 0;
}
