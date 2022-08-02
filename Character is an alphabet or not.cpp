#include<stdio.h>
int main()
{
     char ch;
    
    printf("\nEnter a character:");
    scanf("%c",&ch);
    
    if ( ch >= 'a' && ch <= 'z') 
    {
       printf("%c is an Alphabet\n",ch);
	}
	
	else 
    {
	   printf("%c is not Alphabet\n",ch);
    }
	return 0;
	
}
