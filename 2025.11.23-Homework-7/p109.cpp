#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{

    char text[300];
    fgets(text,sizeof(text),stdin);
    text[strcspn(text, "\n")]='\0';
    int l = strlen(text);
    char c;
    for (char i='a'; i<'z'; i++)
    {
        int k=0;
        for (int j=0; text[j]!='\0'; j++)
        {
            if (text[j]==i)
            {
                k++;
            }
        }
        if (k==2)
        {
            printf("%c", i);
            return 0;
        }
    }
    return 0;
}