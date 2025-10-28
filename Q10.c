#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter how many marks you want to store?: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter marks at index[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            printf("\nStudents who scored 99 are at: ");
            for (i = 0; i < n; i++) {
                if (arr[i] == 99) {
                printf("index[%d] ", i);
                count++;
                }
            }
        }
    }

    if (count == 0) {
        printf("\nNo student scored 99.\n");
    } else {
        printf("\nTotal %d student(s) scored 99.\n", count);
    }

    return 0;
}
