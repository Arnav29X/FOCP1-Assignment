#include <stdio.h>
#include <math.h>

int main(){
    int number, n_copy, count = 0, remainder;
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
        remainder = n_copy % 10;
        sum += pow(remainder,count);
        n_copy /= 10;
    }

    (number == round(sum)) ? printf("ARMSTRONG IT IS !\n") : printf("NOT AN ARMSTRONG !\n");
    
    return 0;
}
