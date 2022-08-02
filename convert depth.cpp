//1.Write a program to convert this depth to other units of measurement. 
#include<stdio.h>
int main(){
	
	float miles;
	
	printf("input the distance in miles\n");
	scanf("%f",&miles);
	
	printf("Enter the distance in Meter is %f\n",miles*1.6);
	printf("Enter the distance in feets is %f\n",miles*5880);
	printf("Enter the distance in inches is %f\n",miles*5880*12);

	return 0;
}
