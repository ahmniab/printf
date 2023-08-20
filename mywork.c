#include <unistd.h> // For write system call
#include<stdio.h>
void print_integer(int num) {
    char buffer[20]; // Buffer to store the converted number
    int i = 0;
    // Handle negative numbers
    if (num < 0) {
        write(1, "-", 1); // Write to standard output
        num = -num;
    }

    // Convert the number to a string
    do {
        buffer[i++] = '0' + (num % 10);
        num /= 10;
    } while (num > 0);

    // Reverse the string
    while (i > 0) {
        write(1, &buffer[--i], 1);
    }
}

void _printf(const char* format, ...) {
    // Variable argument list
    int* args = (int*)&format + 1;

    // Iterate over the format string
    while (*format != '\0') {
        if (*format == '%') {
            format++; // Move past '%'

            // Handle placeholder based on format specifier
            if (*format == 'd') {
                int num = *args++;
                print_integer(num);
            }
        } else {
            write(1, format, 1);
        }

        format++;
    }
}

int main() {
    int num = 42;
    _printf("Number: %d\n", num);
    return 0;
}