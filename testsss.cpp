#include <stdio.h>

int main() {
    int num = 2070;

    printf("Các u?c s? c?a %d là s? ch?n: ", num);

    for (int i = 1; i <= num; ++i) {
        if (num % i == 0 && i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}