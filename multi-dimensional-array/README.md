# Explanations of Multi demensional array

Array multi-dimensi adalah tipe data array di berbagai bahasa pemrograman yang memungkinkan penyimpanan elemen dalam susunan dua atau lebih dimensi. Dengan kata lain, array multi-dimensi dapat dianggap sebagai array yang memiliki lebih dari satu indeks atau "dimensi". Dalam konteks dua dimensi, array multi-dimensi dapat dibandingkan dengan tabel atau matriks.

Sebagai contoh, sebuah array dua dimensi dapat diibaratkan sebagai matriks, di mana setiap elemen dapat diidentifikasi dengan dua indeks, satu untuk baris dan satu lagi untuk kolom. Array tiga dimensi memperluas konsep ini dengan menambahkan indeks ketiga untuk menyusun elemen dalam bentuk kubus atau volume.

Contoh penggunaan array dua dimensi (matriks) dalam bahasa C++:

```c++
#include <iostream>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi array dua dimensi
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    // Akses elemen array menggunakan dua indeks
    cout << "Elemen pada baris 2, kolom 3: " << matrix[1][2] << endl;

    return 0;
}

```

Dalam contoh di atas, matrix adalah array dua dimensi dengan ukuran 3x3. Elemen pada baris kedua dan kolom ketiga diakses dengan menggunakan indeks `[1][2]`.

Array multi-dimensi memberikan fleksibilitas dalam merepresentasikan data yang memiliki struktur lebih kompleks, seperti tabel data, gambar, atau representasi struktur ruang tiga dimensi.
