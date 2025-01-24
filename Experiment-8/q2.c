#include <stdio.h>
int main()
{
    int a = 17;
    char b = 'f';
    float c = 19.87;
    int *x1 = &a;
    char *x2 = &b;
    float *x3 = &c;
    printf("\nThe address of %d is: %d\n", a, x1);
    printf("The address of %c is: %d\n", b, x2);
    printf("The address of %.2f is: %d\n", c, x3);
    printf("\nIncrement: \n");
    printf("\nOf pointer which stores the address of %d is: %d\n", a, ++x1);
    printf("Of pointer which stores the address of %c is: %d\n", b, ++x2);
    printf("Of pointer which stores the address of %.2f is: %d\n", c, ++x3);
    printf("\nDecrement:\n");
    --x1;
    --x2;
    --x3;
    printf("\nOf pointer which stores the address of %d is: %d\n", a, --x1);
    printf("Of pointer which stores the address of %c is: %d\n", b, --x2);
    printf("Of pointer which stores the address of %.2f is: %d\n", c, --x3);
    printf("\n");
}