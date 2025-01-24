#include <stdio.h>
#include <string.h>

void reverse(char str[])
{
    int i1 = 0;
    int a = strlen(str);
    char str1[a];
    for (int i = a-1; i >= 0; i--)
    {
        str1[i1] = str[i];
        i1++;
    }
    printf("The reverse of the entered string is: ");
    puts(str1);
}

void main()
{
    char str[200];
    printf("Enter the string: ");
    gets(str);
    reverse(str);
}