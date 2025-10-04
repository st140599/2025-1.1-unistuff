#include<cstdio>

int main(int argc, char** argv)
{
	long long a=0,b=0,c=0;
	scanf("%lld", &a);
    a=(a+a%2);
    b=a*a;
    printf("%lld", b/4);
	return 0;
}