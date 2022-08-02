//Write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred. 
//Cost price and selling price of an item is input by the user.
//Menor, HArold O. BSCS1D
#include<stdio.h>
#include<conio.h>
int main()
{
	//Variable
    int cp,sp,tl,tp;
    //print the price and sale price
    printf("Enter the Cost price\n");
    scanf("%d",&cp);
    printf("Enter the Selling price\n");
    scanf("%d",&sp);
    
    //Condition
    if(sp>cp)
    {
       tp=sp-cp;
       printf("The profit is %d",tp);
    }
    else if (sp<cp)
    {
        tl=cp-sp;
       printf("The loss is %d",tl);
    }
    else
    //Display profit loss
    printf("There is neither profit nor loss");
}
