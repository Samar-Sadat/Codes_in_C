#include <stdio.h>
#include <string.h>
void main()
{
    char str1[40], str2[40];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    int x = strstr(str1, str2);
    if (x)
    {
        printf("\n");
    }
    else
    {
        printf("\n");
    }
}