//Write a program that takes an integer as input and returnstrue if the input is a power of 2

#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("%d is not a power of 2. \n", n);
        return 0;
    }

    while (n % 2 == 0) {
        n /= 2;
    }

    if (n == 1) {
        printf("The entered number is a power of 2. \n");
    } else {
        printf("%d is not a power of 2. \n", n);
    }

    return 0;
}

