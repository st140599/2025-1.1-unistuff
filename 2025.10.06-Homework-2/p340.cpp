#include <cstdio>
#include <cmath>

int main(int argc, char **argv)
{
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;
    int n5 = 0;
    int n6 = 0;
    scanf("%d %d %d\n", &n1, &n2, &n3);
    scanf("%d %d %d", &n4, &n5, &n6);
    if (n1 <= n2 && n2 <= n3 && n4 <= n5 && n5 <= n6)
    {
        if (n4 == n1 && n5 == n2 && n6 == n3)
        {
            printf("Boxes are equal");
        }
        else if (n1 <= n4 && n2 <= n5 && n3 <= n6)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n4 <= n1 && n5 <= n2 && n6 <= n3)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n1 <= n2 && n2 <= n3 && n4 <= n6 && n6 <= n5)
    {
        if (n4 == n1 && n6 == n2 && n5 == n3)
        {
            printf("Boxes are equal");
        }
        else if (n1 <= n4 && n2 <= n6 && n3 <= n5)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n4 <= n1 && n6 <= n2 && n5 <= n3)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n1 <= n2 && n2 <= n3 && n5 <= n4 && n4 <= n6)
    {
        if (n5 == n1 && n4 == n2 && n6 == n3)
        {
            printf("Boxes are equal");
        }
        else if (n1 <= n5 && n2 <= n4 && n3 <= n6)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n5 <= n1 && n4 <= n2 && n6 <= n3)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n1 <= n2 && n2 <= n3 && n5 <= n6 && n6 <= n4)
    {
        if (n5 == n1 && n6 == n2 && n4 == n3)
        {
            printf("Boxes are equal");
        }
        else if (n1 <= n5 && n2 <= n6 && n3 <= n4)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n5 <= n1 && n6 <= n2 && n4 <= n3)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n1 <= n2 && n2 <= n3 && n6 <= n4 && n4 <= n5)
    {
        if (n6 == n1 && n4 == n2 && n5 == n3)
        {
            printf("Boxes are equal");
        }
        else if (n1 <= n6 && n2 <= n4 && n3 <= n5)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n6 <= n1 && n4 <= n2 && n5 <= n3)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n1 <= n2 && n2 <= n3 && n6 <= n5 && n5 <= n4)
    {
        if (n6 == n1 && n5 == n2 && n4 == n3)
        {
            printf("Boxes are equal");
        }
        else if (n1 <= n6 && n2 <= n5 && n3 <= n4)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n6 <= n1 && n5 <= n2 && n4 <= n3)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n1 <= n3 && n3 <= n2 && n4 <= n5 && n5 <= n6)
    {
        if (n4 == n1 && n5 == n3 && n6 == n2)
        {
            printf("Boxes are equal");
        }
        else if (n1 <= n4 && n3 <= n5 && n2 <= n6)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n4 <= n1 && n5 <= n3 && n6 <= n2)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n1 <= n3 && n3 <= n2 && n4 <= n6 && n6 <= n5)
    {
        if (n4 == n1 && n6 == n3 && n5 == n2)
        {
            printf("Boxes are equal");
        }
        else if (n1 <= n4 && n3 <= n6 && n2 <= n5)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n4 <= n1 && n6 <= n3 && n5 <= n2)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n1 <= n3 && n3 <= n2 && n5 <= n4 && n4 <= n6)
    {
        if (n5 == n1 && n4 == n3 && n6 == n2)
        {
            printf("Boxes are equal");
        }
        else if (n1 <= n5 && n3 <= n4 && n2 <= n6)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n5 <= n1 && n4 <= n3 && n6 <= n2)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n1 <= n3 && n3 <= n2 && n5 <= n6 && n6 <= n4)
    {
        if (n5 == n1 && n6 == n3 && n4 == n2)
        {
            printf("Boxes are equal");
        }
        else if (n1 <= n5 && n3 <= n6 && n2 <= n4)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n5 <= n1 && n6 <= n3 && n4 <= n2)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n1 <= n3 && n3 <= n2 && n6 <= n4 && n4 <= n5)
    {
        if (n6 == n1 && n4 == n3 && n5 == n2)
        {
            printf("Boxes are equal");
        }
        else if (n1 <= n6 && n3 <= n4 && n2 <= n5)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n6 <= n1 && n4 <= n3 && n5 <= n2)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n1 <= n3 && n3 <= n2 && n6 <= n5 && n5 <= n4)
    {
        if (n6 == n1 && n5 == n3 && n4 == n2)
        {
            printf("Boxes are equal");
        }
        else if (n1 <= n6 && n3 <= n5 && n2 <= n4)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n6 <= n1 && n5 <= n3 && n4 <= n2)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n2 <= n1 && n1 <= n3 && n4 <= n5 && n5 <= n6)
    {
        if (n4 == n2 && n5 == n1 && n6 == n3)
        {
            printf("Boxes are equal");
        }
        else if (n2 <= n4 && n1 <= n5 && n3 <= n6)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n4 <= n2 && n5 <= n1 && n6 <= n3)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n2 <= n1 && n1 <= n3 && n4 <= n6 && n6 <= n5)
    {
        if (n4 == n2 && n6 == n1 && n5 == n3)
        {
            printf("Boxes are equal");
        }
        else if (n2 <= n4 && n1 <= n6 && n3 <= n5)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n4 <= n2 && n6 <= n1 && n5 <= n3)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n2 <= n1 && n1 <= n3 && n5 <= n4 && n4 <= n6)
    {
        if (n5 == n2 && n4 == n1 && n6 == n3)
        {
            printf("Boxes are equal");
        }
        else if (n2 <= n5 && n1 <= n4 && n3 <= n6)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n5 <= n2 && n4 <= n1 && n6 <= n3)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n2 <= n1 && n1 <= n3 && n5 <= n6 && n6 <= n4)
    {
        if (n5 == n2 && n6 == n1 && n4 == n3)
        {
            printf("Boxes are equal");
        }
        else if (n2 <= n5 && n1 <= n6 && n3 <= n4)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n5 <= n2 && n6 <= n1 && n4 <= n3)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n2 <= n1 && n1 <= n3 && n6 <= n4 && n4 <= n5)
    {
        if (n6 == n2 && n4 == n1 && n5 == n3)
        {
            printf("Boxes are equal");
        }
        else if (n2 <= n6 && n1 <= n4 && n3 <= n5)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n6 <= n2 && n4 <= n1 && n5 <= n3)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n2 <= n1 && n1 <= n3 && n6 <= n5 && n5 <= n4)
    {
        if (n6 == n2 && n5 == n1 && n4 == n3)
        {
            printf("Boxes are equal");
        }
        else if (n2 <= n6 && n1 <= n5 && n3 <= n4)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n6 <= n2 && n5 <= n1 && n4 <= n3)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n2 <= n3 && n3 <= n1 && n4 <= n5 && n5 <= n6)
    {
        if (n4 == n2 && n5 == n3 && n6 == n1)
        {
            printf("Boxes are equal");
        }
        else if (n2 <= n4 && n3 <= n5 && n1 <= n6)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n4 <= n2 && n5 <= n3 && n6 <= n1)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n2 <= n3 && n3 <= n1 && n4 <= n6 && n6 <= n5)
    {
        if (n4 == n2 && n6 == n3 && n5 == n1)
        {
            printf("Boxes are equal");
        }
        else if (n2 <= n4 && n3 <= n6 && n1 <= n5)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n4 <= n2 && n6 <= n3 && n5 <= n1)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n2 <= n3 && n3 <= n1 && n5 <= n4 && n4 <= n6)
    {
        if (n5 == n2 && n4 == n3 && n6 == n1)
        {
            printf("Boxes are equal");
        }
        else if (n2 <= n5 && n3 <= n4 && n1 <= n6)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n5 <= n2 && n4 <= n3 && n6 <= n1)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n2 <= n3 && n3 <= n1 && n5 <= n6 && n6 <= n4)
    {
        if (n5 == n2 && n6 == n3 && n4 == n1)
        {
            printf("Boxes are equal");
        }
        else if (n2 <= n5 && n3 <= n6 && n1 <= n4)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n5 <= n2 && n6 <= n3 && n4 <= n1)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n2 <= n3 && n3 <= n1 && n6 <= n4 && n4 <= n5)
    {
        if (n6 == n2 && n4 == n3 && n5 == n1)
        {
            printf("Boxes are equal");
        }
        else if (n2 <= n6 && n3 <= n4 && n1 <= n5)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n6 <= n2 && n4 <= n3 && n5 <= n1)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n2 <= n3 && n3 <= n1 && n6 <= n5 && n5 <= n4)
    {
        if (n6 == n2 && n5 == n3 && n4 == n1)
        {
            printf("Boxes are equal");
        }
        else if (n2 <= n6 && n3 <= n5 && n1 <= n4)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n6 <= n2 && n5 <= n3 && n4 <= n1)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n3 <= n1 && n1 <= n2 && n4 <= n5 && n5 <= n6)
    {
        if (n4 == n3 && n5 == n1 && n6 == n2)
        {
            printf("Boxes are equal");
        }
        else if (n3 <= n4 && n1 <= n5 && n2 <= n6)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n4 <= n3 && n5 <= n1 && n6 <= n2)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n3 <= n1 && n1 <= n2 && n4 <= n6 && n6 <= n5)
    {
        if (n4 == n3 && n6 == n1 && n5 == n2)
        {
            printf("Boxes are equal");
        }
        else if (n3 <= n4 && n1 <= n6 && n2 <= n5)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n4 <= n3 && n6 <= n1 && n5 <= n2)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n3 <= n1 && n1 <= n2 && n5 <= n4 && n4 <= n6)
    {
        if (n5 == n3 && n4 == n1 && n6 == n2)
        {
            printf("Boxes are equal");
        }
        else if (n3 <= n5 && n1 <= n4 && n2 <= n6)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n5 <= n3 && n4 <= n1 && n6 <= n2)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n3 <= n1 && n1 <= n2 && n5 <= n6 && n6 <= n4)
    {
        if (n5 == n3 && n6 == n1 && n4 == n2)
        {
            printf("Boxes are equal");
        }
        else if (n3 <= n5 && n1 <= n6 && n2 <= n4)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n5 <= n3 && n6 <= n1 && n4 <= n2)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n3 <= n1 && n1 <= n2 && n6 <= n4 && n4 <= n5)
    {
        if (n6 == n3 && n4 == n1 && n5 == n2)
        {
            printf("Boxes are equal");
        }
        else if (n3 <= n6 && n1 <= n4 && n2 <= n5)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n6 <= n3 && n4 <= n1 && n5 <= n2)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n3 <= n1 && n1 <= n2 && n6 <= n5 && n5 <= n4)
    {
        if (n6 == n3 && n5 == n1 && n4 == n2)
        {
            printf("Boxes are equal");
        }
        else if (n3 <= n6 && n1 <= n5 && n2 <= n4)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n6 <= n3 && n5 <= n1 && n4 <= n2)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n3 <= n2 && n2 <= n1 && n4 <= n5 && n5 <= n6)
    {
        if (n4 == n3 && n5 == n2 && n6 == n1)
        {
            printf("Boxes are equal");
        }
        else if (n3 <= n4 && n2 <= n5 && n1 <= n6)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n4 <= n3 && n5 <= n2 && n6 <= n1)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n3 <= n2 && n2 <= n1 && n4 <= n6 && n6 <= n5)
    {
        if (n4 == n3 && n6 == n2 && n5 == n1)
        {
            printf("Boxes are equal");
        }
        else if (n3 <= n4 && n2 <= n6 && n1 <= n5)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n4 <= n3 && n6 <= n2 && n5 <= n1)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n3 <= n2 && n2 <= n1 && n5 <= n4 && n4 <= n6)
    {
        if (n5 == n3 && n4 == n2 && n6 == n1)
        {
            printf("Boxes are equal");
        }
        else if (n3 <= n5 && n2 <= n4 && n1 <= n6)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n5 <= n3 && n4 <= n2 && n6 <= n1)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n3 <= n2 && n2 <= n1 && n5 <= n6 && n6 <= n4)
    {
        if (n5 == n3 && n6 == n2 && n4 == n1)
        {
            printf("Boxes are equal");
        }
        else if (n3 <= n5 && n2 <= n6 && n1 <= n4)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n5 <= n3 && n6 <= n2 && n4 <= n1)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n3 <= n2 && n2 <= n1 && n6 <= n4 && n4 <= n5)
    {
        if (n6 == n3 && n4 == n2 && n5 == n1)
        {
            printf("Boxes are equal");
        }
        else if (n3 <= n6 && n2 <= n4 && n1 <= n5)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n6 <= n3 && n4 <= n2 && n5 <= n1)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    else if (n3 <= n2 && n2 <= n1 && n6 <= n5 && n5 <= n4)
    {
        if (n6 == n3 && n5 == n2 && n4 == n1)
        {
            printf("Boxes are equal");
        }
        else if (n3 <= n6 && n2 <= n5 && n1 <= n4)
        {
            printf("The first box is smaller than the second one");
        }
        else if (n6 <= n3 && n5 <= n2 && n4 <= n1)
        {
            printf("The first box is larger than the second one");
        }
        else
        {
            printf("Boxes are incomparable");
        }
    }
    return 0;
}