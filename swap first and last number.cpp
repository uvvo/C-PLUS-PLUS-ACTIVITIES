#include<stdio.h>
int main (){
	
	int a[50]={ 40 ,30 ,20 , 15 ,10 ,5},i,x;
	printf(" The elements in the given array are:\n");
	for(i=0;i<7;i++)
	printf("%d",a[i]);
	
	//Swapping
	x=a[0];
	a[0]=a[6];
	a[6]=x;
	
	printf("The elements of array after swappnig\n");
		for(i=0;i<7;i++)
	    printf("%d",a[i]);
	
	return 0;
}
