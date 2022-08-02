/*Menor, Haarold O. BSCS1D*/
//Write a C program to count number of digits of an integer
#include <stdio.h>
int main(){
	
	//Declaration of variable
	int num, count = 0;

	//Input and Output
	printf("Enter a Integer:");
	scanf("%d", &num);
	
	while (num!= 0){
		num = num/10;
		count++;
		
	}

	//Display result
	printf("Number of digits:%d",count);
	
   return 0;
}
