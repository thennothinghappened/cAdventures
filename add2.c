#include <stdio.h>
#include <stdlib.h>

int main() {
    int input1, input2;

    printf("\nEnter a number > ");
    scanf(" %d", &input1);

    printf("\nEnter another >  ");
    scanf(" %d", &input2);

    printf("\n\nAnswer: %d", input1 + input2);
}
