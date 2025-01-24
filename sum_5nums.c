#include <stdio.h>

int main()
{
    int num[5];
    printf("\nEnter five numbers below:\n");
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }
    printf("\nSum of the entered five numbers is: %d\n", sum);
    printf("\n");
    return 0;
}