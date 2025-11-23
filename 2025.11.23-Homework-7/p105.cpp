#include <stdio.h>
#include <string.h>
#define SIZE 40

int main(int argc, char **argv)
{
    char str1[SIZE];
    char str2[SIZE];
    fgets(str1, sizeof(str1),stdin);
    scanf("\n");
    fgets(str2, sizeof(str2),stdin);
    if (strcmp(str1,str2) == 0)
    {
        printf("yes");
        return 0;
    }
    printf("no");
    return 0;
}