#include <stdio.h>

int main() {
    printf("Enter how many elements you want to store: ");
    int input;
    scanf("%d", &input);

    int arr[100];
    for (int i = 0; i < input; i++) {
        printf("Index[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    int first_elem, mid_elem, last_elem;
    printf("\nEnter what element to enter at first : ");
    scanf("%d", &first_elem);

    printf("Enter what element to enter at middle : ");
    scanf("%d", &mid_elem);

    printf("Enter what element to enter at last : ");
    scanf("%d", &last_elem);

    printf("\nArray before insertion:\n");
    for (int i = 0; i < input; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = input; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = first_elem;
    input++;

    arr[input] = last_elem;
    input++;

    int mid_index = input / 2;
    for (int i = input; i > mid_index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[mid_index] = mid_elem;
    input++;

    printf("\nArray after insertion:\n");
    for (int i = 0; i < input; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
