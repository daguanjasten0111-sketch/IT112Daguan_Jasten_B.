
#include <stdio.h>

int main() {
    FILE *file;
    int studentNumber, choice;
    char completeName[100];
    char section[50];

    do {
        printf("Enter Student Number: ");
        scanf("%d", &studentNumber);

        printf("Enter Complete Name: ");
        scanf(" %99[^\n]", completeName);

        printf("Enter Section: ");
        scanf(" %49[^\n]", section);

        file = fopen("student_records.txt", "a");

        if (file == NULL) {
            printf("Error opening file!\n");
            return 1;
        }

        fprintf(file, "ID Number: %d\n", studentNumber);
        fprintf(file, "Complete Name: %s\n", completeName);
        fprintf(file, "Section: %s\n\n", section);

        fclose(file);

        printf("\nRecord added and saved successfully.\n\n");

        printf("Add another student? [Enter 1 for Yes, 0 for No]: ");
        scanf("%d", &choice);

        printf("\n");

    } while (choice == 1);

    printf("All student records have been saved.\n");

    return 0;
}
