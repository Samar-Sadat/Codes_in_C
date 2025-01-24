#include <stdio.h>
void main()
{
    char str[10] = {[9] = '\0'};
    printf("Enter your name: ");
    gets(str);
    printf("Your name is: ");
    puts(str);
}