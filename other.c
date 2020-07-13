//#include <libexif/exif-data.h>
//#define MAXCHAR 1000

/*int main() {
    char ans, filename[150]; // max filename length.
    do {
        printf("\nEnter a filename to open... \n");
        scanf(" %s", &filename);

        if(strlen(filename) >= 150) {
            printf("illegal filename, length %d longer than 150 limit.", strlen(filename));
            return 0;
        }

        test(filename);

        printf("\n\nOpen another file? (Y/N): ");
        scanf("%s", &ans);
    }
    while (ans == 'y' || ans == 'Y');
    return 0;
}

void test(const char* filename) {
    FILE *fp;
    char str[MAXCHAR];

    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s",filename);
        return 0;
    }
    while (fgets(str, MAXCHAR, fp) != NULL);
        printf("%s", str);
    fclose(fp);
    return 0;
}*/
