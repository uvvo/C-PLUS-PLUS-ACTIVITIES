#include<stdio.h>
   int main(){
  
   int sum=0,a,i;  //Varibale
    //  Disaplay perfect Number between 1 to 555         
     printf("\n Perfect numbers between 1 and 500 are: ");
     for(i= 1; i<= 500; i++){
         a=1;
     while(a<=(i/2)){///Condition
      if(i % a == 0)
        sum=sum+a;
           a++;
     }
      if(sum==i)
      printf(" %d ",i);//dispay the value of b
        sum=0;
  }
    return 0;
 }
