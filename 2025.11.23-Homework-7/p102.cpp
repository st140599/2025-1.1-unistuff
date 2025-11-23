#include <stdio.h>
#include <string.h>

bool isdigit(char c);

int main(int argc, char **argv)
{
    char c;
    scanf("%c", &c);
    if (isdigit(c))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}

bool isdigit(char c)
{
    if (c >= '0' && c <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}