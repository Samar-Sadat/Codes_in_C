#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
};

struct node* creation(){
    struct node* start = NULL;
    struct node* ptr = start;
    int res;
    int i = 1;
    printf("\nEnter 0 to terminate: ");
    scanf("%d", &res);
    while (res != 0){
        struct node* new_node = (struct node*) malloc(sizeof(struct node));
        if (new_node == NULL){
            printf("Memory not allocated.\n");
        }
        else{
            printf("Enter node-%d data: ", i);
            scanf("%d", &new_node -> data);
            if (start == NULL){
                ptr = new_node;
                start = ptr;
                ptr -> prev = NULL;
                ptr -> next = NULL;
            }
            else{
                ptr -> next = new_node;
                new_node -> prev = ptr;
                new_node -> next = NULL;
                ptr = new_node;
            }
            i++;
            printf("\nEnter 0 to terminate: ");
            scanf("%d", &res);
        }
    }
    return start;
}

void display(struct node* ptr){
    if (ptr == NULL){
        printf("\nLinked List is empty.\n");
    }
    else{
        int i = 1;
        printf("\n");
        while (ptr != NULL){
            printf("The node-%d data is -> %d\n", i, ptr -> data);
            ptr = ptr -> next;
            i++;
        }
    }
}

struct node* insertion(struct node* ptr){
    if (ptr == NULL){
        printf("\nLinked List is empty.\n");
    }
    else{
        int res;
        struct node* start = ptr;
        begg:
            printf("\nDo you want to insert node at the beginning of the Linked List (0/1): ");
            scanf("%d", &res);
            if (res == 1){
                struct node* new_node = (struct node*) malloc(sizeof(new_node));
                if (new_node == NULL){
                    printf("Memory not allocated.\n");
                }
                else{
                    printf("\nEnter node data: ");
                    scanf("%d", &new_node -> data);
                    new_node -> next = ptr;
                    ptr -> prev = new_node;
                    ptr = new_node;
                    start = ptr;
                    display(start);
                }
            }
            else if (res != 0){
                printf("\nEnter valid response.\n");
                goto begg;
            }

        end:
            printf("\nDo you want to insert node at the end of the Linked List (0/1): ");
            scanf("%d", &res);
            if (res == 1){
                struct node* new_node = (struct node*) malloc(sizeof(struct node));
                if (new_node == NULL){
                    printf("Memory not allocated.\n");
                }
                else{
                    printf("\nEnter node data: ");
                    scanf("%d", &new_node -> data);
                    while (ptr -> next != NULL){
                        ptr = ptr -> next;
                    }
                    ptr -> next = new_node;
                    new_node -> prev = ptr;
                    new_node -> next = NULL;
                    display(start);
                }
            }
            else if (res != 0){
                printf("\nEnter valid response.\n");
                goto end;
            }
        
        int val;
        after:
            ptr = start;
            printf("\nDo you want to insert node after a given node in the Linked List (0/1): ");
            scanf("%d", &res);
            if (res == 1){
                printf("\nEnter data of node to insert node after: ");
                scanf("%d", &val);
                struct node* new_node = (struct node*) malloc (sizeof(struct node));
                if (new_node == NULL){
                    printf("Memory not allocated.\n");
                }
                else{
                    while (ptr -> data != val){
                        if (ptr -> next == NULL){
                            res = 2;
                            break;
                        }
                        ptr = ptr -> next;
                    }
                    if (res == 2){
                        printf("\nNode doesn't exist in the Linked List.\n");
                        goto after;
                    }
                    else{
                        printf("Enter node data: ");
                        scanf("%d", &new_node -> data);
                        new_node -> next = ptr -> next;
                        new_node -> prev = ptr;
                        ptr -> next = new_node;
                        new_node -> next -> prev = new_node;
                    }
                    display(start);
                }
            }
            else if (res != 0){
                printf("\nEnter valid response.\n");
                goto after;
            }

        before:
            ptr = start;
            printf("\nDo you want to insert node before a given node in the Linked List (0/1): ");
            scanf("%d", &res);
            if (res == 1){
                printf("\nEnter data of node to insert node before: ");
                scanf("%d", &val);
                struct node* new_node = (struct node*) malloc(sizeof(struct node));
                if (new_node == NULL){
                    printf("Memory not allocated.\n");
                }
                else{
                    while (ptr -> data != val){
                        if (ptr -> next == NULL){
                            res = 2;
                            break;
                        }
                        ptr = ptr -> next;
                    }
                    if (res == 2){
                        printf("\nNode doesn't exist in the Linked List.\n");
                        goto before;
                    }
                    else{
                        printf("Enter node data: ");
                        scanf("%d", &new_node -> data);
                        new_node -> next = ptr;
                        new_node -> prev = ptr -> prev;
                        ptr -> prev = new_node;
                        new_node -> prev -> next = new_node;
                    }
                    display(start);
                }
            }
            else if (res != 0){
                printf("\nEnter valid response.\n");
                goto before;
            }
        return start;
    }
}

