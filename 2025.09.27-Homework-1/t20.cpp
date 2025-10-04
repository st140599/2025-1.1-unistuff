#include<cstdio>
 
int main(int argc, char** argv)
{
    int a,b,c;
    scanf("%d %d", &a,&b);
    printf("%d %d %d", b/a, b%a, (a-b%a)*(b%a!=0));
    return 0;
}