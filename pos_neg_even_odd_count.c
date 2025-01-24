#include <stdio.h>
void main()
{
    int num[11] = {[10]='\0'}, N = 0, P = 0, E = 0, O = 0, i, j;
    printf("Enter numbers:\n");
    for (j = 0; j < 10; j++)
    {
        scanf("%d", &num[j]);
    }
    for (i = 0; i < 10; i++)
    {
        if (num[i] > 0)
        {
            P = P + 1;
            if (num[i] % 2 == 0)
            {
                E = E + 1;
            }
            else if (num[i] % 2 == 1)
            {
                O = O + 1;
            }
        }
        else if (num[i] < 0)
        {
            N = N + 1;
            if (num[i] % 2 == 0)
            {
                E = E + 1;
            }
            else if (num[i] % 2 == -1)
            {
                O = O + 1;
            }
        }
    }
    printf("number of postive integers: %d\n", P);
    printf("number of negative integers: %d\n", N);
    printf("number of even numbers: %d\n", E);
    printf("number of odd integers: %d\n", O);
}