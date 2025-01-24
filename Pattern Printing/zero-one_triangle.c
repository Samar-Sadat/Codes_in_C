#include <stdio.h>
int main()
{
    int i1 = 0, j1 = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            if ( i % 2 == 0 )
            {
                if ( j % 2 == 0)
                {
                    printf("%d ", j1);
                }
                else
                {
                    printf("%d ", i1);
                }
            }
            else
            {
                if ( j % 2 == 0)
                {
                    printf("%d ", i1);
                }
                else
                {
                    printf("%d ", j1);
                }
            }
        }
        printf("\n");
    }
    return 0;
}