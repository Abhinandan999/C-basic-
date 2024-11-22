#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_HABITS 100
#define MAX_NAME_LEN 50

typedef struct {
    char name[MAX_NAME_LEN];
    int target; // target number of days
    int progress; // completed days
} Habit;

void loadHabits(Habit habits[], int *count) {
    FILE *file = fopen("habits.txt", "r");
    if (!file) return;

    *count = 0;
    while (fscanf(file, "%s %d %d", habits[*count].name, &habits[*count].target, &habits[*count].progress) == 3) {
        (*count)++;
    }
    fclose(file);
}

void saveHabits(Habit habits[], int count) {
    FILE *file = fopen("habits.txt", "w");
    if (!file) {
        printf("Error saving habits.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%s %d %d\n", habits[i].name, habits[i].target, habits[i].progress);
    }
    fclose(file);
}

void addHabit(Habit habits[], int *count) {
    if (*count >= MAX_HABITS) {
        printf("Habit list is full!\n");
        return;
    }

    printf("Enter habit name: ");
    scanf("%s", habits[*count].name);
    printf("Enter target number of days: ");
    scanf("%d", &habits[*count].target);
    habits[*count].progress = 0;

    (*count)++;
    printf("Habit added successfully!\n");
}

void updateProgress(Habit habits[], int count) {
    char name[MAX_NAME_LEN];
    printf("Enter habit name to update progress: ");
    scanf("%s", name);

    for (int i = 0; i < count; i++) {
        if (strcmp(habits[i].name, name) == 0) {
            habits[i].progress++;
            printf("Progress updated for '%s'.\n", habits[i].name);
            return;
        }
    }

    printf("Habit not found.\n");
}

void viewSummary(Habit habits[], int count) {
    printf("\n--- Habit Summary ---\n");
    for (int i = 0; i < count; i++) {
        printf("Habit: %s | Progress: %d/%d\n", habits[i].name, habits[i].progress, habits[i].target);
    }
    printf("---------------------\n");
}

int main() {
    Habit habits[MAX_HABITS];
    int count = 0;

    loadHabits(habits, &count);

    int choice;
    do {
        printf("\n--- Habit Tracker ---\n");
        printf("1. Add Habit\n");
        printf("2. Update Progress\n");
        printf("3. View Summary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addHabit(habits, &count);
                break;
            case 2:
                updateProgress(habits, count);
                break;
            case 3:
                viewSummary(habits, count);
                break;
            case 4:
                saveHabits(habits, count);
                printf("Exiting Habit Tracker. Progress saved!\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
