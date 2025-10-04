#include<cstdio>
 
int main(int argc, char** argv)
{
    int a,b,c;
    scanf("%d", &a);
    b=a%10;
    c=a/10%10;
    a=a/100;
    printf("%d", a+b+c);
    return 0;
}