//3.Write a program to perform the conversions of peso to dollar value. 
#include<stdio.h>
#define PHI_PESO 50.74
int main(){
	
	float convert = 0.00, usdollar = 0.00, peso = 0.00;
	 
	 printf("Convert of peso to dollar\n");
	 printf("Enter a us dollar value:");
	 scanf("%f",&usdollar);
	 
	 convert = (usdollar * PHI_PESO );
	 
	  printf("The value of $%2.2f Us dollar in ",usdollar);
	  printf("The value of PHP%2.2f",convert);
	return 0;
}
