#include <stdio.h>
#include <stdlib.h>

char* create_array(unsigned int size, char c) {
    // Allocate memory for the array
    char* charArray = (char*)malloc(size * sizeof(char));

    // Check if memory allocation was successful
    if (charArray == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    // Initialize the array with the specified character
    for (int i = 0; i < size; i++) {
        charArray[i] = c;
    }

    return charArray;
}

int main(void) {
    // Specify the size of the array
    int size = 10;

    // Specify the initial value for the array
    char initialValue = 'A';

    // Create and initialize the array
    char* myArray = create_array(size, initialValue);

    // Print the elements of the array
    for (int i = 0; i < size; i++) {
        printf("%c ", myArray[i]);
    }

    // Don't forget to free the allocated memory
    free(myArray);

    return 0;
}
