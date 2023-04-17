#include <stdio.h>

struct point {
    int x;
    int y;
};

struct circle {
    float radius;
    struct point center;
};

float area_of_circle(struct circle c) {
    return 3.14159 * c.radius * c.radius;
}

int main() {
    struct circle c;
    printf("Enter the x-coordinate of the center of the circle: ");
    scanf("%d", &c.center.x);
    printf("Enter the y-coordinate of the center of the circle: ");
    scanf("%d", &c.center.y);
    printf("Enter the radius of the circle: ");
    scanf("%f", &c.radius);

    float area = area_of_circle(c);
    printf("The area of the circle is: %f\n", area);

    return 0;
}
