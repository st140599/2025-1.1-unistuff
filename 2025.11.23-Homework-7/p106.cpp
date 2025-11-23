#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char text[100];
    char* token;
    int word_count=0;
    fgets(text,sizeof(text),stdin);
    token = strtok(text, " ");
    while (token != NULL)
    {
        word_count++;
        token = strtok(NULL, " ");
    }
    printf("%d", word_count);
    return 0;
}