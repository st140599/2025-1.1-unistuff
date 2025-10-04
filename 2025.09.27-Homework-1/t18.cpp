#include<cstdio>
 
int main(int argc, char** argv)
{
    int a,b,c;
    scanf("%d", &a);
    c=a%10!=0;
    printf("%d", (a-a%10+10)/10*c+(1-c)*(a)/10);
    return 0;
}