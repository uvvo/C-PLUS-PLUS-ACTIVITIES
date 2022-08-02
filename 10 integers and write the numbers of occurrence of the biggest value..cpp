//WAP that asks the user to enter 10 integers and write the numbers of occurrence of the biggest value. 
#include <stdio.h>
#define MAX 10

int main() 
{
	int number[MAX], i, j, max=0, num_pos=0; //declare variable 
	printf("Enter 10 integers: \n");
	for(i = 0; i < MAX; i++) {
		scanf(" %d", &number[i]);
	}
	
	for(j = 0; j < MAX; j++) 
	{
		if(number[j] > max) {
			max = number[j];
			num_pos = j;
		}
	}
	printf(" biggest value: %d\nPosition: %d\n", max, num_pos+1); //print the biggest value and Position
	return 0;
}
