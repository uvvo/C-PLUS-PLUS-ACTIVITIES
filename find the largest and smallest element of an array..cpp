//Write a C++ program to find the largest and smallest element of an array.
#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, max, min; //declare variable
    cout << "Enter the size of the array : "; //aks to user Enter the size of the array
    cin >> n;
    cout << "Enter the elements of the array : "; //Enter the elements of the array 
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Largest element : " << max; //print largest elements
    cout << "Smallest element : " << min; //print Smallest element
    return 0;
}
