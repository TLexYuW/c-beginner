#include <stdio.h>
#include <stdlib.h>

typedef struct mian
{
    int x;
    int y;
} Point;

int main()
{
    Point p1;

    p1.x = 3;
    p1.y = 2;

    printf("p1 : (%d,%d)\n", p1.x, p1.y);

    Point *p_addr_p1;

    p_addr_p1 = &p1;

    p_addr_p1->x = 5;
    p_addr_p1->y = 4;

    printf("p1 : (%d,%d)\n", p1.x, p1.y);

    printf("p2 : (%d,%d)\n", p_addr_p1->x, p_addr_p1->y);

    printf("p2 x = %d, ", (*p_addr_p1).x);
    printf("y = %d\n", (*p_addr_p1).y);

    Point *p3;
    p3 = malloc(sizeof(Point));

    p3->x = 5;
    p3->y = 10;
    printf("p3 : (%d,%d)\n", p3->x, p3->y);

    return 0;
}