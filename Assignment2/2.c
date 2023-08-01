#include <stdio.h>

void primeFactors(int num, int divisor) {
    if (num <= 1)
        return;

    if (num % divisor == 0) {
        printf("%d ", divisor);
        primeFactors(num / divisor, divisor);
    } else {

        primeFactors(num, divisor + 1);
    }
}

int main() {
    int num;

    printf("Enter an integer to find its prime factors: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);
    primeFactors(num, 2);
    printf("\n");

    return 0;
}
