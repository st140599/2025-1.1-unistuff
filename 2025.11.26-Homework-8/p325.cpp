#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct 
{
    double x;
    double y;
} Point;

double radius(Point p);
double distance(Point p1, Point p2);

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
    double maxdist= 0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            maxdist=fmax(distance(points[i],points[j]), maxdist);
        }
    }
    printf("%lf", maxdist);
    free(points);
}

double radius(Point p) {
    return sqrt(p.x * p.x + p.y * p.y);
}
double distance(Point p1, Point p2)
{
    return sqrt(pow(p1.x-p2.x, 2) + pow(p1.y-p2.y, 2));
}