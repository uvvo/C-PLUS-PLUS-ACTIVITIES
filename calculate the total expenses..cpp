#include<stdio.h>
int main()
{
	int quality, discount = 0;
	float rate, expense;

	printf("Enter a Price: ");
	scanf("%d", &quality);

	printf("Enter a Rate: ");
	scanf("%f", &rate);

	if (quality>1000)
	discount = 10;
	expense= (quality*rate) - (quality*rate*discount / 5000);
	printf("\nTotal Expenses = Rs. %f", expense);
	return 0;
}
