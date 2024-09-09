#include <iostream>
#include <cmath> // we include this file because we want to use sqrt function
using namespace std;
class point
{
    int x, y;
    friend float distance(point, point);

public:
    point(int a, int b) 
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "(" << x << "," << y << ")";
    }
};

float distance(point p1, point p2)
{
    int calc;
    float dis;
    calc = (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
    dis = sqrt(calc);
    return dis;
}

int main()
{
    int x1, x2, y1, y2;
    cout << "Enter x1 :";
    cin >> x1;
    cout << "Enter y1 :";
    cin >> y1;
    cout << "Enter x2 :";
    cin >> x2;
    cout << "Enter y2 :";
    cin >> y2;
    point p(x1, y1);
    point q(x2, y2);

    // p.display();
    // q.display();
    cout << "The distance between points";
    p.display();
    cout << " and ";
    q.display();
    cout << " is " << distance(p, q);

    return 0;
}