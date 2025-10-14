#include <cstdio>
#include <cmath>

int main(int argc, char **argv)
{
    float a = 0;
    float b = 0;
    float c = 0;
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0 && b == 0 && c == 0)
    {
        printf("-1");
    }
    else if (a==0)
    {
        printf("%f", -c/b);
    }
    else if (a==0 && b==0)
    {
        printf("0");
    }
    else
    {
        float d = b * b - 4 * a * c;
        if (d == 0)
        {
            printf("1\n");
            printf("%f", (-b) / 2 / a);
        }
        else if (d < 0)
        {
            printf("0");
        }
        else
        {
            printf("2\n");
            printf("%f\n", (-b + sqrt(d)) / a / 2);
            printf("%f\n", (-b - sqrt(d)) / a / 2);
        }
    }

    return 0;
}