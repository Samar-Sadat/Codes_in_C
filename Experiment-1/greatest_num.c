#include <stdio.h>

int greatest(int a, int b, int c)
{
    if (a > b && a > c) return a;
    else if (b > a && b > c) return b;
    else return c;
}

int main()
{
    int a, b, c;
    printf("\nEnter three numbers (num1, num2, num3): ");
    scanf("%d, %d, %d", &a, &b, &c);
    printf("\nThe greatest number out of %d, %d & %d is: %d\n", a, b, c, greatest(a, b, c));
    printf("\n");
}