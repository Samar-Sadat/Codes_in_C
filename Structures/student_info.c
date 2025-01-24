#include <stdio.h>
void main()
{
    struct student
    {
        char name[30];
        int roll_number;
        float marks;
    } s1, s2;

    printf("Enter the name of first student: ");
    gets(s1.name);
    printf("Enter the roll number of first student: ");
    scanf("%d", &s1.roll_number);
    printf("Enter the marks of first student: ");
    scanf("%f", &s1.marks);
    printf("Enter the name of second student: ");
    gets(s2.name);
    printf("Enter the roll number of second student: ");
    scanf("%d", &s2.roll_number);
    printf("Enter the marks of second student: ");
    scanf("%f", &s2.marks);
    printf("First Student : ");
    puts(s1.name);
    printf("Roll number : %d\n", s1.roll_number);
    printf("Marks : %.2f\n", s1.marks);
    printf("Second Student : ");
    puts(s2.name);
    printf("Roll number : %d\n", s2.roll_number);
    printf("Marks : %.2f\n", s2.marks);
}