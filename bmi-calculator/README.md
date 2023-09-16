# Penjelesan tentang ```#include <iostream>``` & ```using namespace std```

Berdasarkan kode yang Anda berikan, terdapat perintah ```#include <iostream>```. Pada C++ ini adalah preprocessor directive yang digunakan untuk memberitahu kompiler agar menyertakan file header iostream ke dalam program.

File header ```<iostream>``` merupakan bagian dari Library Standar C++. File tersebut berisi definisi untuk standar input dan output dalam bahasa C++, seperti objek cin (untuk input) dan cout (untuk output). Dengan menggunakan include directive tersebut, program C++ dapat menggunakan fitur-fitur ini tanpa harus menulis definisinya sendiri.

Selain itu, perintah ```using namespace std``` digunakan untuk memudahkan penggunaan nama-nama yang didefinisikan dalam namespace std, yang mana berisi kelas-kelas, fungsi-fungsi, dan objek-objek yang ada dalam library standard C++.

Jadi, pada kode di atas, kita mengimpor library iostream dan menggunakan namespace std untuk kemudian menggunakan fitur-fitur dari library tersebut, seperti cin dan cout.

## Penjelasan Tipe data Double

Tipe data double dalam pemrograman merupakan tipe data yang digunakan untuk menyimpan angka dengan presisi double atau presisi ganda. Tipe data double memiliki rentang nilai yang lebih besar dan lebih presisi dibandingkan dengan tipe data float. Tipe data double biasa digunakan untuk menyimpan angka desimal yang membutuhkan nilai presisi yang tinggi, seperti dalam operasi matematika yang membutuhkan angka desimal atau perhitungan ilmiah. Dalam kode yang diberikan, tipe data double digunakan untuk mendefinisikan tiga variabel weight, height, dan BMI. Variabel-variabel tersebut dapat digunakan untuk menyimpan angka desimal dengan presisi double.

## Penjelasan tentang "<<" & ">>"

Tanda "kurung kurang siku dua kali" dalam kode C++ yang diberikan adalah operator perpangkatan. Pada baris kode terakhir, operator tersebut digunakan untuk menghitung BMI (Body Mass Index) dengan membagi berat badan (weight) oleh kuadrat tinggi badan (height * height).

## Penjelesan tentang "endl"

endl adalah manipulator yang digunakan dalam bahasa pemrograman C++ untuk memindahkan kursor ke baris baru dan mengosongkan buffer output. Ketika digunakan dalam kode, endl akan membuat baris baru setelah teks atau data yang terakhir ditampilkan.

## Penjelesan tentang cin >>

Dalam bahasa C++, cin >> digunakan untuk membaca input dari pengguna atau dari file. Data yang dibaca menggunakan operator ekstraksi (>>) kemudian disimpan ke dalam variabel atau digunakan langsung dalam program.
