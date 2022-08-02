//Menor, Harold O. BSCS1D
//Write a C program that use a if-else statemen.
#include<stdio.h>
int main(){
	
	int a, b;
	
	printf("Enter two integers");
	scanf("%d %d",&a,&b);
	
	if (a==b)
	{
		printf("They are Equal");
		}
	if (a<b)
	{
		printf("is less than %d",a,b);
		}
	if (a>b)
	{
		printf("is greater than %d",a,b);
		}

	return 0;
}
