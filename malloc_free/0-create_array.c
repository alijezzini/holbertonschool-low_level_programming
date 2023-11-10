#include <stdio.h>
#include <stdlib.h>

char* create_array(unsigned int size, char c) {

    char* charArray = (char*)malloc(size * sizeof(char));

    if (charArray == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < size; i++) {
        charArray[i] = c;
    }

    return charArray;
}

int main(void) {
    
    int size = 10;

    char initialValue = 'A';

    char* myArray = create_array(size, initialValue);

    return 0;
}

