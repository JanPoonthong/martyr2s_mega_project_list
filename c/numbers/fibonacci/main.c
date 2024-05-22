#include <stdbool.h>
#include <stdio.h>

#define LINE_MAX 30

unsigned long long int fibonacci(unsigned short int nth) {
    if (nth <= 1) {
        return nth;
    }
    return fibonacci(nth - 1) + fibonacci(nth - 2);
}

unsigned short int get_input() {
    unsigned short int generate_nth;
    char buffer[LINE_MAX];

    while (true) {
        printf("Enter a number to generate Fibonacci up to: ");
        fgets(buffer, sizeof(buffer), stdin);

        if (*buffer != '\n') {
            if (sscanf(buffer, "%hu", &generate_nth) == 1) {
                break;
            }
            fprintf(stderr, "Error: Please enter a valid integer.\n");
        }
    }

    return generate_nth;
}

int main() {
    printf("%llu\n", fibonacci(get_input()));
    return 0;
}
