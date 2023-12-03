#include <stdio.h>

int main() {
    float a = 5.4;
    int b = 9;
    int c = 0;
    int d = -5;

    // false && false = false
    printf("%d", ((a == 0) || (a > b)));

    // false && true = true
    printf("%d", ((a == 0) || (a < b)));

    // true && false = true
    printf("%d", ((a == 5.4) || (a > b)));

    // true && true = true
    printf("%d", ((a == 5.4) || (a < b)));

    // false && false = false
    printf("%d", ((c == 0) || (c > d)));

    // true && true = true
    printf("%d", ((c == 0) || (c < d)));

    // false && true = true
    printf("%d", ((c == 5) || (c > d)));

    // true && false = true
    printf("%d", ((c == -5) || (c < d)));

    return 0;
}
