#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int x = 8;
    int y = 3;

    // true XOR false = true
    printf("%d ", ((a == 5) ^ (b == 5)));

    // false XOR true = true
    printf("%d ", ((a == 3) ^ (b == 10)));

    // true XOR true = false
    printf("%d ", ((a == 5) ^ (b == 10)));

    // false XOR false = false
    printf("%d ", ((x == 0) ^ (x < y)));

    // true XOR true = true
    printf("%d ", ((x == 8) ^ (x < y)));

    // false XOR true = true
    printf("%d ", ((x == 0) ^ (x > y)));

    return 0;
}
