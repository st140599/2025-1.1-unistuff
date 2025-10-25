#include <cstdio>

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
    int start = 0;
    int end = 0;
    scanf("%d %d", &start, &end);
    int m = arr[start - 1];
    int n = start - 1;
    for (i = start - 1; i < end; i++)
    {
        if (arr[i] > m)
        {
            m = arr[i];
            n = i;
        }
    }
    printf("%d %d", m, n + 1);
    return 0;
}