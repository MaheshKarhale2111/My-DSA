#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// defining constants
const double PI = M_PI;
const double E = M_E;
// defining structure
typedef struct point
{
    double x;
    double y;

    

} p;// typedef

p A1, A2, B1, B2, C1, C2, C3, D, F;// declaring points





double distance(p A, p B)// function that calculate distance between two points taken as input
{
    double dist = (sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y)));
    
    return dist;
}

double area_circle()// void function that prints area of circle
{
    double dist = distance(A1, A2);// calling distance function 
    double area = M_PI * dist * dist;
    printf("Area of circle is %.6lf unit\n", area);
}

void area_triangle_and_colinear_test()// function to calculate area of triangle and test for collinear points
{
  // finding length of side 
    double a = distance(C1, C2);
    double b = distance(C2, C3);
    double c = distance(C1, C3);

    if (a + b > c && b + c > a && a + c > b)
    {
        printf("points are non collinear\n");
        double s = (a + b + c) / 2; // semiperimeter

        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("Area of the triangle is %lf unit\n", area);
    }

    else
    {
        printf("points are collinear\n");
        printf("area is zero because points are collinear\n");
    }
}

void shift(double *a, double *b, double *x, double *y)
{
    double d1 = *a + *x;
    double d2 = *b + *y;
    printf("Point is shifted to <%lf, %lf>.", d1, d2);
}

void main()
{

    scanf("%lf %lf", &A1.x, &A1.y);
    scanf("%lf %lf", &A2.x, &A2.y);
    scanf("%lf %lf", &B1.x, &B1.y);
    scanf("%lf %lf", &B2.x, &B2.y);
    scanf("%lf %lf", &C1.x, &C1.y);
    scanf("%lf %lf", &C2.x, &C2.y);
    scanf("%lf %lf", &C3.x, &C3.y);
    scanf("%lf %lf", &D.x, &D.y);
    scanf("%lf %lf", &F.x, &F.y);

    area_circle();
    printf("distance between two points is %.6lf unit\n",distance(B1, B2));
    area_triangle_and_colinear_test();
    shift(&D.x, &D.y, &F.x, &F.y);

    return 0;
}
