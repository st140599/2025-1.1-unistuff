#include<cstdio>

int main(int argc, char** argv){
    int inp = 0;
    scanf("%d", &inp);
    int n1 = inp % 10;
    inp /= 10;
    int n2 = inp % 10;
    inp /= 10;
    int n3 = inp % 10;
    inp /= 10;
    int n4 = inp % 10;
    inp /= 10;
    int n5 = inp % 10;
    inp /= 10;
    if (n1 + n2 + n3 == n4 + n5 + inp){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
} 