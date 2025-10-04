#include<cstdio>
 
int main(int argc, char** argv)
{
    int a,b,c;
    scanf("%d %d", &a,&b);
    c=(a*b)%109+1;
    printf("%d", c*(c>0)+109*(c==0)+(109+c)*(c<0));
    return 0;
}