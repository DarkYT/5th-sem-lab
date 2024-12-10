#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
// Function to copy content from file1.txt to file2.txt
void copyFile(const char *src, const char *dest) {
    FILE *source = fopen(src, "r");
    FILE *destination = fopen(dest, "w");
    if (source == NULL || destination == NULL) {
        perror("Error opening files");
        exit(1);
    }
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), source) != NULL) {
        fputs(buffer, destination);
    }
    fclose(source);
    fclose(destination);
    printf("Child 1: Content copied from file1.txt to file2.txt.\n");
}
// Function to display the content of file2.txt
void displayFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }
    printf("\nChild 2: Content of %s:\n", filename);
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    printf("\n");

    fclose(file);
}
// Function to display sorted file content in reverse order
void displaySortedReverse(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }
    char *lines[100]; // Array to store lines
    char buffer[256];
    int count = 0;
    while (fgets(buffer, sizeof(buffer), file) != NULL && count < 100) {
        lines[count] = strdup(buffer); // Store a copy of the line
        count++;
    }
    fclose(file);
    // Sort lines in lexicographical order
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(lines[i], lines[j]) > 0) {
                char *temp = lines[i];
                lines[i] = lines[j];
                lines[j] = temp;
            }
        }
    }
    // Display lines in reverse order
    printf("\nChild 3: Sorted content of %s in reverse order:\n", filename);
    for (int i = count - 1; i >= 0; i--) {
        printf("%s", lines[i]);
        free(lines[i]); // Free the allocated memory
    }
    printf("\n");
}
int main() {
    pid_t pid1, pid2, pid3;

    // Step 1: Create First Child (Child 1)
    pid1 = fork();
    if (pid1 == 0) {
        printf("Child 1: PID = %d, Parent PID = %d\n", getpid(), getppid());
        copyFile("file1.txt", "file2.txt");
        exit(0); // Exit after completing task
    } else if (pid1 > 0) {
        sleep(1); // Parent waits for 1 second
    } else {
        perror("Fork failed for Child 1");
        exit(1);
    }
    // Step 2: Create Second Child (Child 2)
    pid2 = fork();
    if (pid2 == 0) {
        printf("Child 2: PID = %d, Parent PID = %d\n", getpid(), getppid());
        displayFile("file2.txt");
        exit(0); // Exit after completing task
    } else if (pid2 > 0) {
        sleep(1); // Parent waits for 1 second
    } else {
        perror("Fork failed for Child 2");
        exit(1);
    }
    // Step 3: Create Third Child (Child 3)
    pid3 = fork();
    if (pid3 == 0) {
        printf("Child 3: PID = %d, Parent PID = %d\n", getpid(), getppid());
        displaySortedReverse("file2.txt");
        exit(0); // Exit after completing task
    } else if (pid3 > 0) {
        sleep(1); // Parent waits for 1 second
    } else {
        perror("Fork failed for Child 3");
        exit(1);
    }
    // Step 4: Parent Process waits for all children to finish
    wait(NULL);
    wait(NULL);
    wait(NULL);
    printf("\nParent Process: All child processes have completed.\n");
    printf("Parent Process: PID = %d\n", getpid());
    return 0;
}