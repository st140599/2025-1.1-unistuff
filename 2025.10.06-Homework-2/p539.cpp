#include <cstdio>

int main(int argc, char **argv)
{
    int inp = 0;
    scanf("%d", &inp);
    
    if (inp % 2 == 0)
    {
        printf("%d", inp / 2);
    }
    else if (inp==1){
        printf("0");
    }
    else
    {
        printf("%d", inp);
    }
    return 0;
}