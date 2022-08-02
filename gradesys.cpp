#include <stdio.h>
int main(){

   
	int math, sci, eng, comprog, fli, ave;
     
	printf("\nEnter a grade in Five Subject:");
	printf("\nMath subject:");
	scanf("\n%d", &math);
	printf("\nScience subject:");
	scanf("\n%d", &sci);
	printf("\neEglish subject:");
	scanf("\n%d", &eng);
	printf("\n Computer Programming subject:");
	scanf("\n%d", &comprog);
	printf("\n FIlifino subject:");
	scanf("\n%d", &fli);
	
	ave = (math + sci + eng + comprog + fli) /5;
	printf("\nThe average of the subject is %d ", ave );
	
	//condition
	if (ave>=90 && ave<=100)
   	 {
		printf("\nYour grade is AA");	
	 }
     else if (ave>=80 && ave<=90)
     {
     	printf("\nYour grade is BB\n");	
	 }
	 else if (ave>=70 && ave<=80)
	 {
	 	printf("\nYour grade is CC\n");
	 }
	 else if (ave>=60 && ave<=70)
     {
	    printf("\nYour grade is DD\n");
     }
     else
     {
     	printf("\nFAILED!");
	 }
	  	
	return 0;
}

