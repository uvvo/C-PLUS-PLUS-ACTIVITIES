//Menor, Harold 0. BSCS1D
//WAP that asks the user to type an integer and writes "YOU WIN" if the value is between 56 and 78 (both included).
// In the other case it writes "YOU LOSE".
#include<stdio.h>
#include<conio.h>

int main()
 {
 
  int num; //variable
    //Display Integer
    printf("Enter an Integer:");
    scanf("%d", &num);
    //Display result if win or loss
    if((num>=56)&&(num<=78)){ //condition
        printf("YOU WIN");
 }
    else
        printf("YOU LOSE");

   getch();
   return 0;
}
