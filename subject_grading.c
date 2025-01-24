#include <stdio.h>

enum grade {A, B, C, D, F};

int main()
{
    int s1, s2, s3;
    enum grade g;
    printf("\nEnter marks of 1st subject: ");
    scanf("%d", &s1);
    printf("Enter marks of 2nd subject: ");
    scanf("%d", &s2);
    printf("Enter marks of 3th subject: ");
    scanf("%d", &s3);
    int avg = (s1 + s2 + s3) / 3;
    if (avg >= 90)
    {
        g = A;
    }
    else if (avg >= 80 && avg <= 89)
    {
        g = B;
    }
    else if (avg >= 70 && avg <= 79)
    {
        g = C;
    }
    else if (avg >= 60 && avg <= 69)
    {
        g = D;
    }
    else if (avg < 60)
    {
        g = F;
    }
    switch (g)
    {
        case A:
        printf("\nGrade : A\n");
        break;
        case B:
        printf("\nGrade : B\n");
        break;
        case C:
        printf("\nGrade : C\n");
        break;
        case D:
        printf("\nGrade : D\n");
        break;
        case F:
        printf("\nGrade : F\n");
        break;
    }
    printf("\n");
    return 0;
}