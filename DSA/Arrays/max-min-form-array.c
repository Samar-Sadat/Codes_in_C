//Rearrange an array in maximum - minimum form using two pointer technique.

#include <stdio.h>
int main()
{
    int n; 
    printf("\nEnter array length: ");
    scanf("%d", &n);
    int arr[n], arr_new[n];
    printf("\nEnter array elements: \n");

    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int *ptr_max = &arr_new[0], *ptr_min = &arr_new[1];
    *ptr_max = arr[0];
    printf("\nThe entered array is: ");

    for (int i = 0; i < n; i++)
    {

        printf("%d%s", arr[i], (i == n-1) ? "\n" : ", ");

        if (i % 2 == 0)
        {
            for (int j = 1; j < n; j++)
            {
                if (i == 0 && arr[j] > *ptr_max)
                {
                    *ptr_max = arr[j];
                }

                else if (arr[j] > *ptr_max && arr[j] < arr_new[i-2])
                {
                    *ptr_max = arr[j];
                }
            }
            ptr_max += 2;
        }

        else
        {
            *ptr_min = arr_new[0];
            for (int j = 0; j < n; j++)
            {
                if (i == 1 && arr[j] < *ptr_min)
                {
                    *ptr_min = arr[j];
                }

                else if (arr[j] < *ptr_min && arr[j] > arr_new[i-2])
                {
                    *ptr_min = arr[j];
                }
            }
            ptr_min += 2;
            *ptr_max = arr_new[1];
        }
    }

    printf("\nThe updated array is: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d%s", arr_new[i], (i == n-1) ? "\n\n" : ", ");
    }
}