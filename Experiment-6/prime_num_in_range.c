#include <stdio.h>

int is_prime(int num)
{
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    for (int i = 3; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    int x, y;
    printf("Enter the starting number of the range: ");
    scanf("%d", &x);
    printf("Enter the ending number of the range: ");
    scanf("%d", &y);
    for (int i = x; i <= y; i++)
    {
        if (is_prime(i))
        {
            printf("%d is a prime number.\n", i);
        }
    }
}