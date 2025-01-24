#include <stdio.h>

int main()
{
    int c;
    printf("\nEnter temperature in Celsius: ");
    scanf("%d", &c);
    int f = (c * 9/5) + 32;
    printf("\n%d*C temperature in Fahrenheit is: %d*F\n", c, f);
    printf("\n");
    return 0;
}