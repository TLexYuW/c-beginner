#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;
};

struct point *fun(int a, int b)
{
    struct point *p = (struct point *)malloc(sizeof(struct point));
    p->x = a;
    p->y = b + 5;
    return p;
}

void print(struct point *p)
{
    printf("%d %d\n", p->x, p->x);
}

int main()
{
    struct point *p1, *p2;
    p1 = fun(2, 3);
    p2 = fun(6, 9);

    print(p1);
    print(p2);

    free(p1);
    free(p2);

    return 0;
}
