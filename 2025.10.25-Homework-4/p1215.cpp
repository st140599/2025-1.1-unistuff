#include <cstdio>
#include <cmath>

int main(int argc, char **argv)
{
    int inp = 0;
    scanf("%d\n", &inp);
    int arr[inp];
    int i = 0;
    for (i = 0; i < inp; i++)
    {
        scanf("%d", &arr[i]);
    }
    int mod = 0;
    scanf("%d", &mod);
    int mn = 10000;
    for (int i = 0; i < inp; i++)
    {
        if (abs(mod - mn) > abs(mod - arr[i]))
        {
            mn = arr[i];
        }
    }
    printf("%d", mn);
    return 0;
}