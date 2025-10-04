#include<cstdio>
 
int main(int argc, char** argv)
{
    int a,b,c;
    scanf("%d %d", &a, &b);
    printf("%d %d", (b-b%a)/a+1,b%a);
    return 0;
}