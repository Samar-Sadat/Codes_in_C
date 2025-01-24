#include <stdio.h>
int fact_recursive(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * fact_recursive(n-1);
}
int fact_non_recursive(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
    int d = 1;
    for (int i = 2; i < n+1; i++)
    {
        d = i * d;
    }
    return d;
    }
}
int binomial_coefficient(int n, int r)
{
    return (fact_recursive(n)) / (fact_recursive(r) * fact_recursive(n-r));
}
void main()
{
    int n, r;
    printf("\n");
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    printf("\n");
    if (r <= n)
    {
        printf("The binomial coefficient c(%d, %d) is: %d\n", n, r, binomial_coefficient(n, r));
        printf("\n");
    }
    else
    {
        printf("Invalid value of r. Value of r cannot be greater than n.\n");
    }
    printf("   Tabulating the result for different values of n and r\n");
    printf("-----------------------------------------------------------\n");
    printf("\t\tn\tr\tc(n, r)\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("\t\t%d\t%d\t   %d\n", i, j, binomial_coefficient(i, j));
        }
    }
}