#include <stdio.h>
#include <math.h>

int prime(long long x);

int main(int argc, char **argv)
{
    long long x = 0;
    scanf("%lld", &x);
    if (prime(x) == 1)
    {
        printf("prime");
    }
    else
    {
        printf("composite");
    }
}

int prime(long long x)
{
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}