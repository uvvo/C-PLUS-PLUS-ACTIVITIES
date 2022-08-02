#include<stdio.h>
#define  n 5
int main(){

	int a[n], i;
	printf("Enter the number:\n",n);
	for (i =0; i < n; i++)
	scanf("%d",&a[i]);
	
	printf("Elementof array are:\n");
	for (i =n-1; i >=0; i--)
	printf("%d\n", a[i]);
	return 0;
}
