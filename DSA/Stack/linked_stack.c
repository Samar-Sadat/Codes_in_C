#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* prev;
};

struct node* push (struct node* t){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    if (new_node == NULL){
        printf("\nNode creation unsuccessful.");
        printf("Try push operation again.");
    }
    else{
        printf("Enter number to perform push operation: ");
        scanf("%d", &new_node -> data);
        new_node -> prev = t;
        t = new_node;
        return t;
    }
}

struct node* pop(struct node* t){
    if (t != NULL){
        struct node* ptr = t;
        t = t -> prev;
        free(ptr);
        return t;
    }
    else{
        printf("UNDERFLOW\n");
    }
}

void peek(struct node* t){
    if (t == NULL){
        printf("No elements in stack.\n");
    }
    else{
        printf("The topmost element is -> %d\n", t->data);
    }
}

int main()
{
    struct node* top = NULL;
    int res;
    printf("\nEnter 0 to terminate menu: ");
    scanf("%d", &res);
    while (res != 0)
    {
        ask_push:
            printf("\nDo you want to perform push operation (0/1): ");
            scanf("%d", &res);
            if (res == 1){
                top = push(top);
            }
            else if (res != 0){
                printf("\nEnter a valid choice.\n");
                goto ask_push;
            }

        ask_pop:
            printf("\nDo you want to perform pop operation (0/1): ");
            scanf("%d", &res);
            if (res == 1){
                top = pop(top);
            }
            else if (res != 0){
                printf("\nEnter a valid choice.\n");
                goto ask_pop;
            }

        ask_peek:
            printf("\nDo you want to perform peek operation (0/1): ");
            scanf("%d", &res);
            if (res == 1){
                peek(top);
            }
            else if (res != 0){
                printf("\nEnter a valid choice.\n");
                goto ask_peek;
            }
        
        printf("\nEnter 0 to terminate menu: ");
        scanf("%d", &res);
    }
    if (res == 0){
        printf("\nMenu has been terminated successfully.\n\n");
    }
    return 0;
}