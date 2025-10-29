#include <stdio.h>

int main(){
    printf("Enter how many elements you want to store : ");

    int input;
    scanf("%d", &input);

    int arr[input];
    for (int i = 0; i < input; i++) {
        printf("Index[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    int last = arr[input-1];

    for (int i = input - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    for (int i = 0; i < input; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
