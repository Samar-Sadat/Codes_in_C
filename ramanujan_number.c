#include <stdio.h>
void main()
{
    int x, L, a, b, c, d;
    printf("Enter a ramanujan no.: ");
    scanf("%d", &x);
    printf("Enter the limit: ");
    scanf("%d", &L);
    for (a = 1; a <= L; a++)
    {
        for (b = a; b <= L; b++)
        {
            for (c = a + 1; c <= L; c++)
            {
                for (d = c; d <= L; d++)
                {
                    if (a * a * a + b * b * b == c * c * c + d * d * d && a * a * a + b * b * b == x)
                    {
                        printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
                    }
                }
            }
        }
    }
}