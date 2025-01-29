#include <stdio.h>
void main()
{
    int num[3][3][2], max;
    printf("Enter numbers: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                scanf("%d", &num[i][j][k]); 
            }
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d\t", num[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}