struct node* deletion(struct node* ptr){
    struct node* start = ptr;
    int res;
    begg:
        printf("\nDo you want to delete the beginning node in the Linked List (0/1): ");
        scanf("%d", &res);
        if (res == 1){
            start = start -> next;
            free(ptr);
            ptr = start;
            start -> prev = NULL;
            display(start);
        }
        else if (res != 0){
            printf("\nEnter valid response.\n");
            goto begg;
        }

    end:
        ptr = start;
        printf("\nDo you want to delete the end node in the Linked List (0/1): ");
        scanf("%d", &res);
        if (res == 1){
            while (ptr -> next -> next != NULL){
                ptr = ptr -> next;
            }
            free(ptr -> next);
            ptr -> next = NULL;
            display(start);
        }
        else if (res != 0){
            printf("\nEnter valid response.\n");
            goto end;
        }

    int val;
    after:
        ptr = start;
        printf("\nDo you want to delete node after a given node in the Linked List (0/1): ");
        scanf("%d", &res);
        if (res == 1){
            printf("\nEnter node data to delete node next to it: ");
            scanf("%d", &val);
            do{
                if (ptr -> next == NULL){
                    res = 2;
                    break;
                }
                ptr = ptr -> next;
            } while (ptr -> prev -> data != val);
            if (res == 2){
                printf("\nNode doesn't exist in the Linked List.\n");
                goto after;
            }
            else{
                ptr -> prev -> next = ptr -> next;
                ptr -> next -> prev = ptr -> prev;
                free(ptr);
            }
            display(start);
        }
        else if (res != 0){
            printf("\nEnter valid response.\n");
            goto after;
        }

    before:
        ptr = start;
        printf("\nDo you want to delete node before a given node in the Linked List (0/1): ");
        scanf("%d", &res);
        if (res == 1){
            printf("\nEnter node data to delete its previous node: ");
            scanf("%d", &val);
            while (ptr -> next -> data != val){
                if (ptr -> next -> next == NULL){
                    res = 2;
                    break;
                }
                ptr = ptr -> next;
            }
            if (res == 2){
                printf("\nNode doesn't exit in the Linked List.\n");
                goto before;
            }
            else{
                ptr -> prev -> next = ptr -> next;
                ptr -> next -> prev = ptr -> prev;
                free(ptr);
            }
            display(start);
        }
        else if (res != 0){
            printf("\nEnter valid response.\n");
            goto before;
        }

    return start;
}

int main()
{
    struct node* head = NULL;
    head = creation();
    display(head);
    int res;
    insert:
        printf("\nDo you want to insert a node in the Linked List (0/1): ");
        scanf("%d", &res);
        if (res == 1){
            head = insertion(head);
        }
        else if (res != 0){
            printf("\nEnter valid response.\n");
            goto insert;
        }
        printf("\nThe Linked List looks like:\n");
        display(head);

    delete:
        printf("\nDo you want to delete a node in the Linked List (0/1): ");
        scanf("%d", &res);
        if (head == NULL){
            printf("\nLinked List is empty.\n");
        }
        else{
            if (res == 1){
                head = deletion(head);
            }
            else if (res != 0){
                printf("\nEnter valid response.\n");
                goto delete;
            }
        }
        printf("\nThe Linked List looks like:\n");
        display(head);
    printf("\n");
    
    return 0;
}