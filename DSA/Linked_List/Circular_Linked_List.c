#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* creation(){
    struct node* ptr = NULL;
    struct node* start = NULL;
    int res;
    printf("\nEnter 0 to terminate: ");
    scanf("%d", &res);
    while (res != 0){
        struct node* new_node = (struct node*) malloc(sizeof(struct node));
        if (new_node == NULL){
            printf("\nMemory not allocated.\n");
        }
        else{
            printf("Enter Node data: ");
            scanf("%d", &new_node -> data);
            if (start == NULL){
                start = new_node;
                ptr = start;
            }
            else{
                ptr -> next = new_node;
                ptr = new_node;
            }
            printf("\nEnter 0 to terminate: ");
            scanf("%d", &res);
            if (res == 0){
                ptr -> next = start;
            }
        }
    }
    return start;
}

void display(struct node* ptr){
    if (ptr == NULL){
        printf("\nLinked List is empty...\n");
    }
    else{
        struct node* start = ptr;
        printf("\nDisplaying Nodes...\n\n");
        int i = 1;
        while (1){
            printf("The data of node-%d is -> %d\n", i, ptr -> data);
            ptr = ptr -> next;
            i++;
            if (ptr == start){
                break;
            }
        }
    }
}

struct node* beginning_add(struct node* ptr){
    struct node* start = ptr;
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    if (new_node == NULL){
        printf("\nMemory not allocated.\n");
    }
    else{
        printf("\nEnter Node Data to insert at the beginning: ");
        scanf("%d", &new_node -> data);
        if (start == NULL){
            start = new_node;
            new_node -> next = new_node;
        }
        else{
            new_node -> next = start;
            start = new_node;
            while (ptr -> next != start){
                ptr = ptr -> next;
            }
            ptr -> next = start;
        }
    }
    return start;
}

void ending_add(struct node* ptr){
    struct node* start = ptr;
    while (ptr -> next != start){
        ptr = ptr -> next;
    }
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    if (new_node == NULL){
        printf("\nMemory not allocated.\n");
    }
    else{
        printf("\nEnter Node Data to insert at the end: ");
        scanf("%d", &new_node -> data);
        ptr -> next = new_node;
        new_node -> next = start;
    }
}

struct node* beginning_deletion(struct node* ptr){
    struct node* start = ptr;
    while(ptr -> next != start){
        ptr = ptr -> next;
    }
    start = start -> next;
    free(ptr -> next);
    ptr -> next = start;
    return start;
}

void ending_deletion(struct node* ptr){
    struct node* start = ptr;
    while (ptr -> next -> next != start ){
        ptr = ptr -> next;
    }
    free(ptr -> next);
    ptr -> next = start;
}

void after_deletion(struct node* ptr){
    if (ptr == NULL){
        printf("\nLinked List is empty.\n");
    }
    else{
        struct node* start = ptr;
        int val;
        printf("\nEnter node data to delete next node: ");
        scanf("%d", &val);
        while (ptr -> data != val){
            if (ptr -> next == start){
                ptr = NULL;
                break;
            }
            ptr = ptr -> next;
        }
        if (ptr == NULL){
            printf("\nNode doesn't exist.\n");
            after_deletion(start);
        }
        else{
            struct node* ptr1 = ptr -> next;
            ptr -> next = ptr1 -> next;
            free(ptr1);
        }
    }
}

struct node* list_deletion(struct node* start){
    if (start == NULL){
        printf("\nThe Linked List is already empty.\n");
    }
    else{
        struct node* ptr = start;
        struct node* ptr1 = start;
        while (ptr -> next != start){
            ptr1 = ptr1 -> next;
            free(ptr);
            ptr = ptr1;
        }
        free(ptr);
        start = NULL;
        return start;
    }
}

int main()
{
    struct node* head = NULL;
    int res, res1;

    head = creation();
    display(head);

    beg_add:
        printf("\nDo you want to insert Node at the beginning of Linked List (0/1): ");
        scanf("%d", &res);
        if (res == 1){
            if (head == NULL){
                printf("\nLinked List is empty.\n");
            }
            head = beginning_add(head);
            display(head);
        }
        else if (res != 0){
            printf("\nEnter a valid choice.\n");
            goto beg_add;
        }

    end_add:
        printf("\nDo you want to insert a node at the end of the Circular Linked List (0/1): ");
        scanf("%d", &res);
        if (res == 1){
            if (head == NULL){
                printf("\nLinked List is empty.\n");
            }
            else{
                ending_add(head);
                display(head);
            }
        }
        else if (res != 0){
            printf("\nEnter a valid choice.\n");
            goto end_add;
        }

    beg_del:
        printf("\nDo you want to delete the beginning node (0/1): ");
        scanf("%d", &res);
        if (res == 1){
            if (head == NULL){
                printf("\nLinked List is empty.\n");
            }
            else{
                head = beginning_deletion(head);
                display(head);
            }
        }
        else if (res != 0){
            printf("\nEnter a valid choice.\n");
            goto beg_del;
        }

    end_del:
        printf("\nDo you want to delete the ending node (0/1): ");
        scanf("%d", &res);
        if (res == 1){
            if (head == NULL){
                printf("\nLinked List is empty.\n");
            }
            else{
                ending_deletion(head);
                display(head);
            }
        }
        else if (res != 0){
            printf("\nEnter a valid choice.\n");
            goto end_del;
        }

    after:
        printf("\nDo you want to delete node after a given node in the Linked List (0/1): ");
        scanf("%d", &res);
        if (res == 1){
            after_deletion(head);
            display(head);
        }
        else if (res != 0){
            printf("\nEnter valid response.\n");
            goto after;
        }

    list:
        printf("\nDo you want to delete the Linked List (0/1): ");
        scanf("%d", &res);
        if (res == 1){
            head = list_deletion(head);
            display(head);
        }
        else if (res != 0){
            printf("\nEnter valid response.\n");
            goto list;
        }
    
    printf("\n");
    return 0;
}