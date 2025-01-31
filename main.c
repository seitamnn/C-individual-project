#include <stdio.h>
#include <stdlib.h>
#define LINESIZE 60

int main()
{
    FILE *my_file;
    my_file = fopen("schedule.csv", "r");

    char line[LINESIZE];
    int lc = 0;

    if(my_file == NULL) {
        printf("File couldn't be opened...");
    }
    else {
        printf("File was successfully opened!\n");
        printf("The following was read from a file\n");
        while(!feof(my_file)) {
            if(fgets(line, LINESIZE, my_file) != NULL) {
                lc++;
                printf("%2d: %s", lc, line);
            }
        }
        fclose(my_file);
    }
    return 0;
}