#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char name[40]="";
    int grades[3];
} Person;

int main(int argc, char** argv)
{
    int n=0;
    scanf("%d", &n);
    Person *journal=(Person*)malloc(n*sizeof(Person));
    for (int i=0; i<n; i++)
    {
        scanf("%39s %d %d %d", journal[i].name, &journal[i].grades[0],&journal[i].grades[1], &journal[i].grades[2]);
    }
    double g1=0;
    for (int i=0; i<n; i++)
    {
        g1+=journal[i].grades[0];
    }
    double g2=0;
    for (int i=0; i<n; i++)
    {
        g2+=journal[i].grades[1];
    }
    double g3=0;
    for (int i=0; i<n; i++)
    {
        g3+=journal[i].grades[2];
    }
    printf("%lf %lf %lf", g1/n,g2/n,g3/n);
    free(journal);
}