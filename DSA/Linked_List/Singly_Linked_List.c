#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* creation(){
    struct node *ptr = NULL;
    struct node *tail;
    int res;
    
    printf("Enter 0 to terminate: ");
    scanf("%d", &res);
    while(res != 0)
    {
        struct node* new_node = (struct node*) malloc(sizeof(struct node));
        if (new_node == NULL)
        {
            printf("Memory not allocated.\n");
        }
        else
        {
            if (ptr == NULL){
                ptr = new_node;
                printf("Enter data value: ");
                scanf("%d", &new_node->data);
                tail = new_node;
            }
            else
            {
                printf("Enter data value: ");
                scanf("%d", &new_node->data);
                tail->next = new_node;
                tail = tail->next;
            }
        }
        printf("\n");
        printf("Enter 0 to terminate: ");
        scanf("%d", &res);
        if (res == 0)
        {
            tail -> next = NULL;
        }
    }
    return ptr;
}

struct node* beginning(struct node* ptr){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    printf("\nEnter the node data: ");
    scanf("%d", &new_node->data);
    if (new_node == NULL)
    {
        printf("Memory not allocated.\n");
    }
    else
    {
        if (ptr == NULL)
        {
        
            ptr = new_node;
            new_node->next = NULL;
        }
        else
        {
            new_node->next = ptr;
            ptr = new_node;
        }
    }
    return ptr;
}

void end_insertion(struct node* ptr){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("\nThe memory is not allocated.\n");
    }
    else
    {
        printf("\nEnter node data: ");
        scanf("%d", &new_node->data);
        if (ptr == NULL)
        {
            ptr = new_node;
            new_node->next = NULL;
        }
        else
        {
            while( ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next = NULL;
        }
    }
}

void after_insertion(struct node* ptr, int val){
    while(ptr->data != val)
    {
        ptr = ptr->next;
    }
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        printf("\nEnter the data of node which you want to insert: ");
        scanf("%d", &new_node->data);
        new_node -> next = ptr -> next;
        ptr -> next = new_node;
    }
}

void before_insertion(struct node* ptr, int val){
    while(ptr->next->data != val)
    {
        ptr = ptr->next;
    }
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("\nMemory not allocated.\n");
    }
    else
    {
        printf("\nEnter the data of node which you want to insert: ");
        scanf("%d", &new_node->data);
        new_node -> next = ptr -> next;
        ptr -> next = new_node;
    }
}

void deletion(struct node* ptr, int val){
    while(ptr->next->data != val)
    {
        ptr = ptr -> next;
        if (ptr -> next == NULL){
            break;
        }
    }
    if (ptr -> next == NULL){
        printf("\nNode doesn't exist.\n");
    }
    else{
        struct node* ptr2 = ptr -> next;
        ptr -> next = ptr2 -> next;
        free(ptr2);
    }
}

void deletion_alternate(struct node* ptr){
    struct node* ptr1 = ptr;
    ptr = ptr -> next;
    int count = 1;
    while (ptr != NULL){
        if (ptr == NULL){
            ptr1 -> next = NULL;
        }
        else{
            ptr1 -> next = ptr -> next;
            free(ptr);
            ptr = ptr1 -> next;
        }
        count++;
        ptr1 = ptr;
        ptr = ptr -> next;
    }
}

void after_deletion(struct node* ptr, int val){
    while(ptr -> data != val){
        ptr = ptr -> next;
        if (ptr == NULL || ptr -> next == NULL){
            break;
        }
    }
    if (ptr == NULL || ptr -> next == NULL){
        printf("\nNode doesn't exist.\n");
    }
    else{
        struct node* ptr2 = ptr -> next;
        ptr -> next = ptr2 -> next;
        free(ptr2);
    }
}

void middle_element(struct node* ptr){
    struct node* ptr2 = ptr;
    int count = 0;
    while(ptr != NULL){
        ptr = ptr -> next;
        count++;
    }
    if (count % 2 == 1){
        int mid = (count / 2);
        if (mid == 0){
            printf("\nNo middle element in Linked List.\n");
        }
        else
        {
            count = 0;
            ptr = ptr2;
            while (count != mid){
                ptr = ptr -> next;
                count++;
            }
            printf("\nThe Data of node present at mid of the Linked List is -> %d\n", ptr -> data);
        }
    }
    else{
        int mid1 = (count / 2) - 1;
        if (mid1 == 0){
            printf("\nNo middle elements in Linked List.\n");
        }
        else{
            int mid2 = mid1 + 1;
            count = 0;
            ptr = ptr2;
            while (count != mid1){
                ptr = ptr -> next;
                count++;
            }
            printf("\nThe Data of nodes present at mid of the Linked List are -> %d & %d\n", ptr -> data, ptr -> next -> data);
        }
    }
}

struct node* delete_list(struct node *ptr){
    if (ptr == NULL){
        printf("Linked List is already empty.\n");
    }
    else{
        printf("\nDeleting Linked List...\n");
        struct node* ptr2 = ptr;
        while(ptr != NULL){
            ptr = ptr -> next;
            free(ptr2);
            ptr2 = ptr;
        }
        printf("\nLinked List Deletion is complete.\n");
        return ptr;
    }
}

void display(struct node* p){
    if (p == NULL)
    {
        printf("\nLinked list is empty.\n");
    }
    else
    {
        printf("\nDisplaying Nodes...\n\n");
        int i = 1;
        while (p != NULL)
        {
            printf("The data in node-%d is -> %d\n", i, p->data);
            p = p->next;
            i++;
        }
    }
}

