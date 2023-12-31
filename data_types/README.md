# Penjelesan tentang ```#include <iostream>``` & ```using namespace std```

```#include <iostream>``` Pada C++ ini adalah preprocessor directive yang digunakan untuk memberitahu kompiler agar menyertakan file header iostream ke dalam program.

File header ```<iostream>``` merupakan bagian dari Library Standar C++. File tersebut berisi definisi untuk standar input dan output dalam bahasa C++, seperti objek cin (untuk input) dan cout (untuk output). Dengan menggunakan include directive tersebut, program C++ dapat menggunakan fitur-fitur ini tanpa harus menulis definisinya sendiri.

Selain itu, perintah ```using namespace std``` digunakan untuk memudahkan penggunaan nama-nama yang didefinisikan dalam namespace std, yang mana berisi kelas-kelas, fungsi-fungsi, dan objek-objek yang ada dalam library standard C++.

Jadi, pada kode di atas, kita mengimpor library iostream dan menggunakan namespace std untuk kemudian menggunakan fitur-fitur dari library tersebut, seperti cin dan cout.

## Penjelasan Tipe data Double

Tipe data double dalam pemrograman merupakan tipe data yang digunakan untuk menyimpan angka dengan presisi double atau presisi ganda. Tipe data double memiliki rentang nilai yang lebih besar dan lebih presisi dibandingkan dengan tipe data float. Tipe data double biasa digunakan untuk menyimpan angka desimal yang membutuhkan nilai presisi yang tinggi, seperti dalam operasi matematika yang membutuhkan angka desimal atau perhitungan ilmiah. Dalam kode yang diberikan, tipe data double digunakan untuk mendefinisikan tiga variabel weight, height, dan BMI. Variabel-variabel tersebut dapat digunakan untuk menyimpan angka desimal dengan presisi double.

## Penjelasan tentang "<<" & ">>"

Tanda "kurung kurang siku dua kali" dalam kode C++ yang diberikan adalah operator perpangkatan.

## return 0

Baris return 0; digunakan dalam fungsi utama program C++ untuk mengindikasikan keberhasilan eksekusi program.

Dalam C++, fungsi utama bertipe int dan diharapkan untuk mengembalikan nilai integer yang menunjukkan status keluar dari program. Berdasarkan konvensi, nilai pengembalian 0 biasanya menunjukkan eksekusi yang berhasil, sementara nilai bukan nol menunjukkan kesalahan atau penghentian yang tidak normal.

Dalam kode yang diberikan, return 0; digunakan pada akhir fungsi utama untuk menunjukkan bahwa program telah dieksekusi tanpa kesalahan dan keluar dengan status berhasil.
