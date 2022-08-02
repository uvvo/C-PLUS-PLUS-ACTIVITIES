 //WAp to Display Sum and Average of Array Elements Using for Loop.
#include<stdio.h>
int main()
{
  int n, numbers, i=0,Sum=0; //variable
  float Average;
  printf("\nEnter How many Number you want?\n"); //ask to user enter howny numbers
  scanf("%d",&n);

  printf("\nEnter the elements one by one\n");
  do
   {
     scanf("%d",&numbers);
     Sum = Sum +numbers;
     i++;
   }while(i<n);

  Average = Sum/n;

  printf("\nSum of the %d Numbers = %d",n, Sum);// display the sum
  printf("\nAverage of the %d Numbers = %.2f",n, Average); //Display the average

  return 0;
}
