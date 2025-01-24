#include <stdio.h>
int main()
{
    int x;
    printf("\nEnter number to print its multiplication table: ");
    scanf("%d", &x);
    printf("\n");
    for (int i = 1; i < 11; i++)
    {
        int n = x * i;
        printf("%d x %d = %d\n", x, i, n);
    }
    printf("\n");
    return 0;
}