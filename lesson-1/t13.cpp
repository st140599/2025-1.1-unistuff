#include<cstdio>

int main(int argc, char** argv)
{
	int a,b,c;
	scanf("%d %d", &a, &b);
    printf("%d %d", (b-b%a-1)/a,(b+1)%a);
	return 0;
}