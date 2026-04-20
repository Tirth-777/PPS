#include <stdio.h>
#include <stdlib.h>

void writeFile() {
    char filename[50], text[500];

    printf("Enter file name: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "w"); // write mode

    if (fp == NULL) {
        printf("Error: Unable to create file.\n");
        return;
    }

    printf("Enter text to write: ");
    getchar(); // clear buffer
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("File '%s' created and written successfully.\n", filename);
}

void readFile() {
    char filename[50], ch;

    printf("Enter file name: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r"); // read mode

    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return;
    }

    printf("\nContents of '%s':\n\n", filename);

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
}

void appendFile() {
    char filename[50], text[500];

    printf("Enter file name: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "a"); // append mode

    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return;
    }

    printf("Enter text to append: ");
    getchar(); // clear buffer
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("Text appended to '%s' successfully.\n", filename);
}

void deleteContents() {
    char filename[50];

    printf("Enter file name: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "w"); // clears file contents

    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return;
    }

    fclose(fp);

    printf("Contents of '%s' have been deleted.\n", filename);
}

int main() {
    int choice;

    while (1) {
        printf("\nSimple Text Editor:\n");
        printf("1 - Create and Write to a File\n");
        printf("2 - Read and Display File Contents\n");
        printf("3 - Append Text to a File\n");
        printf("4 - Delete File Contents\n");
        printf("5 - Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: writeFile(); break;
            case 2: readFile(); break;
            case 3: appendFile(); break;
            case 4: deleteContents(); break;
            case 5:
                printf("Exiting the program. Thank you!\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
