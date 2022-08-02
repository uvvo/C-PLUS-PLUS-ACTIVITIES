#include<stdio.h>
#include<stdlib.h>
int main()
{
	//Variable
  int num;
    //Display Number
    printf("Enter a number: ");
    scanf("%d",&num);
    //Prin the absolute value
     num = abs (num);
     printf("Absolute value = %d\n", num);

  return 0;
}
