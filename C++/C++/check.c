#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

const double PI = M_PI;
typedef struct point
{
    double x, y;
} point;

void area(point *, point *);

int main()
{
    point a, b;
    scanf("%lf %lf", &a.x, &a.y);
    scanf("%lf %lf", &b.x, &b.y);
    area(&a, &b);
    return 0;
}
void area(point *n, point *m)
{
    double area, r;
    // r= sqrt(((*n).x- (*m).x)*((*n).x- (*m).x)+((*n).y- (*m).y)*((*n).y- (*m).y));
    r = sqrt(pow(((*n).x - (*m).x), 2) + pow(((*n).y - (*m).y), 2));
    // r= ((*n).x- (*m).x)*((*n).x- (*m).x)-((*n).y- (*m).y)*((*n).y- (*m).y);
    printf("%lf", r * r * M_PI);
}
