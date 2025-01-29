
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