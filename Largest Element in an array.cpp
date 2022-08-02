#include <stdio.h>
int main() {
  
  int num; //variable
  double arr[100];
  
  printf("Enter the number of elements (1 to 100): "); // Ask user to Enetr a Number of elements 
  scanf("%d", &num);

  for (int i = 0; i < num; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  // Calculate  the largest number to arr[0]
  for (int i = 1; i < num; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %.2lf", arr[0]); //display result  Largest element

  return 0;
}
