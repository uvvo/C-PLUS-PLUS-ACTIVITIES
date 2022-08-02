//5.Write a program using do-while looping statement that will print the factors of a user-defined number. 
#include<stdio.h>
int main(){


    int num, i, factors=1;

    printf("Enter the number:\n");
    scanf("%d",&num);
     
	  i=num;
     while(i>=1)
   {
    factors=factors*i;
     i--;
   }
    printf("The factors of of a user-defined number %d is %d\n",num,factors);
   return 0;
}
