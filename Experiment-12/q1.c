#include <stdio.h>
# define num 12
int main()
{
    printf("\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    printf("\n");
    return 0;
}