#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int roll_no;
    char name[50];
    float marks;
} Student;

// Function to merge two halves
void merge(Student arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    Student *L = (Student *)malloc(n1 * sizeof(Student));
    Student *R = (Student *)malloc(n2 * sizeof(Student));

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i].marks >= R[j].marks) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    free(L);
    free(R);
}

// Function to perform merge sort
void mergeSort(Student arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// Function to display student records
void displayRecords(Student *students, int n) {
    printf("\nRoll No\tName\t\tMarks\n");
    printf("------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%-10s\t%.2f\n", students[i].roll_no, students[i].name, students[i].marks);
    }
    printf("\n");
}

// Function to save records to file
void saveToFile(Student *students, int n, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        perror("Error opening file");
        return;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "%d,%s,%.2f\n", students[i].roll_no, students[i].name, students[i].marks);
    }
    fclose(file);
    printf("Records saved to %s successfully.\n", filename);
}

// Main function
int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    Student *students = (Student *)malloc(n * sizeof(Student));

    printf("Enter student details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nUnsorted Records:");
    displayRecords(students, n);

    mergeSort(students, 0, n - 1);

    printf("\nSorted Records (by Marks in Descending Order):");
    displayRecords(students, n);

    saveToFile(students, n, "student_records.txt");

    free(students);
    return 0;
}
