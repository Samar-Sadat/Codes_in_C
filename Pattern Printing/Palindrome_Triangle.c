#include <stdio.h>
int main()
{
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        int i1 = i+1;
        for (int j = 4 - (i+1); j > 0; j--)
        {
            printf(" ");
        }
        for (int j1 = 0; j1 < i+1; j1++)
        {
            printf("%d", i1);
            i1--;
        }
        i1 = i1 + 2;
        for (int j2 = 0; j2 < i; j2++)
        {
            printf("%d", i1);
            i1++;
        }
        for (int j3 = 4 - (i+1); j3 > 0; j3--)
        {
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}