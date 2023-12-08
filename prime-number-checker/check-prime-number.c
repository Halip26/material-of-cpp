#include <stdio.h>

int main()
{
  // Loop utama
  while (1)
  {
    int number;
    // Meminta pengguna memasukkan angka, 0 untuk keluar
    printf("Enter the number for prime number test (0 to exit): ");
    scanf("%d", &number);

    // Jika pengguna memasukkan 0, keluar dari program
    if (number == 0)
    {
      printf("You exited the program!\n");
      break;
    }

    // mengecek apabila yg diinput user bkn prime number
    else if (number >= 2)
    {
      int isPrime = 1; // Mengasumsikan bahwa angka tersebut adalah prima

      // Loop untuk memeriksa apakah angka tersebut bukan prima
      for (int i = 2; i <= number / 2; i++)
      {
        // Jika angka tersebut dapat dibagi oleh suatu angka selain 1 dan dirinya sendiri
        if (number % i == 0)
        {
          // Menampilkan informasi pembagian dan bahwa angka tersebut bukan prima
          printf("%d is divisible by %d\n", number, i);
          printf("No, it's not a prime number\n");
          isPrime = 0; // Menetapkan isPrime menjadi 0 untuk menunjukkan bahwa bukan angka prima
          break;
        }
      }

      // Jika isPrime masih 1, maka angka tersebut adalah prima
      if (isPrime)
      {
        printf("%d is divisible just by 1 & itself\n", number);
        printf("Yes, it's a prime number\n");
      }
    }
    else
    {
      // Menampilkan pesan kesalahan jika angka yang dimasukkan tidak valid
      printf("Incorrect input, try again!\n");
    }
  }

  return 0;
}
