#include <stdio.h>
#include <stdlib.h>

unsigned int fibonacci(unsigned int nth) {
    if (nth <= 1) {
        return nth;
    }
    return fibonacci(nth - 1) + fibonacci(nth - 2);
}

unsigned short int get_input() {
    unsigned short int generate_nth;

    printf("Enter a number to generate Fibonacci up to: ");
    unsigned short int error = scanf("%hu", &generate_nth);
    if (error == 1) {
        printf("Successful\n");
        // free(error);
    } else if (error != 0) {
        perror("scanf");
    } else {
        fprintf(stderr, "No matching characters\n");
    }

    return generate_nth;
}

int main() {
    printf("%d\n", fibonacci(get_input()));
    return 0;
}
