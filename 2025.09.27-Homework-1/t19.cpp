#include<cstdio>
 
int main(int argc, char** argv)
{
    int a=0;
    int b=0;
    int c=0;
    scanf("%d %d", &a,&b);
    c=(a%b)*(b%a)+1;
    printf("%d", c);
    return 0;
}