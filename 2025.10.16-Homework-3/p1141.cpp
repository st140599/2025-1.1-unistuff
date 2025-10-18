#include <cstdio>
#include <cmath>

int main(int argc, char **argv)
{
    int a = 0;
    int b = 0;
    int k = 0;
    k++;
    int m = 0;
    scanf("%d", &a);
    do
    {
        scanf(" %d", &b);
        if (a == b)
        {
            ++k;
        }
        else
        {
            k = 1;
        }
        m = fmax(m, k);
        a = b;
    } while (b != 0);
    printf("%d", m);
    return 0;
}