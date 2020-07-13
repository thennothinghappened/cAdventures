#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int random_int(int min, int max);

int main() {
    int input, numTru; char ans;
    srand(time(0));

    do {
        printf("Welcome to the \'too high, too low!\' game!\n");
        printf("\nMaximum is %d.", 100);

        numTru = random_int(0, 100);

        while( numTru == 0 || numTru == 100) {
            numTru = random_int(0, 100);
        }

        while(1==1) {
            printf("\nGuess: ");
            scanf(" %d", &input);

            if(input > numTru) {
                printf("\n\n Too high!");
            }
            if(input < numTru) {
                printf("\n\nToo low!");
            }
            if(input == numTru) {
                break;
            }
        }

        printf("\nCongrats! %d was the correct answer.", numTru);

        printf("\n\nPlay again?(Y/N): ");
        scanf(" %c", &ans);
    }
    while(ans == 'Y' || ans == 'y');
    return 0;
}

int random_int(int min, int max)
{
   return min + rand() % (max+1 - min);
}
