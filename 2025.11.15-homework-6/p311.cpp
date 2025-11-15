#include <stdio.h>

double mypower(double r, int x);

int main(int argc, char **argv)
{
    double r = 0;
    int x = 0;
    scanf("%lf %d", &r, &x);
    double answ = 0;
    answ = mypower(r, x);
    printf("%lf", answ);
}

double mypower(double r, int x)
{
    if (x == 0)
    {
        return 1;
    }
    double res = 1;
    if (x < 0)
    {
        r = 1 / r;
        x = -x;
    }
    while (x > 0)
    {
        if (x % 2 == 1)
        {
            res *= r;
        }
        r *= r;
        x /= 2;
    }
    return res;
}