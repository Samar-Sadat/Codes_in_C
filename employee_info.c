#include <stdio.h>
#include <string.h>
void main()
{
    int n;
    struct emp
    {
        char name[50];
        float base_pay;
        float gs;
    } empl[100];
    printf("\nNo. of employees to enter their data: ");
    scanf("%d", &n);
    getchar();
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of employee: ");
        gets(empl[i].name);
        empl[i].name[strcspn(empl[i].name, "\n")] = '\0';
        printf("Enter basic pay of employee: ");
        scanf("%f", &empl[i].base_pay);
        getchar();
        printf("\n");
        float da = (empl[i].base_pay / 100) * 52;
        empl[i].gs = da + empl[i].base_pay;
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee Name : ");
        puts(empl[i].name);
        printf("Employee Gross Salary : %.2f\n", empl[i].gs);
        printf("\n");
    }
}