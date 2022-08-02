#include <stdio.h>
  int main() {
  
        int num, Z, flag = 0;
        printf("Enter a integer: ");
        scanf("%d", &num);

     for (Z = 2; Z <= num / 2; ++Z) {
    
 	 //Condition 
     if (num % Z == 0) {
      flag = 1;
      break;
    }
  }
      //Condition
      if (num == 1) {
    printf("1 is neither prime nor composite.");
  } 
     else {
      if (flag == 0)
      printf("%d is a prime number.", num);
     else
      printf("%d is not a prime number.", num);
  }

  return 0;
}
	

