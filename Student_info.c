#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char choice1, choice2, choice3;

    struct student
    {
        char name[50];
        float maths, physics, chemistry, english, percentage;
        int id;
    } stu[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\nDo you want to add new student? (Y/N)\n");
        scanf("%c", &choice1);
        getchar();
        if (choice1 == 'Y' || choice1 == 'y')
        {
            printf("\nEnter student name: ");
            gets(stu[i].name);
            stu[i].name[strcspn(stu[i].name, "\n")] = '\0';
            printf("Enter student id: ");
            scanf("%d", &stu[i].id);
            getchar();
            printf("Enter maths marks: ");
            scanf("%f", &stu[i].maths);
            getchar();
            printf("Enter physics marks: ");
            scanf("%f", &stu[i].physics);
            getchar();
            printf("Enter chemistry marks: ");
            scanf("%f", &stu[i].chemistry);
            getchar();
            printf("Enter english marks: ");
            scanf("%f", &stu[i].english);
            getchar();
            float total_marks = stu[i].maths + stu[i].chemistry + stu[i].english + stu[i].physics;
            float max_marks = 400;
            stu[i].percentage = (total_marks / max_marks) * 100;
        }
        printf("\nDo you want to display all student's details? (Y/N)\n");
        scanf("%c", &choice2);
        getchar();
        if (choice2 == 'Y' || choice2 == 'y')
        {
            for (int j = 0; j <= i; j++)
            {
                printf("\nStudent Name : ");
                puts(stu[j].name);
                printf("Student ID : %d\n", stu[j].id);
                printf("Maths Marks : %.2f\n", stu[j].maths);
                printf("Physics Marks : %.2f\n", stu[j].physics);
                printf("Chemistry Marks : %.2f\n", stu[j].chemistry);
                printf("English Marks : %.2f\n", stu[j].english);
                printf("Student Percentage : %.2f\n", stu[j].percentage);
            }
        }
        printf("\nDo you want to exit the program? (Y/N)\n");
        scanf("%c", &choice3);
        getchar();
        if (choice3 == 'Y' || choice3 == 'y')
        {
            exit (0);
        }
    }
    printf("\n");
    return 0;
}