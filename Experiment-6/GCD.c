#include <stdio.h>
//greatest common divisor function
int GCD(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return GCD(num2, num1 % num2);
    }
}
//main code block
void main()
{
    int num1, num2;
    printf("\n");
    printf("Enter two numbers:- \n");
    printf("\n");
    printf("Enter the first number i.e. num1: ");
    scanf("%d", &num1);
    printf("Enter the second number i.e. num2: ");
    scanf("%d", &num2);
    printf("\n");
    printf("The Greatest Common Divisor of %d and %d is: %d\n", num1, num2, GCD(num1, num2));
    printf("\n");
}