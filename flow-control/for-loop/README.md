# Looping for

Looping for adalah looping yang memiliki tiga bagian, yaitu:

Inisialisasi variabel
Kondisi
Iterasi
Looping for akan terus mengeksekusi baris kode di dalam looping selama kondisi yang ditentukan bernilai benar.

Contoh:

```C++

# include <iostream>

using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    cout << i << endl;
  }

  return 0;
}
```

- Output:

  0
  1
  2
  3
  4
  5
  6
  7
  8
  9

Penjelasan:

Di dalam contoh kode di atas, looping for akan mengeksekusi baris kode std::cout << i << std::endl; sebanyak 10 kali. Pada setiap iterasi, nilai variabel i akan bertambah 1.
