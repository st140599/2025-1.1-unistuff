#include <cstdio>
#include <cmath>

int main(int argc, char **argv)
{
    int b = 0;
    int k = 0;
    int m = 0;
    int n = 0;
    scanf("%d", &n);
    do
    {
        scanf(" %d", &b);
        if (b > 0)
        {
            ++k;
        }
        else
        {
            k = 0;
        }
        m = fmax(m, k);
        --n;
    } while (n != 0);
    printf("%d", m);
    return 0;
}