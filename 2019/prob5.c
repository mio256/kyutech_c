#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct VERTEX
{
    double x, y;
};

void print_vertex(struct VERTEX v)
{
    printf("(%4.1f, %4.1f) ", v.x, v.y);
}

void print_vertexes(struct VERTEX *p, int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        print_vertex(p[i]);
    }
    printf("\n");
}

double area_triangle(struct VERTEX *p)
{
    double a, b, c, s, area;

    a = sqrt(pow(p[0].x - p[1].x, 2.0) + pow(p[0].y - p[1].y, 2.0));
    b = sqrt(pow(p[1].x - p[2].x, 2.0) + pow(p[1].y - p[2].y, 2.0));
    c = sqrt(pow(p[2].x - p[0].x, 2.0) + pow(p[2].y - p[0].y, 2.0));

    /* a */
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    return area;
}

double area_polygon(struct VERTEX *p, int n)
{
    struct VERTEX t[3];
    int i;
    double area;
    if (n < 3)
        return 0.0;
    if (n == 3)
        return area_triangle(p);
    t[0] = p[0];
    area = 0.0;

    /* b */
    

    return area;
}

int main(void)
{
    struct VERTEX triangle[] = {
        {0.0, 0.0},
        {10.0, 0.0},
        {0.0, 10.0}};
    struct VERTEX house[] = {
        {10.0, 0.0},
        {10.0, 10.0},
        {5.0, 15.0},
        {0.0, 10.0}};
    int i;

    printf("triangle:");
    print_vertexes(triangle, 3);

    printf("area = %5.1f\n", area_polygon(triangle, 3));

    printf("house:");
    print_vertexes(house, 5);

    printf("area = %5.1f\n", area_polygon(house, 5));

    return 0;
}