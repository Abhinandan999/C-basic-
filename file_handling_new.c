#include <stdio.h>

int main() {
    FILE *file;             // Declare a file pointer
    char filename[] = "example.txt";
    char content[100];
    
    // Writing to a file
    file = fopen(filename, "w"); // Open the file in write mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "Hello, this is a test file.\n"); // Write text to the file
    fprintf(file, "File handling in C is simple.\n");
    fclose(file);            // Close the file after writing
    printf("Data written to the file successfully.\n");

    // Reading from a file
    file = fopen(filename, "r"); // Open the file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("\nReading from file:\n");
    while (fgets(content, sizeof(content), file) != NULL) { // Read each line
        printf("%s", content); // Print content to console
    }
    fclose(file);            // Close the file after reading

    return 0;
}
