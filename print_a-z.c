#include <stdio.h>
void main()
{
    int i;
    char ch[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
    for (i = 0; i <= 26; i++)
    {
        printf("%c ", ch[i]);
    }
}