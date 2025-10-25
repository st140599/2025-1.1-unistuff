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
        scanf("%d ", &arr[i]);
    }
    for (int i = inp - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}