//WAP a C++ Program to Calculate Average of Numbers Using Arrays.
#include <stdio.h>
int main() {
    int number, i;//variable
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: "); //Displat the input and out put
    scanf("%d", &num);

    while (number > 100 || number < 1) {//condition
        printf("Sorry Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &number);
    }

    for (i = 0; i < number; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / number;// print the average
    printf("Average = %.2f", avg);//Display the Average
    return 0;
}
