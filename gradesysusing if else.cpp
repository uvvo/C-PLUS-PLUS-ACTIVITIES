//Menor, Harold O. BSCS1D
//Write a C program that use if statement function. 
#include <stdio.h>
int main(){

   
	int Math, Science, English, Comprog, Filipino, ave;

	printf("\nEnter a Grade in Five Subject:");
	printf("\nMath Subject:");
	scanf("\n%d", &Math);
	printf("\nScience Subject:");
	scanf("\n%d", &Science);
	printf("\nEglish Subject:");
	scanf("\n%d", &English);
	printf("\nComputer Programming Subject:");
	scanf("\n%d", &Comprog);
	printf("\nFIlifino Subject:");
	scanf("\n%d", &Filipino);
	
	ave = (Math + Science + English + Comprog + Filipino) /5;
	printf("\nThe average is %d ", ave );
	
	//condition
	if (ave>=90 && ave<=100)
   	 {
		printf("\nYour grade is Excellent\n");	
	 }
     else if (ave>=80 && ave<=90)
     {
     	printf("\nYour grade is Very good\n");	
	 }
	 else if (ave>=70 && ave<=80)
	 {
	 	printf("\nYour grade is Good\n");
	 }
	 else if (ave>=60 && ave<=70)
     {
	    printf("\nYour grade is Poor\n");
     }
     else
     {
     	printf("\nFAILED!");
	 }
	  	
	return 0;
}

