#include <stdio.h>
#include <math.h>

struct point {
    float x;
    float y;
};

int main() {
    struct point p1, p2;
    float distance;

    printf("Enter coordinates for Point 1 (x,y): ");
    scanf("%f,%f", &p1.x, &p1.y);

    printf("Enter coordinates for Point 2 (x,y): ");
    scanf("%f,%f", &p2.x, &p2.y);

    distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));

    printf("The distance between the two points is: %f\n", distance);

    return 0;
}
