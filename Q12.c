#include <stdio.h>

int main() {
    int scores[] = {12, 45, 345, 36, 86, 7, 33};
    int n = sizeof(scores) / sizeof(scores[0]);
    int max = scores[0], min = scores[0];

    for (int i = 1; i < n; i++) {
        if (scores[i] > max) max = scores[i];
        if (scores[i] < min) min = scores[i];
    }

    printf("%d is the max value\n", max);
    printf("%d is the min value\n", min);

    return 0;
}
