#include <cstdio>
#include <cmath>

int main(int argc, char **argv)
{
    int b = 0;
    int m = 0;
    int mm = 0;
    scanf("%d", &mm);
    do
    {
        scanf(" %d", &b);
        if (b > mm)
        {
            m = mm;
            mm = b;
        }
        if (b > m && b < mm)
        {
            m = b;
        }
    } while (b != 0);
    printf("%d", m);
    return 0;
}