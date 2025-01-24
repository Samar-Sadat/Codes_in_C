#include <stdio.h>
#include <math.h>

int reverse(int num)
{
    int c = 0;
    for (int i = num; i > 0; i = i / 10)
    {
        c++;
    }
    double y = c - 1;
    int result = 0;
    for (int i = num; i > 0; i = i / 10)
    {
        int r = i % 10;
        result = r * pow(10.0, y) + result;
        y--;
    }
    return result;
}

int main()
{
    int num;
    printf("\nEnter number to find its reverse: ");
    scanf("%d", &num);
    printf("\nThe reverse of %d is: %d\n", num, reverse(num));
    printf("\n");
}