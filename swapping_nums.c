#include <stdio.h>
int main()
{
    int num1, num2;
    printf("\nEnter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("\nBefore swapping:\n");
    printf("1st Number : %d\n", num1);
    printf("2nd Number : %d\n", num2);
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nAfter swapping:\n");
    printf("1st Number : %d\n", num1);
    printf("2nd Number : %d\n", num2);
    printf("\n");
    return 0;
}