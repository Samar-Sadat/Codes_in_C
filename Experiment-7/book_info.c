#include <stdio.h>
#include <string.h>

struct book
{
    int book_id;
    char title[50];
    char author[50];
    float price;
} a;

void book_det(struct book c)
{
    printf("Book ID : %d\n", c.book_id);
    printf("Book Title : ");
    puts(c.title);
    printf("Book Author : ");
    puts(c.author);
    printf("Book Price : %.2f\n", c.price);
}

int main()
{
    printf("Enter book ID: ");
    scanf("%d", &a.book_id);
    getchar();
    printf("Enter book title: ");
    gets(a.title);
    printf("Enter book author: ");
    gets(a.author);
    printf("Enter book price: ");
    scanf("%f", &a.price);
    getchar();
    a.author[strcspn(a.author, "\n")] = '\0';
    a.title[strcspn(a.title, "\n")] = '\0';
    printf("\n");
    book_det(a);
    printf("\n");
    return 0;
}