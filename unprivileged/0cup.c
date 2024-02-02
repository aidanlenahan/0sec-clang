#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char filename[100];

    printf("Enter the C filename without extension: ");
    scanf("%s", filename);

    char command[200];
    sprintf(command, "clang %s.c -o %s", filename, filename);

    system(command);

    printf("Compilation completed.\n");

    return 0;
}
