#include <stdio.h>
#include <string.h>

// Fungsi untuk mengecek apakah kata adalah palindrom
int isPalindrome(char word[])
{
    // Menghitung panjang kata
    int length = strlen(word);

    // Menginisialisasi indeks untuk karakter pertama dan terakhir
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        // Membandingkan karakter dari kedua ujung
        if (word[i] != word[j])
        {
            return 0; // Bukan palindrom
        }
    }
    return 1; // Palindrom
}

int main()
{
    char kata[100];
    while (1)
    {
        // Meminta pengguna untuk memasukkan kata
        printf("Masukkan kata (q for exit): ");
        scanf("%s", kata);

        if (kata == "q")
        {
            printf("You exited the program");
            break;
        }

        // Mengecek apakah kata adalah palindrom
        if (isPalindrome(kata))
        {
            printf("%s adalah palindrom.\n", kata);
        }
        else
        {
            printf("%s bukan palindrom.\n", kata);
        }
    }

    return 0;
}
