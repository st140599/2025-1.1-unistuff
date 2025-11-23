#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char text[300];
    char* token;
    char word[40] = "";
    fgets(text,sizeof(text),stdin);
    text[strcspn(text, "\n")]='\0';
    token = strtok(text, " ");
    while (token != NULL)
    {
        if (strlen(word) < strlen(token))
        {
            strcpy(word, token);
        }
        token = strtok(NULL, " ");
    }
    printf("%s\n%d", word, strlen(word));
    return 0;
}