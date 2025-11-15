#include <stdio.h>
#include <math.h>

int ubonacci(int n);

int main(int argc, char **argv)
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", ubonacci(n));
}

int ubonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return ubonacci(n - 1) + ubonacci(n - 2);
}