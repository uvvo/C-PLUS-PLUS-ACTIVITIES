//Write a program in C++ to find Size of fundamental data types. 
//Menor, HArold O. BSCS1D
#include <stdio.h>
int main()
{
	//Variable
    int integerType; 
    char charType;
    float floatType;
    double doubleType;
    long double longdoubleType;
    short shortType;
    long  longType;
    long longlongType;
    bool boolType;
    
    //Display input and Output
    printf("Size of char is: %ld\n",
           sizeof(charType));
           
    printf("Size of short is: %ld\n",
           sizeof(shortType));
  
    printf("Size of int is: %ld\n",
           sizeof(integerType));
  
    printf("Size of long is: %ld\n",
           sizeof(longType));
           
    printf("Size of long long is: %ld\n",
           sizeof(longlongType));
   
    printf("Size of float is: %ld\n",
           sizeof(floatType));
  
    printf("Size of Double is: %ld\n",
           sizeof(doubleType));
           
    printf("Size of Long Double type is: %ld\n",
           sizeof(longdoubleType));
  
    printf("Size of bool is: %ld\n",
           sizeof(boolType));
  
    return 0;
}
