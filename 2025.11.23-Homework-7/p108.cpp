#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int f = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            f = 0;
            break;
        }
    }
    if (f) {
        printf("yes");
    } else {
        printf("no");
    }
    return 0;
}