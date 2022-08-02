//Write a C++ program to reverse the element of an integer 1-D array.
#include<iostream>
using namespace std;

int main()
{
// Reverse of an array
    int num, temp; //declare variable 
    cout<<"Enter a numbers:";
    cin>>num;

    int arr[num];
    for(int i = 0;i<num ;i++)
        cin>>arr[i];

    for(int i = 0, j=num-1; i<j;i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

    }
    cout<<"\nElements of an array after Reverse :: \n"; // print  Elements of an array after Revers
    for(int i = 0;i<num ;i++)
        cout<<arr[i]<"\t";


    return 0;
}
