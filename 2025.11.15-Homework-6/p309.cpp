#include <stdio.h>
#define SIZE 3

bool eleccion(bool arr[], int len);

int main(int argc, char **argv)
{
    bool arr[SIZE] = {};
    for (int i = 0; i < SIZE; i++)
    {
        int inp = 0;
        scanf("%d", &inp);
        arr[i] = (bool)inp;
    }
    int res = 0;
    res = eleccion(arr, SIZE);
    printf("%d", (int)res);
    return 0;
}

bool eleccion(bool arr[], int len)
{
    int k = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == true)
        {
            k++;
        }
    }
    if (k >= len / 2 + 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}