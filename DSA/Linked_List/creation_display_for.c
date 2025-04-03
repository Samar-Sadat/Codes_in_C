#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
} *stnode;

void display();

void display(struct node* p){
    int i = 1;
    printf("\nDisplaying Nodes...\n\n");
    while(p != NULL)
    {
        printf("The data of node-%d is -> %d\n",i , p->data);
        p = p->next;
        i++;
    }
    printf("\n");
}

int main()
{
    struct node *fnode, *head;
    stnode = (struct node*) malloc(sizeof(struct node));
    head = stnode;

    int n;
    printf("\nEnter the no. of nodes you want to create: ");
    scanf("%d", &n);

    printf("\nEnter the data of node-1: ");
    scanf("%d", &stnode->data);

    fnode = (struct node*) malloc(sizeof(struct node));
    stnode -> next = fnode;

    for (int i = 2; i <= n; i++)
    {
        printf("Enter the data of node-%d: ", i);
        scanf("%d", &fnode->data);

        if (i < n){
        struct node* temp = fnode;
        fnode = (struct node*) malloc(sizeof(struct node));
        temp -> next = fnode;
        }
        else
        {
            fnode->next = NULL;
        }
    }

    display(head);

    return 0;
}