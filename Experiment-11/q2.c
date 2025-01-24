#include <stdio.h>
int main()
{
    int x = 6;
    printf("\n");
    printf("Using left shift and right shift on %d.\n", x);
    printf("Left Shift (by 2 bits): %d\n", x << 2);
    printf("Right shift (by 2 bits): %d\n", x >> 2);
    printf("Left shift (by 3 bits): %d\n", x << 3);
    printf("Right shift (by 3 bits): %d\n", x >> 3);
    printf("\n");
    int y = 12;
    printf("Using left shift and right shift on %d.\n", y);
    printf("Left shift (by 2 bits): %d\n", y << 2);
    printf("Right shift (by 2 bits): %d\n", y >> 2);
    printf("Left shift (by 3 bits): %d\n", y << 3);
    printf("Right shift (by 3 bits): %d\n", y >> 3);
    printf("\n");
    return 0;
}