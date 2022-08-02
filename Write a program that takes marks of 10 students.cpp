//Write a program that takes marks of 10 students as input. It calculates the class average and
//displays it on the screen. Use while loop.
#include <iostream>


using namespace std;

int main()
{
  int x=10;
  cout<<"value of x: "<<x<<endl;
  cout<<"address of x: "<<&x<<endl;

  int *p;
  p=&x;
  cout<<"value of p: "<<p<<endl;
  cout<<"address of p: "<<&p<<endl;
  cout<<"pointer of p: "<<*p<<endl;

  cout<<"\n"<<"ADDING"<<"\n\n";
  p=p+2;
  cout<<"value of p: "<<p<<endl;
  cout<<"address of p: "<<&p<<endl;
  cout<<"pointer of p: "<<*p<<endl;

  return 0;
}

