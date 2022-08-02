#include <stdio.h>
int main(){
	
	int n, sum=0, i=1;
	printf("Enter a nature number\n");
	scanf("%d",&n);
	
	while (i<=n){

	sum = sum+2*i-1;
	  i++;
}
     printf("sum is %d",sum);
		return 0;
}
