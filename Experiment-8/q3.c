#include <stdio.h>

void pointr(int *pt)
{
    *pt = (*pt) * (*pt);
}

int main()
{
    int x = 9;
    printf("\nInitial value of variable: %d\n", x);
    int *ad = &x;
    pointr(ad);
    printf("Modified value of variable: %d\n", x);
    printf("\n");
    return 0;
}