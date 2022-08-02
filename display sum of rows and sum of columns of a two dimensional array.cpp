#include <iostream> 
#include <algorithm> 
using namespace std; 
 
int LCM(int a, int b){ 
	return (a * b) / __gcd(a, b); //Formula to calculate LCM of two numbers 
} 
 
int main(){ 
	 
	int a, b, c; 
	cout<<"Enter three numbers"<<endl; 
	cin>>a>>b>>c; 
 
	int ans = LCM(LCM(a, b), c); 
	 
	cout<<"Their LCM is "<<ans<<endl; 
	 
	return 0; 
} 
