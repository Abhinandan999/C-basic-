#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char data[100];

    // Writing to a file
    file = fopen("example.txt", "w");  // Open file in write mode
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(file, "Hello, this is an example of file handling in C.\n");
    fprintf(file, "This program writes to and reads from a file.\n");
    fclose(file);  // Close the file after writing
    printf("Data written to file successfully.\n");

    // Reading from the file
    file = fopen("example.txt", "r");  // Open file in read mode
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("Data read from file:\n");
    while (fgets(data, 100, file) != NULL) {  // Read until end of file
        printf("%s", data);
    }
    fclose(file);  // Close the file after reading

    return 0;
}
