#include <stdio.h>
void main()
{
    int r1, r2, c1, c2, f;
    printf("\n");
    printf("Enter no. of rows and columns for matrix A: ");
    scanf("%d x %d", &r1, &c1);
    printf("Enter no. of rows and columns for matrix B: ");
    scanf("%d x %d", &r2, &c2);
    if (c1 == r2)
    {
        printf("\n");
        printf("Given matrices are compatible for multiplication.\n");
        printf("\n");
        printf("Enter elements of matrix A:\n");
        printf("\n");
        int A[r1][c1], B[r2][c2], mul[r1][c2];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("A[%d][%d] = ", i, j);
                scanf("%d", &A[i][j]);
            }
        }
        printf("\n");
        printf("Enter elements of matrix B:\n");
        printf("\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("B[%d][%d] = ", i, j);
                scanf("%d", &B[i][j]);
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                f = 0;
                for (int k = 0; k < r2; k++)
                {
                    f = f + (A[i][k] * B[k][j]);
                    if (k == (r2 - 1))
                    {
                        mul[i][j] = f;
                    }
                }
            }
        }
        printf("\n");
        printf("Matrix A:\n");
        printf("\n");
        for (int i = 0; i < r1; i++)
        {
            printf("\t");
            for (int j = 0; j < c1; j++)
            {
                printf("%d\t", A[i][j]);
            }
            printf("\n");
            printf("\n");
        }
        printf("Matrix B:\n");
        printf("\n");
        for (int i = 0; i < r2; i++)
        {
            printf("\t");
            for (int j = 0; j < c2; j++)
            {
                printf("%d\t", B[i][j]);
            }
            printf("\n");
            printf("\n");
        }
        printf("Matrix A x B:\n");
        printf("\n");
        for (int i = 0; i < r1; i++)
        {
            printf("\t");
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
        printf("\n");
        printf("Given matrices are not compatible for multiplication.\n");
        printf("\n");
    }
}