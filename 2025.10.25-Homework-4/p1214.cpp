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
    int k = 0;
    int el = 0;
    scanf("\n");
    scanf("%d", &el);
    for (i = 0; i < inp; i++)
    {
        if (arr[i] == el)
        {
            k++;
        }
    }
    printf("%d", k);
    return 0;
}