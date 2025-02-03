//WAP using pointers to intechange the second biggest and second smallest no. in the array.

#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter array length: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter array elements:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int *ptr_max = &arr[0], *ptr_min = &arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > *ptr_max)
        {
            ptr_max = &arr[i];
        }

        if (arr[i] < *ptr_min)
        {
            ptr_min = &arr[i];
        }
    }

    int max = *ptr_max, min = *ptr_min;
    ptr_max = &arr[0];
    ptr_min = &arr[0];

    for (int i = 1; i < n; i++)
    {
        if ((arr[i] > *ptr_max && arr[i] != max) || *ptr_max == max)
        {
            ptr_max = &arr[i];
        }

        if ((arr[i] < *ptr_min && arr[i] != min) || *ptr_min == min)
        {
            ptr_min = &arr[i];
        }
    }

    printf("\nThe entered array is -> ");
    for (int i = 0; i < n; i++)
    {
        printf("%d%s", arr[i], (i == n-1) ? "\n" : ", ");
    }

    printf("\nThe second largest is %d and second smallest is %d\n", *ptr_max, *ptr_min);

    int temp = *ptr_max;
    *ptr_max = *ptr_min;
    *ptr_min = temp;

    printf("\nThe updated array is -> ");
    for (int i = 0; i < n; i++)
    {
        printf("%d%s", arr[i], (i == n-1) ? "\n\n" : ", ");
    }
}