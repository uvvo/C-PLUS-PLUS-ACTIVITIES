//WAP that counts the number of words in an entered string use function wordcnt() that accepts string as argument and return the number of words.
 #include <stdio.h>
 #include <string.h>
 
int stringwordcount(char *s)
{
    static int i,words=0;
    if(!s[i])
    {
       if(i>0)
      words++;
      return words;
	}
	else
	{
	
    	if(s[i++]==32)
    	 words++;
    	 
        stringwordcount(s);
 	}
 	 
 	
}
int main()
{
    char s[1000];   //variable
    int wordscount;
  
    printf("Enter  the string: "); //print the string
    gets(s);
    
    wordscount=stringwordcount(s);
    printf("no of words in string = %d\n",wordscount);// print number of  words in string
     
 
 }
