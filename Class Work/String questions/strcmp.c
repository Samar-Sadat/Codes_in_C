#include <stdio.h>
#include <string.h>
void main()
{
    char str1[20], str2[20];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    printf("Return strcmp() value: %d\n", strcmp(str1, str2));
}