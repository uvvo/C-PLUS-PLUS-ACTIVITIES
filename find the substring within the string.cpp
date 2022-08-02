//WAP to find the substring within the string
#include <stdio.h>

int main()
{
	//Variable
    char str1[100], str2[100];
    int l, i, x;

    printf("Enter a first string: ");
    gets(str1);

    printf("Enter a second string: ");
    gets(str2);

    //finding length of second string
    for (l = 0; str2[l] != '\0'; l++);

    for (i = 0, x = 0; str1[i] != '\0' && str2[x] != '\0'; i++)
    {
        if (str1[i] == str2[x])
        {
            x++;
        }
        else
        {
            x = 0;
        }
    }

    if (x == l)
    {
        printf("Substring found at position %d", i - x + 1);
    }
    else
    {
        printf("Substring not found");
    }

    return 0;
}
