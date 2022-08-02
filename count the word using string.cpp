#include <stdio.h>
#include <string.h>


#define str_size 100 //Declare the maximum size of the string

int main()
{
    char str[str_size];
    int i, word;
	
       printf("\n\nCount the number of words in a string :\n");
       printf("------------------------------------------------------\n"); 	
       printf("Input the string : ");
       
	
    i = 0;
    word = 1;

   
    while(str[i]!='\0')
    {

        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            word++;
        }

        i++;
    }

    printf("Total number of words in the string is : %d\n", word-1);
}
