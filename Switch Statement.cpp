//Menor,Harold O. BSCS1D
//Switch Case Example
#include <stdio.h>
    int main() {
    	//variable
        int num = 10;
        //Conditon
        switch (num) {
            case 7:
                printf("Value is 7");
                break;
            case 8:
                printf("Value is 8");
                break;
            case 9:
                printf("Value is 9");
                break;
            case 10:
                printf("Value is 10");
                break;
              
            default:
                printf("Out of range");
                break;
        }
        return 0;
    }
