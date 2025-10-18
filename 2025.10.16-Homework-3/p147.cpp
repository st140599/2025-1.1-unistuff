#include <cstdio>

int main(int argc, char **argv)
{
    long a = 0;
    long b = 1;
    long f = a + b;
    int n = 2;
    int r = 0;
    scanf("%d", &r);
    if (r == 0)
    {
        printf("0");
    }
    else if (r == 1)
    {
        printf("1");
    }
    else if (r == 2)
    {
        printf("1");
    }
    else
    {
        while (n != r)
        {
            a = b;
            b = f;
            f = a + b;
            ++n;
        }
        printf("%d", f);
    }
    return 0;
}