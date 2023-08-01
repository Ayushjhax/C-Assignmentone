#include <stdio.h>


int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}


int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}


int isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int choice, num;

    do {
        printf("\nMenu\n");
        printf("1) Compute a!\n");
        printf("2) Check if a number is prime\n");
        printf("3) Check if a number is odd or even\n");
        printf("4) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number to compute factorial: ");
                scanf("%d", &num);
                printf("Factorial of %d is: %d\n", num, factorial(num));
                break;

            case 2:
                printf("Enter a number to check if it's prime: ");
                scanf("%d", &num);
                if (isPrime(num))
                    printf("%d is a prime number.\n", num);
                else
                    printf("%d is not a prime number.\n", num);
                break;

            case 3:
                printf("Enter a number to check if it's odd or even: ");
                scanf("%d", &num);
                if (isEven(num))
                    printf("%d is an even number.\n", num);
                else
                    printf("%d is an odd number.\n", num);
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
