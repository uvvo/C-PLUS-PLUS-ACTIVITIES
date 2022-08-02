// Write a program in C++ to find the sum of digits of a given number. The answer is written in words. 
#include<stdio.h>
main() {
   int num, sum = 0; //Variable
   printf("Enter a number: "); //take the number from the user
   scanf("%d", &num);
   for(; num > 0; sum += num%10, num/= 10) {
   }
   printf("The sum of digits: %d", sum); //print the sum
}
