#include <stdio.h>
#include <stdlib.h>

int main( int argc, char** argv)
{
    int n =0;
    scanf("%d\n", &n);
    int*arr = (int*)calloc(n, sizeof(int));
    for (int i=0;i<n;++i)
    {
        scanf("%d", &arr[i]);
    }
    int k =0;
    for (int i =0; i<n;++i)
    {
        if (arr[i]>0){
            ++k;
        }
    }
    free(arr);
    printf("%d", k);
    return 0;
}