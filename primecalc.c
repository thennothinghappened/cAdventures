#include <stdio.h>
#include <string.h>
#define MAXIMUM 100000

int isPrime(int num);

int isPrime(int num) {
    int prime = 1, i;

    if(num == 4) {return 0;}

    for(i = 2; i < (num / 2); i ++) {
        if(num % i == 0) {
            prime = 0;
        }
    }

    return prime;
}

int main() {
    int input;
    printf("Input a number to see if it is prime...\n");
    scanf("%d", &input);
    do {
        if(!input) {printf("\nInput is NaN!"); return 0;}

        if(input < 0) {printf("\n\n--Autoconverted %d to positive number.--\n\n", input); input -= input * 2;}

        if(isPrime(input) == 1) {
            printf("%d is prime.\n", input);
        } else {
            printf("%d is not prime.\n", input);
        }
        input = NULL; // reset input
        printf("\nCalculate another or exit?(int/X): ");
        scanf(" %d", &input);

        if(!input) {return 0;}
    }
    while(input);
    return 0;
}
