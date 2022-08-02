#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define PI 3.1415926535
void printAngles(int a, int b, int c) {
   double x = (double)a;
   double y = (double)b;
   double z = (double)c;
   double A = (((double)(acos(( (y*y) + (z*z) - (x*x) ) / (2*y*z))))* 180 / PI);
   double B = ((double)(acos(( (x*x) + (z*z) - (y*y) ) / (2*x*z)))* 180 / PI);
   cout<<"Angles: A = "<<A<<", B = "<<B<<", C = 90";
}
void printOtherSides(int n) {
   int b,c;
   if (n & 1) {
      if (n == 1)
         cout << -1 << endl;
      else{
         b = (n*n-1)/2;
         c = (n*n+1)/2;
      }
   } else {
      if (n == 2)
         cout << -1 << endl;
      else {
         b = n*n/4-1;
         c = n*n/4+1;
      }
   }
   cout<<"Sides : a = "<<n<<", b = "<<b<<", c = "<<c<<endl;
   printAngles(n,b,c);
}
int main() {
   int a = 8;
   printOtherSides(a);
   return 0;
}
