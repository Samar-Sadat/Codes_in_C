#include <stdio.h>
#include <string.h>
struct student {
    int rollno;
    char name[10];
    int sap_id;
    int package;
};
int main()
{
    int i, n;
    printf("\nEnter the no. of students: ");
    scanf("%d", &n);
    struct student st[n];
    printf("\nEnter Records of 5 students\n");
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Roll no.: ");
        scanf("%d", &st[i].rollno);
        printf("Enter Name: ");
        scanf("%s", &st[i].name);
        printf("Enter SAP ID: ");
        scanf("%d", &st[i].sap_id);
        printf("Enter Package: ");
        scanf("%d", &st[i].package);
    }
    printf("\nStudent Information List:\n\n");
    for (i = 0; i < n; i++)
    {
        printf("Roll no: %d, Name: %s, SAP ID: %d, Package: %d\n", st[i].rollno, st[i].name), st[i].sap_id, st[i].package;
    }
    printf("\n");
    return 0;
}