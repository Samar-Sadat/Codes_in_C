#include <stdio.h>
#include <string.h>
void main()
{
    char str1[20] = {[19] = '\0'}, str2[20] = {[19] = '\0'};
    printf("Enter your name: ");
    gets(str1);
    strcpy(str2, str1);
    printf("Your name is: ");
    puts(str2);
}