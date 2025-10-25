#include <cstdio>
#include <cmath>

int main(int argc, char **argv)
{
    int arr[1000] = {};
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    a--;
    b--;
    c--;
    d--;
    n--;
    for (int i = 0; i <= n; i++)
    {
        arr[i] = i + 1;
    }
    int ab[b - a + 1] = {};
    for (int i = a; i <= b; i++)
    {
        ab[i - a] = arr[b - i + a];
    }
    for (int i = a; i <= b; i++)
    {
        arr[i] = ab[i - a];
    }
    int cd[d - c + 1] = {};
    for (int i = c; i <= d; i++)
    {
        cd[i - c] = arr[d - i + c];
    }
    for (int i = c; i <= d; i++)
    {
        arr[i] = cd[i - c];
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
}