#include <cstdio>

int main(int argc, char **argv)
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int m = 0;
    m = a * b;
    int d = 0;
    d = 1;
    while (d != 0)
    {
        d = a % b;
        a = b;
        b = d;
    }
    printf("%d", m / a);
    return 0;
}