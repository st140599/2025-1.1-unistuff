#include<cstdio>

int main(int argc, char** argv)
{
	long long a=0;
    long long b=0;
    long long c=0;
	scanf("%lld", &a);
    a=(a+a%2);
    b=a*a;
    printf("%lld", b/4);
	return 0;
}