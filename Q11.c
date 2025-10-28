#include <stdio.h>

int main() {
    int n;

    printf("Enter how many scores you want to store?: ");
    scanf("%d", &n);

    int scores[n], even_arr[n], odd_arr[n];

    printf("\nEnter the scores:\n");
    for (int i = 0; i < n; i++) {
        printf("Index[%d]: ", i);
        scanf("%d", &scores[i]);
        even_arr[i] = (scores[i] % 2 == 0) ? scores[i] : 0;
        odd_arr[i]  = (scores[i] % 2 != 0) ? scores[i] : 0;
    }

    printf("\nEven Array:\n");
    for (int i = 0; i < n; i++)
        if (even_arr[i] != 0) printf("%d ", even_arr[i]);

    printf("\nOdd Array:\n");
    for (int i = 0; i < n; i++)
        if (odd_arr[i] != 0) printf("%d ", odd_arr[i]);

    return 0;
}
