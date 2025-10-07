#include<cstdio>
 
int main(int argc, char** argv)
{
    int a=0;
    int b=0;
    int c=0;
    scanf("%d", &a);
    b=a%10;
    c=a/10%10;
    a=a/100;
    printf("%d", a+b+c);
    return 0;
}