// WAP which illustrates the working or arrays and pointers. 
#include <iostream>
using namespace std;

int main()
{
    float arr[5];

    // declare pointer variable
    float *ptr;
    
    cout << "Displaying address using arrays: " << endl; //print the illustrates the working or arrays and pointers. 

    // use for loop to print addresses of all array elements
    for (int i = 0; i < 5; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // poiter = &array[0]
    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<< endl; //print the address using pointers

    // use for loop to print addresses of all array elements
 
    for (int i = 0; i < 5; ++i)
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }

    return 0;
}
