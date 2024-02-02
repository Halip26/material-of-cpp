#include <stdio.h>
#include <string.h>
#include <ctype.h> // apa gunanya lagi?

// Fungsi untuk mengecek apakah kata adalah palindrom
int isPalindrome(const char *word) // outptnya "Halip ilaH adalah Palindrome"
{
    // Menghitung panjang kata
    int length = strlen(word);

    // mengalokasikan array untuk kata yg sudah dibersihkan
    char cleanWord[length];
    int cleanIndex = 0;

    // menghapus spasi & mengubah huruf menjadi huruf kecil
    for (int i = 0; i < length; i++)
    {
        if (!isspace(word[i]))
        {
            cleanWord[cleanIndex++] = tolower(word[i]);
        }
    }
    cleanWord[cleanIndex] = '\0'; // Menambahkan null terminator

    // membandingkan kata dengan kebalikannya
    int start = 0;
    int end = cleanIndex - 1;
    while (start < end)
    {
        if (cleanWord[start] != cleanWord[end])
        {
            return 0; // bukan palindrome
        }

        start++;
        end--;
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
        fgets(kata, sizeof(kata), stdin);

        // menghilangkan newline dari input
        kata[strcspn(kata, "\n")] = '\0';

        if (strcmp(kata, "q") == 0)
        {
            printf("You exited the program\n");
            break;
        }
        // Mengecek apakah kata adalah palindrom
        else if (isPalindrome(kata))
        {
            printf("%s is a palindrome word.\n", kata);
        }
        else
        {
            printf("%s is Not a palindrome word.\n", kata);
        }
    }

    return 0;
}
