#include <stdio.h>
#include <string.h>

char Toupper(char c);

int main(int argc, char **argv)
{
    char c;
    scanf("%c", &c);
    printf("%c", Toupper(c));
}

char Toupper(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 'A' + (c - 'a');
    }
    else
    {
        return c;
    }
}