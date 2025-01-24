#include <stdio.h>
void main()
{
    int num[11] = {[10]='\0'}, x, c = 0;
    printf("Enter numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("Enter the number to find its frequency: ");
    scanf("%d", &x);
    for (int i = 0; i < 10; i++)
    {
        if (num[i] == x)
        {
            c = c + 1;
        }
    }
    printf("The frequency of %d is: %d", x, c);
}