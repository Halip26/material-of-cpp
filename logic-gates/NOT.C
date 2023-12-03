#include <stdio.h>

int main() {
    int a = 7;
    int b = 14;

    // output = true (1 in C)
    printf("%d", !(a == 0));

    // output = false (0 in C)
    printf("%d", !(a == 7));

    // output = false (0 in C)
    printf("%d", !(b >= 14));

    // output = true (1 in C)
    printf("%d", !(b <= 7));

    // output = true (1 in C)
    printf("%d", !((a == 0) || (a > b)));

    // output = false (0 in C)
    printf("%d", ((a == 15) && !(a > b)));

    int x = 5;

    // output = false (0 in C)
    printf("%d", !x);

    int y = 0;

    // output = true (1 in C)
    printf("%d", !y);

    int z = -10;

    // output = false (0 in C)
    printf("%d", !z);


    return 0;
}
