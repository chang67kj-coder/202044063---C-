
#include <stdio.h>

struct Rectangle {
    int x1, y1;
    int x2, y2;
};

int main()
{
    struct Rectangle r1, r2, result;

    scanf("%d %d %d %d", &r1.x1, &r1.y1, &r1.x2, &r1.y2);
    scanf("%d %d %d %d", &r2.x1, &r2.y1, &r2.x2, &r2.y2);

    if (r1.x1 < r2.x1)
        result.x1 = r1.x1;
    else
        result.x1 = r2.x1;

    if (r1.y1 < r2.y1)
        result.y1 = r1.y1;
    else
        result.y1 = r2.y1;

    if (r1.x2 > r2.x2)
        result.x2 = r1.x2;
    else
        result.x2 = r2.x2;

    if (r1.y2 > r2.y2)
        result.y2 = r1.y2;
    else
        result.y2 = r2.y2;

    printf("%d %d %d %d\n", result.x1, result.y1, result.x2, result.y2);

    return 0;
}
