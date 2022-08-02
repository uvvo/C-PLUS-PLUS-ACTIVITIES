// function to interchange the contents of two integer elements using pointers.
//Menor, Harold O.
#include <stdio.h>

  void interchange (int *a ,int *b)
{
    int i;
     i   = *a;
    *a   = *b;
    *b   =  i;
}

    int main()
{
	//Varible
    int num1,num2;
    //Display Input and Output
    printf("Enter value of number1:");
    scanf("%d",&num1);
    printf("Enter value of number2:");
    scanf("%d",&num2);

    //before swapping
    printf("Before Swapping: number1 is: %d, number2 is: %d\n",num1,num2);

    // interchange the contents of two integer()
    interchange(&num1,&num2);

    //after swapping
    printf("After Swapping: number1 is: %d, number2 is: %d\n",num1,num2);

    return 0;
}
