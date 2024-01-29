# Perbedaan antara looping while, do while & for

Looping adalah salah satu kontrol flow yang digunakan untuk mengulangi eksekusi satu atau beberapa baris kode. Looping dapat digunakan untuk berbagai keperluan, seperti menampilkan data secara berulang, menghitung jumlah data, atau memproses data dalam suatu kumpulan.

Ada tiga jenis looping yang umum digunakan dalam bahasa C++, yaitu:

Looping while
Looping do while
Looping for

## Looping while

Looping while adalah looping yang akan terus mengeksekusi baris kode di dalam looping selama kondisi yang ditentukan bernilai benar.

Contoh:

```C++
# include <iostream>
using namespace std;

int main() {
  int i = 0;

  while (i < 10) {
    cout << i << endl;
    i++;
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

Di dalam contoh kode di atas, looping while akan terus mengeksekusi baris kode `cout << i << endl;` selama nilai variabel i kurang dari 10. Pada setiap iterasi, nilai variabel i akan bertambah 1.

## Looping do while

Looping do while adalah looping yang akan selalu mengeksekusi baris kode di dalam looping setidaknya sekali, bahkan jika kondisi yang ditentukan bernilai salah atau false.

Contoh:

```C++
#include <iostream>

using namespace std;

int main() {
  int i = 0;

  do {
    cout << i << endl;
    i++;
  } while (i < 0);

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

Di dalam contoh kode di atas, looping do while akan selalu mengeksekusi baris kode `cout << i << endl;` setidaknya sekali, bahkan jika nilai variabel i sudah lebih dari atau sama dengan 0. Pada setiap iterasi, nilai variabel i akan bertambah 1.

## Looping for

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

Di dalam contoh kode di atas, looping for akan mengeksekusi baris kode cout << i << endl; sebanyak 10 kali. Pada setiap iterasi, nilai variabel i akan bertambah 1.

## Kesimpulan

Perbedaan antara looping while, do while, dan for dapat dilihat pada tabel berikut:

| Karakteristik | Looping while | Looping do while | Looping for |
| -- | -- | -- | -- |
| Kondisi | Diperiksa di awal | Diperiksa di akhir | Diperiksa di awal |
| Eksekusi | Minimal satu kali | Minimal satu kali | Bisa nol kali |
| Perintah | Dilakukan setelah kondisi bernilai benar | Dilakukan setelah kondisi bernilai benar | Dilakukan setelah inisialisasi variabel|
