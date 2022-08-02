#include<stdio.h>
#include<conio.h>
main()
{
int a[10],i,j,temp; //Declare variable
printf("Enter the 10 Numbers:"); //aks to user eneter 10 numuber
for(i=0;i<10;i++)
{
    printf("Enter a value:"); //aks to Enter a value
    scanf("%d",&a[i]);
}

for(i=0;i<9;i++)
{
    for(j=0;j<9;j++)
    {
        if(a[j]>a[j+1])     
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
}

}
printf("Given numbers in ascending order:");
 {
 for(i=0;i<10;i++)
  
	  printf("\n%d",a[i]);
}
return 0;
}
