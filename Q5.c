#include <stdio.h>

int main(){
    float x, y;
    printf("Enter co-ordinates in (x y) format: ");
    scanf("%f %f", &x, &y);

    if (x == 0  && y == 0) {
        printf("Co-ordinates %.2f, %.2f lies on the origin\n", x, y);
    } else if (x > 0 && y > 0) {
        printf("Co-ordinates %.2f, %.2f lies in First Quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("Co-ordinates %.2f, %.2f lies in Second Quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("Co-ordinates %.2f, %.2f lies in Third Quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("Co-ordinates %.2f, %.2f lies in Fourth Quadrant.\n", x, y);
    } else printf("Please enter numbers only!\n");

    return 0;
}
