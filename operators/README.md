# Explanation about Operator in C++

## Mod Operator

Pertama, program ini akan meminta pengguna untuk memasukkan angka yang akan dibagi (dividend) dan angka pembagi (divisor) melalui input menggunakan `cin`.

Selanjutnya, program akan menghitung sisa hasil bagi (remainder) dari pembagian tersebut dengan menggunakan operator modulo (`%`) dan menyimpan hasilnya ke variabel `remainder`.

Kemudian, program akan menghitung hasil bagi (quotient) dari pembagian tersebut menggunakan operator divisi (`/`) dan menyimpan hasilnya ke variabel `quotient`.

Terakhir, program akan mencetak sisa hasil bagi (remainder) dan hasil bagi (quotient) ke layar menggunakan `cout`.

## Pre-Post Decrement

- int x = 17, a;: Baris ini mendeklarasikan variabel integer x dan menginisialisasikannya dengan nilai 17. Juga dideklarasikan variabel integer a tanpa inisialisasi.
- int y = 27, b;: Baris ini mendeklarasikan variabel integer y dan menginisialisasikannya dengan nilai 27. Juga dideklarasikan variabel integer b tanpa inisialisasi.
- cout << "Pre Decrement Operation";: Baris ini mencetak string "Pre Decrement Operation" ke konsol.
- a = --x;: Baris ini merupakan contoh operasi pre-decrement. Nilai x dikurangi 1 sebelum nilainya di-assign ke a. Sehingga, x menjadi 16 dan a juga menjadi 16.
- cout << "\nthe result of a = " << a;: Baris ini mencetak nilai a (yang bernilai 16) ke konsol.
- cout << "\nthe result of x = " << x;: Baris ini mencetak nilai x (yang bernilai 16) ke konsol.
- cout << "\n\nPost Decrement Operation";: Baris ini mencetak string "Post Decrement Operation" ke konsol.
- b = y--;: Baris ini merupakan contoh operasi post-decrement. Nilai y yang sekarang (yaitu 27) di-assign ke b, lalu nilai y dikurangi 1. Sehingga, b menjadi 27 dan y menjadi 26.
- cout << "\nthe result of b = " << b;: Baris ini mencetak nilai b (yang bernilai 27) ke konsol.
- cout << "\nthe result of y = " << y;: Baris ini mencetak nilai y (yang bernilai 26) ke konsol.
Secara keseluruhan, kode tersebut menunjukkan bahwa pre-decrement (--x) mengubah nilai variabel sebelum nilainya di-assign atau digunakan, sedangkan post-decrement (y--) mengubah nilai variabel setelah nilainya di-assign atau digunakan.

## Pre-Post Increment

- int x = 10, a;: Baris ini mendeklarasikan variabel integer x dan menginisialisasikannya dengan nilai 10. Juga dideklarasikan variabel integer a tanpa inisialisasi.
- int y = 18, b;: Baris ini mendeklarasikan variabel integer y dan menginisialisasikannya dengan nilai 18. Juga dideklarasikan variabel integer b tanpa inisialisasi.
- cout << "Pre Increment Operation";: Baris ini mencetak string "Pre Increment Operation" ke konsol.
- a = ++x;: Baris ini merupakan contoh operasi pre-Increment. Nilai x ditambah 1 sebelum nilainya di-assign ke a. Sehingga, x menjadi 11 dan a juga menjadi 11.
- cout << "\nthe result of a = " << a;: Baris ini mencetak nilai a (yang bernilai 11) ke konsol.
- cout << "\nthe result of x = " << x;: Baris ini mencetak nilai x (yang bernilai 11) ke konsol.
- cout << "\n\nPost Increment Operation";: Baris ini mencetak string "Post Increment Operation" ke konsol.
- b = y++;: Baris ini merupakan contoh operasi post-Increment. Nilai y yang sekarang (yaitu 18) di-assign ke b, lalu nilai y ditambah 1. Sehingga, b menjadi 18 dan y menjadi 19.
- cout << "\nthe result of b = " << b;: Baris ini mencetak nilai b (yang bernilai 18) ke konsol.
- cout << "\nthe result of y = " << y;: Baris ini mencetak nilai y (yang bernilai 19) ke konsol.
Secara keseluruhan, kode tersebut menunjukkan bahwa pre-Increment (++x) mengubah nilai variabel sebelum nilainya di-assign atau digunakan, sedangkan post-Increment (y++) mengubah nilai variabel setelah nilainya di-assign atau digunakan.
