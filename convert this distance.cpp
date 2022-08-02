#include<stdio.h>
int main(){
	
	float km, cm, mm, m;
	
	printf("input the distance units of Kelometers\n");
	scanf("%f",&km);
	
	 m= km *1000.0;
	cm= km *100000.0;
	mm= km *1000000.0;
	 
	printf("Enter the distance in Meter is %f\n",&m);
	printf("Enter the distance in Centimeter is %f\n",&cm);
	printf("Enter the distance in Milimeter is %f\n",&mm);

	return 0;
}
