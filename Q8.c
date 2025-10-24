/*Develop a C program to generate the Fibonacci series up to ‘n’ terms,
where each term is the sum of the two preceding ones.
0, 1, 1, 2, 3, 5, 8, 13, ...*/

#include <stdio.h>

int main() {
    int input, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &input);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= input; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
