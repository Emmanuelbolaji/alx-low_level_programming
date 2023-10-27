#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int sum = 0;

    if (argc < 2) {
        printf("0\n");
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        int len = strlen(argv[i]);
        int is_valid = 1;
        int number = atoi(argv[i]);  // Initialize 'number' for each argument
    }
        for (int j = 0; j < len; j++) {
            if (!isdigit(argv[i][j]) {
                is_valid = 0;
                break;
            }
        }

        if (!is_valid) {
            printf("Error\n");
            return 1;
        }

        if (number > 0) {
            sum += number;
        }
    }

    printf("%d\n", sum);
    return 0;
}
