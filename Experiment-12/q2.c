#include <stdio.h>
# define is_even(x) ((x % 2 == 0) ? printf("%d is even.\n", x) : printf("%d is odd.\n", x))
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    is_even(num);
    return 0;
}