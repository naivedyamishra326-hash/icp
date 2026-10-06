#include <stdio.h>

int main()
{
    int num, tens, units, sum;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    tens = num / 10;
    units = num % 10;

    sum = tens + units;

    printf("\nTens Digit = %d", tens);
    printf("\nUnits Digit = %d", units);
    printf("\nSum of digits = %d", sum);

    return 0;
}
