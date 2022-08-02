//C program that display characters from A to Z using looping. 
#include<stdio.h>

int main(){
   
   //Variable
	char ch= 'A';
	
	//Display Input and Output
	while(ch <='Z')
	{
		printf("%c     ",ch);
		ch++;
	}
	
	return 0;
	
	
}
