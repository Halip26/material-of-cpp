#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Fungsi untuk memeriksa apakah sebuah kata merupakan palindrome
int isPalindrome(const char *word)
{
  // Membuat salinan kata tanpa spasi dan dengan huruf kecil
  char clean_word[100];
  int clean_word_index = 0;

  // looping untuk menghapus spasi dan konversi upper to lower
  for (int i = 0; i < strlen(word); i++)
  {
    if (!isspace(word[i]))
    {
      clean_word[clean_word_index++] = tolower(word[i]);
    }
  }
  clean_word[clean_word_index] = '\0';

  // Membandingkan kata dengan kebalikannya
  int length = strlen(clean_word);
  // looping untuk memeriksa sebuah kata adalah bukan palindrome
  for (int i = 0; i < length / 2; i++) // memeriksa apakah i kurang dari setengah panjang string(length)
  {
    if (clean_word[i] != clean_word[length - i - 1])
    {
      return 0; // Bukan palindrome
    }
  }
  return 1; // Palindrome
}

int main()
{
  char kata_input[100];

  // Memeriksa palindrome kata
  while (1)
  {
    printf("Masukkan kata (q untuk keluar): ");
    scanf("%s", kata_input);

    if (strcmp(kata_input, "q") == 0)
    {
      printf("Anda keluar dari program\n");
      break;
    }
    else if (isPalindrome(kata_input))
    {
      printf("%s adalah palindrome\n", kata_input);
    }
    else
    {
      printf("%s adalah bukan palindrome\n", kata_input);
    }
  }

  return 0;
}
