//Write a program which takes two numbers as input from user and determines which is the larger
//of the two numbers. The Program should also tell which of the entered numbers is even or odd
#include<stdio.h>
int main()
{
   int n, a[50]; //Variable

   printf("Enter the size of the array: "); //ask to user enter a size of array
   scanf("%d", &n);

   printf("Enter array elements: \n"); //ask to user enter a array elements
   for(int i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }

   printf("Even numbers in are: \n"); //Display even
   for(int i=0; i<n; i++)
   {
     if(a[i]%2==0)
     printf("%d ", a[i]);
   }

   printf("\nOdd numbers are: \n");//Display Odd
   for(int i=0; i<n; i++)
   {
     if(a[i]%2!=0)
     printf("%d ", a[i]);
   }

   return 0;
}
