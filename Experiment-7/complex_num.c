#include <stdio.h>
void main()
{
    struct complex
    {
        int real;
        int cmplex;
    } a, b, sum, sub;
    printf("Enter the real part of first complex number: ");
    scanf("%d", &a.real);
    printf("Enter the complex part of first complex number: ");
    scanf("%d", &a.cmplex);
    printf("Enter the real part of second complex number: ");
    scanf("%d", &b.real);
    printf("Enter the complex part of second complex number: ");
    scanf("%d", &b.cmplex);
    sum.real = a.real + b.real;
    sum.cmplex = a.cmplex + b.cmplex;
    if (a.cmplex >= 0)
    {
        printf("First complex number : %d + %di\n", a.real, a.cmplex);
    }
    else
    {
        printf("First complex number : %d - %di\n", a.real, (a.cmplex * (-1)));
    }
    if (b.cmplex >= 0)
    {
        printf("Second complex number : %d + %di\n", b.real, b.cmplex);
    }
    else
    {
        printf("Second complex number : %d - %di\n", b.real, (b.real * (-1)));
    }
    sub.real = a.real - b.real;
    sub.cmplex = a.cmplex - b.cmplex;
    if (sum.cmplex >= 0)
    {
    printf("Sum of the two complex numbers : %d + %di\n", sum.real, sum.cmplex);
    }
    else
    {
        printf("Sum of the two complex numbers : %d - %di\n", sum.real, (sum.cmplex * (-1)));
    }
    if (sub.cmplex >= 0)
    {
    printf("Difference of the two complex numbers : %d + %di\n", sub.real, sub.cmplex);
    }
    else
    {
        printf("Difference of the two complex numbers : %d - %di\n", sub.real, (sub.cmplex * (-1)));
    }
}