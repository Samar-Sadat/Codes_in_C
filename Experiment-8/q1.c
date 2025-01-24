#include <stdio.h>
int main()
{
    int x = 6;
    char x1 = 'c';
    float x2 = 5.298;
    int *p1 = &x;
    char *p2 = &x1;
    float *p3 = &x2;
    printf("The address of %d is: %d\n", *p1, p1);
    printf("The address of %c is: %d\n", *p2, p2);
    printf("The address of %.3f is: %d\n", *p3, p3);
    return 0;
}