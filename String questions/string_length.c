#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf("Enter any no. of characters: ");
    gets(str);
    printf("The no. of character that you entered is: %d\n", strlen(str));
}