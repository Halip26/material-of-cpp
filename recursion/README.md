# **Rekursi dalam C++**

Rekursi adalah teknik di mana sebuah fungsi memanggil dirinya sendiri untuk menyelesaikan tugas tertentu. Dalam C++, rekursi dapat digunakan untuk menyelesaikan berbagai macam masalah, terutama yang memerlukan pemecahan berulang.

## Mengapa menggunakan Rekursi?

1. **Keterbacaan Kode:** Rekursi dapat membuat kode menjadi lebih mudah dibaca dan dipahami jika masalahnya dapat dipecahkan secara rekursif.

2. **Penyederhanaan Solusi:** Beberapa masalah kompleks dapat dipecahkan dengan cara yang lebih sederhana menggunakan rekursi.

3. **Fleksibilitas:** Rekursi memungkinkan untuk menyelesaikan masalah yang memiliki pola berulang tanpa perlu menulis kode yang berulang.

### Contoh Program Rekursi di C++

```cpp
#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * faktorial(n - 1);
}

// Fungsi rekursif untuk mencetak deret Fibonacci
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    // Contoh pemanggilan fungsi rekursif
    int num = 5;
    cout << "Faktorial dari " << num << " adalah: " << faktorial(num) << endl;

    cout << "Deret Fibonacci dari " << num << " angka pertama adalah: ";
    for (int i = 0; i < num; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
```

## Aturan dan Keterbatasan Rekursi

1. **Kondisi Dasar (Base Case):** Setiap fungsi rekursif harus memiliki kondisi dasar untuk menghentikan pemanggilan rekursif agar tidak terjadi pengulangan tak terbatas.

2. **Perhatikan Overhead:** Penggunaan rekursi dapat menyebabkan overhead yang signifikan pada pemanggilan fungsi. Pemanggilan fungsi rekursif membutuhkan alokasi memori tambahan.

3. **Kebutuhan Memori:** Penggunaan rekursi dalam kasus yang sangat dalam (dengan panggilan rekursif yang banyak) dapat menyebabkan penumpukan memori yang berlebihan (stack overflow).

4. **Iterasi Alternatif:** Beberapa kasus di mana rekursi digunakan dapat diimplementasikan dengan menggunakan iterasi, yang pada beberapa kondisi dapat lebih efisien dari segi penggunaan memori.

## Catatan Penting

- **Pemahaman Algoritma:** Penting untuk memahami algoritma secara menyeluruh sebelum mengimplementasikannya dalam bentuk rekursi.
  
- **Optimasi:** Terkadang, algoritma rekursif dapat dioptimalkan dengan menggunakan teknik seperti memoisasi atau pengurangan ekspresi rekursif yang berulang.

- **Pemeliharaan Kode:** Kode rekursif harus dikelola dengan baik untuk memastikan kejelasan dan kinerja yang optimal.

Rekursi adalah alat yang kuat dalam pemrograman, tetapi harus digunakan dengan hati-hati untuk memastikan kinerja yang baik dan menghindari masalah seperti stack overflow.
