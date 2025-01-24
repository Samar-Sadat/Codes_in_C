#include <stdio.h>
int main()
{
    int i0 = 6;
    for (int i = 0; i < 7; i++)
    {
        int l1 = (6 - (2 * i));
        if (l1 < 0)
        {
            l1 = l1 * -1;
        }
        for (int j0 = 0; j0 < l1; j0++)
        {
            printf(" ");
        }
        for (int j1 = 0; j1 < 7 - i - i0; j1++)
        {
            printf("*   ");
        }
        if (i0 > 0)
        {
            i0 = i0 - 2;
        }
        printf("\n");
    }
    return 0;
}