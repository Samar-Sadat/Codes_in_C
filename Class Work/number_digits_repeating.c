#include <stdio.h>
void main()
{
    int x, c = 0, i, j = 0, l, m, k;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter no. of digits: ");
    scanf("%d", &k);
    int num[k];
    for (i = x; i > 0; i = i / 10)
    {
        num[j] = i % 10;
        j++;
    }
    for (l = 0; l < k; l++)
    {
        for (m = l + 1; m < k; m++)
        {
            if (num[l] == num[m])
            {
                c = c + 1;
            }
        }
    }
    if (c == 0)
    {
        printf("%d has non-repeating digits.\n", x);
    }
    else if (c > 0)
    {
        printf("%d has repeating digits.\n", x);
    }
}