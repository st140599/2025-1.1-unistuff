#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct 
{
    int x;
    int y;
} Point;

double radius(Point p);

int main(int argc, char** argv)
{
    int n =0;
    scanf("%d", &n);
    Point *points = (Point*)malloc((n*sizeof(Point)));
    for (int i=0; i<n; i++)
    {
        int x=0;
        int y=0;
        scanf("%d %d", &x, &y);
        points[i].x=x;
        points[i].y=y;
    }
    int imax=0;
    for (int i=0; i<n; i++)
    {
        if (radius(points[imax]) < radius(points[i]))
        {
            imax=i;
        }
    }
    printf("%d %d", points[imax].x, points[imax].y);
    free(points);
}

double radius(Point p) {
    return sqrt(p.x * p.x + p.y * p.y);
}