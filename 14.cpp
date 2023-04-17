#include <stdio.h>

struct rectangle {
    int length;
    int width;
};

int get_rectangle_area(struct rectangle rect) {
    return rect.length * rect.width;
}

int main() {
    struct rectangle rect = {5, 8};
    int area = get_rectangle_area(rect);
    printf("The area of the rectangle is %d\n", area);
    return 0;
}
