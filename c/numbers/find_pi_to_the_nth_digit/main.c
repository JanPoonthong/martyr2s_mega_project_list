#include <stdio.h>
#include <math.h>


// Source: https://en.wikipedia.org/wiki/Gauss%E2%80%93Legendre_algorithm
int find_pi_to_the_nth_digit() {
    float a = 1;
    float b = 1/sqrt(2);
    float t = 1/4;
    float p = 1;;

    return 0;
}

unsigned short int get_user_input() {
    unsigned short int number_user_enter;

    printf("Enter a number to generate PI up to: ");
    scanf("%hu", &number_user_enter);

    return number_user_enter;
}

int main() {
    get_user_input();
    return 0;
}
