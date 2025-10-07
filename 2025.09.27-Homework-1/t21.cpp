#include<cstdio>
 
int main(int argc, char** argv)
{
    int a=0;
    int b=0;
    int c=0;
    scanf("%d %d", &a,&b);
    c=(a*b)%109+109;
    printf("%d", c%109+1);
    return 0;
}