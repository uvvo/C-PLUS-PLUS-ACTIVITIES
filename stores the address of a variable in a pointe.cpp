//Menor, Harold O. BSCS1D
//Create a program that stores the address of a variable in a pointer.
#include <stdio.h>
int main()
{
	 //Variable
    int var =20;
    int *p;
    p= &var;
    //Input ang Output
    printf ( "Address of var is: %p", &var);
    printf ( "\nAddress of var is: %p", p);

    printf ( "\nValue of var is: %d", var);
    printf ( "\nValue of var is: %d", *p);
    printf ( "\nValue of var is: %d", *( &var));

    /* p's value as it represents an address*/
    printf( "\nValue of pointer p is: %p", p);
    printf ( "\nAddress of pointer p is: %p", &p);

    return 0;
}
