#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int x = 1, y = 0, z = 0, i, input;

    printf("Fibonacci Sequence\n\nHow many?\n");
    scanf(" %d", &input);

    printf("\n0\n");

    for(i = 0; i < input; i ++) {
        printf("%d\n", x);
        z = y; y = x; x = y + z;
        if(x < 0) {printf("Maximum number reached before integer overflow!\033[0m");break;}
    }
    system("Pause");

    return 0;
}
