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
    int mx = arr[0];
    int mn = arr[0];
    for (int i = 0; i < inp; i++)
    {
        mx = fmax(mx, arr[i]);
        mn = fmin(mn, arr[i]);
    }
    for (int i = 0; i < LEN; i++)
    {
        if (arr[i] == mx)
        {
            arr[i] = mn;
        }
        printf("%d ", arr[i]);
    }
    return 0;
}