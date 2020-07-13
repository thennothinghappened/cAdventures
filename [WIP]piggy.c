#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void splitter(char input[]);

int main ()
{
    char input[50]; const char* result[20];
    printf("\nEnter a string...\n");

    scanf(" %[^\n]s", &input);

    //result = splitter(input);

    for(int i = 0; i < 20; i ++) {
        printf("\n%s", result[i]);
    }

}

void splitter(char input[]) {
    int i = 0;
    char * arr[30]; char * pch;
    pch = strtok(input," ,.-");
    while (pch != NULL)
    {
        arr[i] = pch;
        pch = strtok (NULL, " ,.-");
        i ++;
    }
    return arr;
}

void convert(char* input[]) {

}
