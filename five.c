#include <stdio.h>

int main() {
    // Declare file pointer and buffer for filename and string
    FILE *fptr;
    char filename[100], str[100];

    // Prompt the user to enter the filename
    printf("Enter the filename: ");
    scanf("%s", filename);  // Read the filename from the user

    // Open the file for writing (this will create the file if it does not exist, or truncate it if it does)
    fptr = fopen(filename, "w");

    // Check if the file was successfully opened
    if (fptr == NULL) {
        printf("Cannot open file \n");  // Error message if the file cannot be opened
        return 1;  // Return a non-zero value to indicate an error
    }

    // Prompt the user to enter a string to write to the file
    printf("Enter a string to write to the file: ");
    getchar(); // Consume the newline character left in the buffer by scanf
    fgets(str, 100, stdin);  // Read the input string from the user

    // Write the string to the file
    fprintf(fptr, "%s", str);
    fclose(fptr);  // Close the file after writing

    // Reopen the file for reading
    fptr = fopen(filename, "r");

    // Check if the file was successfully reopened
    if (fptr == NULL) {
        printf("Cannot open file \n");  // Error message if the file cannot be opened
        return 1;  // Return a non-zero value to indicate an error
    }

    // Print the content of the file to the console
    printf("Content of the file:\n");
    while (fgets(str, 100, fptr) != NULL) {
        printf("%s", str);  // Print each line read from the file
    }

    fclose(fptr);  // Close the file after reading
    return 0;  // Return 0 to indicate successful completion
}
