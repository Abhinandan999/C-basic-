#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    file = fopen("file.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "Hello, file handling in C!\n");
    fclose(file);

    file = fopen("file.txt", "r");
    if (file) {
        while (fgets(data, 100, file) != NULL) {
            printf("%s", data);
        }
        fclose(file);
    }

    return 0;
}
