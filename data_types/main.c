// Mengimpor semua pustaka
#include <stdio.h>
#include <string.h>

int main() {
    // Membuat variabel
    int myNum = 5;               // Bilangan bulat (angka bulat)
    float myFloatNum = 5.99;     // Angka desimal (float)
    double myDoubleNum = 9.98;   // Angka desimal (double)
    char myLetter = 'D';         // Karakter
    int myBoolean = 0;           // Boolean (0 untuk false, 1 untuk true)
    char myString[] = "Hello, guys";   // String

    // Menampilkan nilai variabel
    printf("int: %d\t\t\tSize of Int: %lu bytes\n", myNum, sizeof(myNum));
    printf("float: %f\t\tSize of Float: %lu bytes\n", myFloatNum, sizeof(myFloatNum));
    printf("double: %lf\t\tSize of Double: %lu bytes\n", myDoubleNum, sizeof(myDoubleNum));
    printf("char: %c\t\t\tSize of Character: %lu bytes\n", myLetter, sizeof(myLetter));
    printf("bool: %d\t\t\tSize of Boolean: %lu bytes\n", myBoolean, sizeof(myBoolean));
    printf("string: %s\tSize of String: %lu bytes\n", myString, sizeof(myString));

    return 0;
}
