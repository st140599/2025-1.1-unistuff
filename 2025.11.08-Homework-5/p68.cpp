#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n = 0;
    scanf("%d\n", &n);
    if (n < 3)
    {
        printf("0");
        return 0;
    }
    int *arr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    int k = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            ++k;
        }
    }
    free(arr);
    printf("%d", k);
    return 0;
}