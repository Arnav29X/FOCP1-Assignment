/*Develop a C program to check whether a given number is an Armstrong number or not,
demonstrating understanding of number manipulation and digit-based computations
used in digital verification systems*/

#include <stdio.h>
#include <math.h>

int main(){
    int number, n_copy, count = 0, rem;
    double sum = 0;

    printf("Enter to check if the number is ARMSTRONG : ");
    scanf("%d", &number);

    n_copy = number;

    while (n_copy != 0)
    {
        n_copy /= 10;
        count++;
    }
    
    n_copy = number;

    while (n_copy != 0)
    {
        rem = n_copy % 10;
        sum += pow(rem,count);
        n_copy /= 10;
    }

    (number == round(sum)) ? printf("ARMSTRONG IT IS !\n") : printf("NOT AN ARMSTRONG !\n");
    
    return 0;
}
