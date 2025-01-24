#include <stdio.h>
#include <stdbool.h>
int isprime(int num)
{
    if (num <= 1 ) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int x;
    printf("Enter any no.: ");
    scanf("%d", &x);
    if (isprime(x))
    {
        printf("The no. is prime.\n");
    }
    else
    {
        printf("The no. is not prime.\n");
    }
    return 0;
}