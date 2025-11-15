#include <stdio.h>
#include <math.h>

int binomcoef(int k, int n);

int main(int argc, char **argv)
{
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);
    printf("%d", binomcoef(k, n));
}

int binomcoef(int k, int n)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    return binomcoef(k - 1, n - 1) + binomcoef(k, n - 1);
}