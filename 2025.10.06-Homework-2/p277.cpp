#include <cstdio>
#include <cmath>

int main(int argc, char **argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    bool f = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a != 0)
    {
        printf("%d", a);
        f = 1;
    }
    if (b != 0)
    {
        if (f)
        {
            if (b > 0)
            {
                printf("+");
            }
        }
        if (b == -1)
        {
            printf("-");
        }
        else if (b == 1)
        {
        }
        else
        {
            printf("%d", b);
        }
        printf("x");
        f = 1;
    }

    if (c != 0)
    {
        if (f)
        {
            if (c > 0)
            {
                printf("+");
            }
        }
        if (c == -1)
        {
            printf("-");
        }
        else if (c == 1)
        {
        }
        else
        {
            printf("%d", c);
        }
        printf("y");
        f = 1;
    }
    if (f == 0)
    {
        printf("0");
    }
    return 0;
}