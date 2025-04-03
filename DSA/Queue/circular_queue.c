#include <stdio.h>

int front = -1, rear = -1;

void insertion(int n, int* a){
    if (front == 0 && rear == (n-1))
    {
        printf("OVERFLOW\n");
    }
    else{
        int num;
        printf("Enter number to perform push operation: ");
        scanf("%d", &num);
        if (rear == n-1)
        {
            rear = 0;
        }
        else if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear++;
        }
        *(a+rear) = num;
    }
}

void deletion(int n, int* a)
{
    if (front == -1 && rear == -1)
    {
        printf("UNDERFLOW.\n");
    }
    else
    {
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == n-1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
}

void print(int n, int* a)
{
    if (front == -1 && rear == -1)
    {
        printf("No element in queue.\n");
    }
    else
    {
        printf("The queue is: ");
        for (int i = front; i <= rear; i++)
        {
            if (i == rear)
            {
                printf("%d\n", *(a+i));
            }
            else{
                printf("%d, ", *(a+i));
            }
            if (front > rear && i == n-1){
                i = -1;
            }
        }
    }
}

int main()
{
    int res, max = 10;
    printf("\nNOTE: Default size of queue is 10 elements.\n");
    size_queue:
        printf("Do you want to change queue size (0/1): ");
        scanf("%d", &res);
        if (res == 1)
        {
            printf("Enter queue size: ");
            scanf("%d", &max);
        }
        else if (res != 0)
        {
            printf("Enter a valid choice.\n");
            goto size_queue;
        }
    
    int arr[max];
    printf("\nEnter 0 to terminate menu: ");
    scanf("%d", &res);
    while (res != 0)
    {
        ask_insert:
            printf("\nDo you want to insert element (0/1): ");
            scanf("%d", &res);
            if (res == 1)
            {
                insertion(max, arr);
            }
            else if (res != 0)
            {
                printf("Enter a valid choice.\n");
                goto ask_insert;
            }

        ask_del:
            printf("\nDo you want to delete element (0/1): ");
            scanf("%d", &res);
            if (res == 1){
                deletion(max, arr);
            }
            else if (res != 0)
            {
                printf("Enter a valid choice.\n");
                goto ask_del;
            }

        ask_print:
            printf("\nDo you want to print queue (0/1): ");
            scanf("%d", &res);
            if (res == 1)
            {
                print(max, arr);
            }
            else if (res != 0)
            {
                printf("Enter a valid choice.\n");
                goto ask_print;
            }
        printf("\nEnter 0 to terminate menu: ");
        scanf("%d", &res);
    }
    printf("\nMenu has been terminated successfully.\n\n");
    return 0;
}