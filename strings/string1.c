#include <stdio.h>
#include <string.h>

int main()
{
  char str1[10];

  char str2[] = "halipuddin";

  char akses = str2[3]; // akses akarakter keempat

  printf("Karakter keempat: %c\n", akses);

  int length = strlen(str2);
  printf("Panjang string: %d\n", length);

  char source[] = "Gaess";
  char destination[20];

  // menyalin string
  strcpy(destination, str2);
  printf("String setelah disalin: %s\n", destination);

  // menggabungkan string
  strcat(str2, source);
  printf("Setelah digabung: %s\n", str2);

  // membandingkan string
  char name1[] = "Halipuddin";
  char name2[] = "Fitraka";

  int result = strcmp(name1, name2);

  if (result == 0)
  {
    printf("Jumlah char kedua var sama\n");
  }
  else if (result < 0)
  {
    printf("%s lebih kecil dari %s\n", name1, name2);
  }
  else
  {
    printf("%s lebih besar dari %s\n", name1, name2);
  }

  return 0;
}