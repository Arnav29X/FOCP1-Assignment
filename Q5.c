#include <stdio.h>

int main() {
    float x, y;

    printf("Enter co-ordinates in (x y) format: ");
    int check = scanf("%f %f", &x, &y);

    if (check != 2) {
        printf("Invalid input! Please enter numeric values only.\n");
        return 0;
    }

    if (x == 0 && y == 0) {
        printf("Co-ordinates %.2f, %.2f lie on the origin.\n", x, y);
    } else if (x == 0) {
        printf("Co-ordinates %.2f, %.2f lie on the Y-axis.\n", x, y);
    } else if (y == 0) {
        printf("Co-ordinates %.2f, %.2f lie on the X-axis.\n", x, y);
    } else if (x > 0 && y > 0) {
        printf("Co-ordinates %.2f, %.2f lie in the First Quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("Co-ordinates %.2f, %.2f lie in the Second Quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("Co-ordinates %.2f, %.2f lie in the Third Quadrant.\n", x, y);
    } else {
        printf("Co-ordinates %.2f, %.2f lie in the Fourth Quadrant.\n", x, y);
    }

    return 0;
}
