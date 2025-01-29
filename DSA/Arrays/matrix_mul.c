//WAP to multiply two m*n matrices

#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;

    printf("\nEnter no. of rows and columns of matrix-A in 'rxc' form: ");
    scanf("%dx%d", &r1, &c1);
    printf("Enter no. of rows and columns of matrix-B in 'rxc' form: ");
    scanf("%dx%d", &r2, &c2);

    if (c1 == r2)
    {
        printf("\nMatrix-A and Matrix-B can be multiplied.\n");
        printf("\n");

        int a[r1][c1], b[r2][c2], mul[r1][c2];

        printf("Enter elements of Matrix-A below:\n");

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("A[%d][%d]: ", i, j);
                scanf("%d", &a[i][j]);
            }
        }

        printf ("\nEnter elements of Matrix-B below:\n");

        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("B[%d][%d]: ", i, j);
                scanf("%d", &b[i][j]);
            }
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                mul[i][j] = 0;
                for (int k = 0; k < r2; k++)
                {
                    mul[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("\nThe multiplication of Matrix-A & Matrix-B is:\n");
        printf("\n");

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
            printf("\n");
        }
    }
    else
    {
        printf("\nMatrix-A and Matrix-B can not be multiplied. Try another matrices.\n");
    }

    return 0;
}