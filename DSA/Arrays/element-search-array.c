//Store 'n' no.s (integers or real) in an array. Conduct a linear search for a given number and report success or failure in the form of a suitable message.

#include <stdio.h>
int main()
{
    int n;

    printf("\nEnter length of array: ");
    scanf("%d", &n);
    printf("\nEnter elements of array:\n");
    int arr[n], num, count = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Element:%d -> ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the number that you want to search in the array: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }

    (count > 0) ? printf("\n%d is present in the entered array.\n\n", num) : printf("\n%d is not present in the entered array.\n\n", num);

    return 0;
}