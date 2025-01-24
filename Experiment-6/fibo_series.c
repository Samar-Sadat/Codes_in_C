#include <stdio.h>
int FIBO(int num)
{
    if (num <= 1)
    {
        return num;
    }
    else
    {
        return FIBO(num - 1) + FIBO(num - 2);
    }
}
void main()
{
    int num;
    printf("\n");
    printf("Enter the term upto which you want to print the fibonacci sequence : ");
    scanf("%d", &num);
    printf("\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", FIBO(i));
    }
    printf("\n");
    printf("\n");
}