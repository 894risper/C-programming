#include <stdio.h>

int main() {
    int n, i; // Declare two integer variables: 'n' for the number of elements, 'i' for loop index
    int arr[100]; // Declare an array of integers with a size of 100

    // Prompt the user to enter the number of elements they want to input
    printf("Enter number of elements: ");
    // Read the input value and store it in the variable 'n'
    scanf("%d", &n);

    // Prompt the user to enter the integers
    printf("Enter %d integers: ", n);
    // Loop to read 'n' integers and store them in the array 'arr'
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read each integer and store it in the array at index 'i'
    }

    // Print the integers entered by the user
    printf("You entered: ");
    // Loop to print each integer stored in the array 'arr'
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print each integer followed by a space
    }
    printf("\n"); // Print a newline character at the end

    return 0; // Return 0 to indicate successful program termination
}
