#include <stdio.h>
int main()
{
    int x = 5, y = 7;
    printf("1st Number (num1): %d\n", x);
    printf("2nd Number (num2): %d\n", y);
    printf("Bitwise AND: %d\n", x & y);
    printf("Bitwise OR: %d\n", x | y);
    printf("Bitwise NOT (num1): %d\n", ~x);
    printf("Bitwise NOT (num2): %d\n", ~y);
    return 0;
}