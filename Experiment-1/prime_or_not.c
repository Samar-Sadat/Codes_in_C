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

int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    if (is_prime(num))
    {
        printf("\n%d is a prime number.\n", num);
    }
    else
    {
        printf("\n%d is not a prime number.\n", num);
    }
    printf("\n");
    return 0;
}