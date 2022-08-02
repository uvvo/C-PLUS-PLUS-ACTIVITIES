//Write a point of sale program using C.
#include<stdio.h>
int main (){
	
    //variable
	int choose;
	//input and output
	printf("Menu \n");
	printf("1.Egg\n");
	printf("2.Hotdog\n");
	printf("3.Ham\n");
	printf("4.Hotdog and cheese\n");
	printf("5.Chicken\n");
	printf("6.Rice\n");
	printf("CHOOSE:\n");
	scanf("%d",&choose);
	
	switch (choose){
		
		case 1:
		printf("Price:10\n");
		break;
		case 2:
		printf("Price:15\n");
		break;
		case 3:
		printf("Price:12\n");
		break;
		case 4:
		printf("Price:25\n");
		break;
		case 5:
		printf("Price:30\n");
		break;
		case 6:
		printf("Price:10\n");
		break;
		
		default:
		printf("Your order is not available");
		break;
		
	}
		
	return 0;
}
