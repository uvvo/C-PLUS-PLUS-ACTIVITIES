//Write a program that creates an array of 10 elements size. Your program should prompt the user
//to input numbers in array and then display the sum of all array elements.
#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
    int i,arr[10],sum=0; //Declare variable
 
    cout<<"Enter 10 elements:";  //aks to user enter 10 elements of array
    for(i=0;i<10;++i) 
        cin>>arr[i]; 
 
    for(i=0;i<10;++i) 
        sum=sum+arr[i]; 
    cout<<"Sum of numbers is:"<<sum; //print sum
 
    return 0; 
} 
