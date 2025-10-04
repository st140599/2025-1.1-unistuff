#include<cstdio>
 
int main(int argc, char** argv)
{
    int a,b,c;
    scanf("%d %d", &a,&b);
    printf("%d", (a%b==0)+(b%a==0)*(a%b!=0)+666*(a%b!=0)*(b%a!=0));
    return 0;
}