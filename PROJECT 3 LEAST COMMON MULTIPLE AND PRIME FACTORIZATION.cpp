//Create a C++ programs that will display the Prime factorization of three integers between 1- 10,000 and calculate the LCM
//Group 5 Tapel, Menor, Mendez
#include<iostream>
using namespace std;

int lcm(int, int, int); 

int main()
{
    int num1, num2, num3, ans;
    cout<<"Enter the numbers to find the LCM using Prime factorization of three integers: "<<endl; //LCM can be found only for non zero numbers. 
    cout<<"Enter first Integer  = "; cin>>num1;
    cout<<"Enter Second Integer = "; cin>>num2;
    cout<<"Enter third integer  = "; cin>>num3; 
    ans = lcm(num1,num2,num3);
    cout<<"LCM three integers is "<<ans;
}

int lcm(int num1, int num2, int num3){
    static int i=1;

    if(i%num1 == 0 && i%num2 == 0 && i%num3==0){  
        return i;
    } else {
        i++;
        lcm(num1,num2,num3);
        return i;
    }
}