int main()
{
    struct node* head = NULL;
    head = creation(head);
    display(head);
    int res1, res2, res3, data_val, res4, res5, res6, res7, del_val, res8, res9, res01;
    
    begg:
        printf("\nDo you want to create a node in the beginning (0/1): ");
        scanf("%d", &res1);
        if (res1 == 1)
        {
            head = beginning(head);
            display(head);
        }
        else if (res1 != 0)
        {
            printf("\nEnter a valid choice.\n");
            goto begg;
        }
    
    end:
        printf("\nDo you want to create a node in the end (0/1): ");
        scanf("%d", &res2);
        if (res2 == 1)
        {
            end_insertion(head);
            display(head);
        }
        else if (res2 != 0){
            printf("\nEnter a valid choice.\n");
            goto end;
        }
        
    mid:
        printf("\nDo you want to create a node in the mid (0/1): ");
        scanf("%d", &res3);
        if (res3 == 1)
        {
            if (head == NULL){
                printf("\nDo you want to create a linked list (0/1): ");
                scanf("%d", &res5);
                if (res5 == 1)
                {
                    printf("\n");
                    head = creation(head);
                    display(head);
                    goto mid_body;
                }
                else if (res5 != 0)
                {
                    printf("\nEnter a valid choice.\n");
                    goto mid;
                }
            }
            else{
                mid_body:
                    if (res3 == 1)
                    {
                        printf("\nEnter the data value before/after you want to create a node: ");
                        scanf("%d", &data_val);
                        printf("\nFor before, enter '0',\n");
                        printf("For after, enter '1',\n");
                        printf("\nEnter your choice: ");
                        scanf("%d", &res4);
                        if (res4 == 0)
                        {
                            if (head -> data == data_val)
                            {
                                head = beginning(head);
                                display(head);
                            }
                            else
                            {
                                before_insertion(head, data_val);
                                display(head);
                            }
                        }
                        else if (res4 == 1)
                        {
                            after_insertion(head, data_val);
                            display(head);
                        }
                        else
                        {
                            printf("Enter a valid choice.\n");
                            goto mid_body;
                        }
                    }
            }
        }
        else if (res3 != 0)
        {
            printf("\nEnter a valid choice.\n");
            goto mid;
        }
    
    del:
        printf("\nDo you want to delete a node (0/1): ");
        scanf("%d", &res6);
        if (res6 == 1)
        {
            if (head == NULL)
            {
                printf("\nDo you want to create a linked list (0/1): ");
                scanf("%d", &res7);
                if (res7 == 1)
                {
                    printf("\n");
                    head = creation(head);
                    display(head);
                    goto main_del;
                }
                else if (res7 != 0)
                {
                    printf("\nEnter a valid choice.\n");
                    goto del;
                }
            }
            else{
                main_del:
                    printf("\nEnter the data value of node which you want to delete: ");
                    scanf("%d", &del_val);
                    if (head -> data == del_val)
                    {
                       head = head -> next;
                       display(head);
                    }
                    else
                    {
                        deletion(head, del_val);
                        display(head);
                    }
            }
        }
        else if (res6 != 0)
        {
            printf("\nEnter a valid choice.\n");
            goto del;
        }
    
    alt_del:
        printf("\nDo you want to delete alternate elements (0/1): ");
        scanf("%d", &res5);
        if (res5 == 1){
            deletion_alternate(head);
            display(head);
        }
        else if (res5 != 0){
            printf("\nEnter a valid choice.\n");
            goto alt_del;
        }
    after_del:
        printf("\nDo you want to delete a node after a given node (0/1): ");
        scanf("%d", &res9);
        if (res9 == 1){
            if (head == NULL){
                printf("\nThe Linked list is empty.\n");
                printf("\nDo you want to create a linked list (0/1): ");
                scanf("%d", &res01);
                if (res01 == 1)
                {
                    printf("\n");
                    head = creation(head);
                    display(head);
                    goto main_after_del;
                }
                else if (res01 != 0)
                {
                    printf("\nEnter a valid choice.\n");
                    goto after_del;
                }
            }
            else{
                main_after_del:
                    printf("\nEnter the node data whose next node to be deleted: ");
                    scanf("%d", &del_val);
                    after_deletion(head, del_val);
                    display(head);
            }
        }
        else if (res9 != 0){
            printf("\nEnter a valid choice.\n");
            goto after_del;
        }

    mid_el:
        printf("\nDo you want to print the mid element(s) in the Linked List (0/1): ");
        scanf("%d", &res9);
        if (res9 == 1){
            if (head == NULL){
                printf("\nThe Linked list is empty.\n");
                printf("\nDo you want to create a linked list (0/1): ");
                scanf("%d", &res01);
                if (res01 == 1)
                {
                    printf("\n");
                    head = creation(head);
                    display(head);
                    goto main_mid_el;
                }
                else if (res01 != 0)
                {
                    printf("\nEnter a valid choice.\n");
                    goto mid_el;
                }
            }
            else{
                main_mid_el:
                    display(head);
                    middle_element(head);
            }
        }
        else if (res9 != 0){
            printf("\nEnter a valid choice.\n");
            goto mid_el;
        }
    
    list_del:
        printf("\nDo you want to delete the Linked List (0/1): ");
        scanf("%d", &res8);
        if (res8 == 1){
            head = delete_list(head);
            display(head);
        }
        else if (res8 != 0){
            printf("\nEnter a valid choice.\n");
            goto list_del;
        }
    printf("\n");
    return 0;
}