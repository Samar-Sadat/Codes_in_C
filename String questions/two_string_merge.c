#include <stdio.h>
#include <string.h>
void main()
{
    char str1[40], str2[20];
    printf("Enter your first name: ");
    gets(str1);
    printf("Enter your last name: ");
    gets(str2);
    strcat(str1, str2);
    printf("Your name is: ");
    puts(str1);
}