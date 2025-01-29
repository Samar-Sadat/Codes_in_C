//WAP to input 2 m*n matrices and then calculate the sum of their corresponding elements & store it in a third m*n matrix

#include <stdio.h>
int main()
{
    int r, c;

    printf("\nEnter the no. of rows and columns in 'rowsxcolumns' form: ");
    scanf("%dx%d", &r, &c);

    int matrix_1[r][c], matrix_2[r][c], sum[r][c];
    printf("\nEnter elements of 1st matrix below:\n");
    printf("\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("matrix-1[%d][%d]: ", i, j);
            scanf("%d", &matrix_1[i][j]);
        }
    }

    printf("\nEnter elements of 2nd matrix below:\n");
    printf("\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("matrix-2[%d][%d]: ", i, j);
            scanf("%d", &matrix_2[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }

    printf("\nThe sum of matrix-1 and matrix-2 is:\n");
    printf("\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            (r < c) ? printf("%d\t", sum[i][j]) : printf("%d\t\t", sum[i][j]);
        }
        printf("\n");
        printf("\n");
    }

    return 0;
}