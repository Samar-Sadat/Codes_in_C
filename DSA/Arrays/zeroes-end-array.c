#include <stdio.h>
int main()
{
    int n, index = 0;
    printf("\nEnter the length of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter elemenst of array:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    while (index < n)
    {
        arr[index] = 0;
        index++;
    }

    printf("\nUpdated array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d%s", arr[i], (i == n-1) ? "\n" : ", ");
    }

    return 0;
}