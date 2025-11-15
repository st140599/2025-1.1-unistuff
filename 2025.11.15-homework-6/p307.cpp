#include <stdio.h>

double mypower(double r, int x);

int main(int argc, char **argv)
{
    double r = 0;
    int x = 0;
    scanf("%lf %d", &r, &x);
    double answ = 0;
    answ = mypower(r, x);
    printf("%.0lf", answ);
}

double mypower(double r, int x)
{
    double res = 1;
    for (int i = 0; i < x; i++)
    {
        res = res * r;
    }
    return res;
}