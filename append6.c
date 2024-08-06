#include <stdio.h>

int main() {
    FILE *fptr;  // Declare a file pointer
    char filename[100], str[100];  // Arrays to store the filename and the string to be appended

    // Prompt user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);  // Read the filename from the user input

    // Open the file in append mode
    fptr = fopen(filename, "a");

    // Check if the file was successfully opened
    if (fptr == NULL) {
        printf("Cannot open file \n");  // Print error message if file cannot be opened
        return 1;  // Return 1 to indicate an error
    }

    // Prompt user for a string to append to the file
    printf("Enter a string to append to the file: ");
    getchar();  // Consume newline left by scanf
    fgets(str, 100, stdin);  // Read the string input from the user

    // Append the string to the file
    fprintf(fptr, "%s", str);  // Write the string to the file
    fclose(fptr);  // Close the file

    // Print confirmation message
    printf("Content appended to the file.\n");

    return 0;  // Return 0 to indicate successful execution
}

