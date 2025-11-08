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
    int *temp = (int *)calloc(n, sizeof(int));
    for (int i=n-1;i>=0;--i)
    {
        temp[n-1 - i]=arr[i];
    }
        for (int i = 0; i < n; ++i)
    {
        printf("%d ", temp[i]);
    }
    free(temp);
    free(arr);
    return 0;
}