#include <stdio.h>
void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int num[n];
    printf("Enter numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int max = num[0], max2 = num[0];
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max2 && num[i] < max)
        {
            max2 = num[i];
        }
    }
    printf("The second largest number is: %d\n", max2);
}