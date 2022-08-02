#include<stdio.h>
#include<conio.h>
#include<iostream>
 int LCM(int a,int b,int c)
  {
    int i,lcm=1;
    for(i=2;i<=a&&i<=b&&i<=c||i<=a&&i<=b||i<=b&&i<=c||i<=a&&i<=c;)
    {
        if(a%i==0&&b%i==0&&c%i==0)
        {
            lcm*=i;
            a/=i;
            b/=i;
            c/=i;
          }
        else if(a%i==0&&b%i==0)
        {
            lcm*=i;
            a/=i;
            b/=i;
          }
        else if(b%i==0&&c%i==0)
        {
            lcm*=i;
            b/=i;
            c/=i;
         }
        else if(a%i==0&&c%i==0)
        {
            lcm*=i;
            a/=i;
            c/=i;
           }
        else
            i++;
        }
     lcm=a*b*c;
    return lcm;
  }
 int main()
  {

      int a,b,c,yes;
      start:
        printf("Enter three numbers :-");
        scanf("%d%d%d",&a,&b,&c);
        printf("LCM = %d",LCM(a,b,c));
        printf("\nAgain calculate (1):- ");
        scanf("%d",&yes);
        if(yes==1)
         goto start;
      return 0;
  }
