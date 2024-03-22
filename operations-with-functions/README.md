# Operasi dengan Fungsi di C++

## Pendahuluan

Fungsi di C++ adalah blok kode yang dapat digunakan kembali untuk melakukan tugas tertentu. Fungsi dapat menerima input (parameter) dan menghasilkan output  (nilai kembalian atau return). Dalam C++, kita dapat melakukan berbagai operasi dengan fungsi, seperti:

**1. Menjalankan Fungsi:**

- Untuk menjalankan fungsi, kita perlu memanggil namanya diikuti dengan tanda kurung dan argumen (jika ada).
- Contoh:

```c++
int tambah(int a, int b) {
  return a + b;
}

int hasil = tambah(5, 3); // hasil = 8

std::cout << "hasilnya adalah " << hasil << endl; 
```

**2. Melewatkan Nilai sebagai Argumen:**

- Fungsi dapat menerima nilai sebagai argumen.
- Nilai argumen diteruskan ke dalam fungsi saat pemanggilan.
- Contoh:

```c++
void cetak(int angka) {
  std::cout << "Angka: " << angka << std::endl;
}

cetak(10); // Output: Angka: 10
```

**3. Menerima Nilai Kembalian:**

- Fungsi dapat mengembalikan nilai.
- Nilai kembalian diperoleh dari fungsi setelah pemanggilan.
- Contoh:

```c++
int kuadrat(int angka) {
  return angka * angka;
}

int hasil = kuadrat(4); // hasil = 16
```

**4. Operasi Aritmatika dengan Fungsi:**

- Kita dapat melakukan operasi aritmatika dengan hasil fungsi.
- Contoh:

```c++
int a = 5;
int b = 3;

int hasil = tambah(a, b) * 2; // hasil = 16
```

**5. Operasi Perbandingan dengan Fungsi:**

- Kita dapat melakukan operasi perbandingan dengan hasil fungsi.
- Contoh:

```c++
int a = 10;
int b = 5;

bool isLebihBesar = kuadrat(a) > kuadrat(b); // isLebihBesar = true
```

**6. Operasi Bitwise dengan Fungsi:**

- Kita dapat melakukan operasi bitwise dengan hasil fungsi.
- Contoh:

```c++
int a = 10;
int b = 5;

int hasil = ~tambah(a, b); // hasil = -9
```

**7. Mengoperasikan Pointer ke Fungsi:**

- Kita dapat menyimpan alamat fungsi dalam variabel pointer.
- Pointer fungsi dapat digunakan untuk memanggil fungsi.
- Contoh:

```c++
int tambah(int a, int b) {
  return a + b;
}

int (*fungsiPenjumlahan)(int, int) = tambah;

int hasil = fungsiPenjumlahan(7, 2); // hasil = 9
```

**Kesimpulan:**

Operasi dengan fungsi di C++ memungkinkan kita untuk memanfaatkan kembali kode dan melakukan berbagai operasi dengan hasil fungsi. Hal ini membuat program C++ lebih fleksibel dan mudah dipelihara.

### Referensi

- Belajar C++ #10: Mengenal Fungsi dan Prosedur pada C++: [https://www.petanikode.com/cpp-fungsi/](https://www.petanikode.com/cpp-fungsi/)
- 77 Keg. Pembelajaran 7 : Fungsi dalam C++: [URL yang tidak valid dihapus]
- Functions (C++): [https://learn.microsoft.com/id-id/cpp/cpp/functions-cpp?view=msvc-170](https://learn.microsoft.com/id-id/cpp/cpp/functions-cpp?view=msvc-170)
