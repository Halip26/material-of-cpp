# Pengertian Array & List

Array dalam bahasa pemrograman C++ adalah struktur data yang digunakan untuk menyimpan sekumpulan data dalam satu tempat. Array terdiri dari elemen-elemen yang memiliki tipe data yang sama dan diberi nama tertentu. Setiap elemen diidentifikasi oleh indeksnya yang dimulai dari 0.

Array dapat dibedakan menjadi dua jenis, yaitu array satu dimensi dan array multi dimensi.

Array satu dimensi adalah array yang hanya memiliki satu dimensi, yaitu indeks. Array satu dimensi dapat digunakan untuk menyimpan sekumpulan data yang memiliki urutan yang sama, misalnya daftar nama, daftar angka, atau daftar huruf.

Array multi dimensi adalah array yang memiliki dua atau lebih dimensi. Array multi dimensi dapat digunakan untuk menyimpan sekumpulan data yang memiliki urutan yang lebih kompleks, misalnya matriks, tabel, atau daftar tiga dimensi.

Untuk membuat array dalam C++, kita dapat menggunakan deklarasi berikut:

```cpp
#include <iostream>
using namespace std;

int main() {
  // Deklarasi array
  int angka[10];

  // Inisialisasi array
  for (int i = 0; i < 10; i++) {
    angka[i] = i;
  }

  // Mencetak array
  for (int i = 0; i < 10; i++) {
    cout << angka[i] << " ";
  }

  cout << endl;

  // Mengakses elemen array
  int nilai = angka[5];

  // Mencetak nilai elemen array
  cout << nilai << endl;

  return 0;
}

```

## Perbedaan Array dengan List

Array dan list adalah dua tipe data collection yang digunakan untuk menyimpan sekumpulan data dalam satu tempat. Namun, terdapat beberapa perbedaan mendasar antara keduanya, yaitu:

- Ukuran
Array memiliki ukuran yang tetap, sedangkan list dapat diubah ukurannya. Artinya, kita harus menentukan ukuran array saat deklarasi, sedangkan ukuran list dapat kita ubah sewaktu-waktu.

- Tipe data
Array hanya dapat menyimpan elemen-elemen dari satu tipe data, sedangkan list dapat menyimpan elemen-elemen dari berbagai tipe data.

- Operasi
Array menawarkan operasi yang lebih terbatas dibandingkan list. Misalnya, kita tidak dapat menambahkan elemen baru ke array di tengah-tengah array.

Berikut adalah tabel perbandingan antara array dan list:
| Fitur   | Array        | List           |
|---------|--------------|----------------|
| Ukuran  | Tetap        | Dapat diubah   |
| Tipe data | Satu       | Beragam        |
| Operasi | Terbatas     | Luas           |

- contoh array nama_siswa

```cpp


#include <iostream>
using namespace std;

int main() {
  // Deklarasi array
  char nama_siswa[10][20];

  // Inisialisasi array
  for (int i = 0; i < 10; i++) {
    cout << "Masukkan nama siswa ke-" << i + 1 << ": ";
    cin >> nama_siswa[i];
  }

  // Mencetak array
  for (int i = 0; i < 10; i++) {
    cout << "Nama siswa ke-" << i + 1 << ": " << nama_siswa[i] << endl;
  }
}
 ```

- sedangkan contoh array daftar_belanja

```cpp
#include <iostream>
#include <list>

int main() {
  // Deklarasi list
  list<string> daftar_belanja;

  // Menambah elemen ke list
  daftar_belanja.push_back("Beras");
  daftar_belanja.push_back("Gula");
  daftar_belanja.push_back("Tepung");

  // Mencetak list
  for (const string& item : daftar_belanja) {
    cout << item << " ";
  }

  return 0;
}
```
