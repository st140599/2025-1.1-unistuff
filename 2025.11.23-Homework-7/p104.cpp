#include <stdio.h>
#include <string.h>

char updownrev(char c);

int main(int argc, char **argv)
{
    char c;
    scanf("%c", &c);
    printf("%c", updownrev(c));
}

char updownrev(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 'A' + (c - 'a');
    }
    else if (c >= 'A' && c <= 'Z')
    {
        return 'a' + (c - 'A');
    }
    else
    {
        return c;
    }
}