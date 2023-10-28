#include <stdio.h>

int _atoi(char *s) {
    int result = 0;
    int sign = 1; // Initialize sign to positive

    // Skip leading whitespace
    while (*s == ' ' || *s == '\t' || *s == '\n')
        s++;

    // Check for leading '+' or '-'
    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }

    // Iterate through the string and accumulate the numeric value
    while (*s >= '0' && *s <= '9') {
        // Check for integer overflow
        if (result > (2147483647 - (*s - '0')) / 10) {
            if (sign == 1) {
                return 2147483647;
            } else {
                return -2147483648;
            }
        }
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}

int main() {
    char str[] = "   -12345";
    int result = _atoi(str);
    printf("Result: %d\n", result);
    return 0;
}
