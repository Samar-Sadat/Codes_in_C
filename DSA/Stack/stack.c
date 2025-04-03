#include <stdio.h>
int top = -1;

void push(int n, int* a){
    if (top == n-1)
    {
        printf("OVERFLOW\n");
    }
    else{
        top++;
        int num;
        printf("Enter number to push: ");
        scanf("%d", &num);
        *(a + top) =  num;
    }
}

void pop()
{
    if (top == -1){
        printf("UNDERFLOW\n");
    }
    else if (top == 0){
        top = -1;
    }
    else{
        top--;
    }
}

int peek(int* a){
    if (top == -1){
        printf("No element in stack.\n");
    }
    else{
        printf("The topmost element is -> %d\n", *(a + top));
    }
}

int main()
{
    int max = 10, res;
    size_stack:
        printf("\nNOTE: Default size of stack is 10 elements.");
        printf("\nDo you want to change the size of stack (0/1): ");
        scanf("%d", &res);
        if (res == 1){
            printf("Enter size of stack: ");
            scanf("%d", &max);
            int arr[max];
        }
        else if (res != 0){
            printf("\nEnter a valid choice.\n");
            goto size_stack;
        }
    int arr[max];
    printf("\nEnter 0 to terminate menu: ");
    scanf("%d", &res);
    while (res != 0)
    {
        ask_push:
            printf("\nDo you want to perform push operation (0/1): ");
            scanf("%d", &res);
            if (res == 1){
                push(max, arr);
            }
            else if (res != 0){
                printf("\nEnter a valid choice.\n");
                goto ask_push;
            }

        ask_pop:
            printf("\nDo you want perform pop operation (0/1): ");
            scanf("%d", &res);
            if (res == 1){
                pop();
            }
            else if (res != 0){
                printf("\nEnter a valid response.\n");
                goto ask_pop;
            }

        ask_peek:
            printf("\nDo you want to perform peek operation (0/1): ");
            scanf("%d", &res);
            if (res == 1){
                peek(arr);
            }
            else if (res != 0){
                printf("\nEnter a valid response.\n");
                goto ask_peek;
            }
        
        printf("\nEnter 0 to terminate: ");
        scanf("%d", &res);
    }
    
    if (res == 0){
        printf("\nMenu has been terminated successfully.\n\n");
    }

    return 0;
}