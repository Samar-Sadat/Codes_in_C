#include <stdio.h>
void main()
{
    int num[11] = {[10] = '\0'}, max = num[0], max2 = num[0];
    printf("Enter numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (num[i] > max2 && num[i] < max)
        {
            max2 = num[i];
        }
    }
    printf("The second largest number is: %d\n", max2);
}