#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_valid_input(const char *input) {
    while (*input) {
        if (!isdigit(*input)) {
            return 0;
        }
        input++;
    }
    return 1;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    const char *num1_str = argv[1];
    const char *num2_str = argv[2];

    if (!is_valid_input(num1_str) || !is_valid_input(num2_str)) {
        printf("Error\n");
        return 98;
    }

    int num1 = atoi(num1_str);
    int num2 = atoi(num2_str);

    int result = multiply(num1, num2);
    printf("%d\n", result);
return (0);
}
