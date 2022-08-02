//Create a program that will display the fibonacci series.
#include <stdio.h>
int main() {
    int i, num, terms1 = 0, terms2 = 1;// Variable
    int nextTerm = terms1 + terms2;//Variable
    printf("Enter the number of terms: ");//Enter the terms 
    scanf("%d", &num);
    printf("Fibonacci Series: %d, %d, ", terms1, terms2); //Diplay Fibonacci Series

    for (i = 1; i <= num; ++i) {
        printf("%d, ", nextTerm);
        terms1 = terms2;
        terms2 = nextTerm;
        nextTerm = terms1 + terms2;
    }

    return 0;
}

