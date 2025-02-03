//Find sum of all array elements using recursion

#include <stdio.h>

float sum(int *ptr1, int *len)
{
    static int count1 = 1, temp = 0;
    if (count1 == *len)
    {
        temp += *ptr1;
        return temp;
    }
    else
    {
        temp += *ptr1;
        ptr1++;
        count1++;
        return sum(ptr1, len);
    }
}

int main()
{
    int n;

    printf("\nEnter length of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter elements of array:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }

    float arr_sum = sum(arr, &n);

    printf("\nThe sum of the entered array is -> %.1f\n\n", arr_sum);
    return 0;
}