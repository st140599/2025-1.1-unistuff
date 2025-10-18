#include <cstdio>

int main(int argc, char **argv)
{
    double x = 0;
    double y = 0;
    scanf("%lf %lf", &x, &y);
    int n = 0;
    n = 1;
    while (x < y && x - y > 0.000001)
    {
        x += x * 1.15;
        ++n;
    }
    printf("%d", n);
    return 0;
}