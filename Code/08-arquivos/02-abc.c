#include <stdio.h>

void main (void) {
    FILE* f = fopen("/tmp/arq-01.txt", "r");
    int v1 = fgetc(f);
    int v2 = fgetc(f);
    int v3 = fgetc(f);
    int v4 = fgetc(f);
    printf("%d %d %d %d %d\n", v1, v2, v3, v4, EOF);
    fclose(f);
}
