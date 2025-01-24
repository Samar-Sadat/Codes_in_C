#include <stdio.h>
#include <string.h>

struct subject
{
    float aem, evs, linux, prob_sol, c;
    char name[20];
} st[5];

int main()
{
    struct subject* p;
    printf("\nEnter Subject Marks:\n");
    printf("\n");
    for(int i = 0; i < 5; i++)
    {
        p = st + i;
        printf("Enter your name: ");
        gets(p->name);
        p->name[strcspn(p->name, "\n")] = '\0';
        printf("Advanced Engineering Mathematics: ");
        scanf("%f", &p->aem);
        getchar();
        printf("Environment Sustainability & Climte Change: ");
        scanf("%f", &p->evs);
        getchar();
        printf("Linux Lab: ");
        scanf("%f", &p->linux);
        getchar();
        printf("Problem Solvinig: ");
        scanf("%f", &p->prob_sol);
        getchar();
        printf("Programming in C: ");
        scanf("%f", &p->c);
        getchar();
        printf("\n");
    }
    printf("PRINTING SUBJECT ALONG WITH MARKS AND NAME:\n");
    printf("\n");
    for(int i = 0; i < 5; i++)
    {
        p = st + i;
        printf("Name: ");
        puts(p->name);
        printf("Advanced Engineering Mathematics: %.2f\n", p->aem);
        printf("Environment Sustainability & Climate Change: %.2f\n", p->evs);
        printf("Linux Lab: %.2f\n", p->linux);
        printf("Problem Solving: %.2f\n", p->prob_sol);
        printf("Programming in C: %.2f\n", p->c);
        printf("\n");
    }
    return 0;
}