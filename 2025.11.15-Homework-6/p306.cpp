#include <stdio.h>
#define SIZE 4

int mymin(int arr[], int len);

int main(int argc, char **argv)
{
    int arr[SIZE] = {};
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    int res = 0;
    res = mymin(arr, SIZE);
    printf("%d", res);
}

int mymin(int arr[], int len)
{
    int r = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] < r)
        {
            r = arr[i];
        }
    }
    return r;
}