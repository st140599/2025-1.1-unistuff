#include <cstdio>
#include <cmath>

int main(int argc, char **argv)
{
    long a = 0;
    long b = 0;
    long c = 0;
    long d = 0;
    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
    int x = 0;
    x = -101;
    for (x; x < 101; x++)
    {
        if (a * pow(x, 3) + b * pow(x, 2) + c * x + d == 0)
        {
            printf("%d ", x);
        }
    }
    return 0;
}