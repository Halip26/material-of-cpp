# Materi tentang Files di C++

File adalah kumpulan data yang disimpan di disk. Dalam C++, kamu dapat bekerja dengan file untuk berbagai tujuan, seperti:

* Menyimpan data program
* Membaca data dari file eksternal
* Menulis data ke file eksternal

## Jenis-jenis File dalam C++

Ada dua jenis file utama dalam C++:

* File Source (.cpp)

File source berisi kode program C++. File ini dikompilasi oleh compiler C++ untuk menghasilkan file executable.

* File Header (.h)

File header berisi deklarasi untuk variabel, fungsi, dan kelas yang digunakan dalam program C++. File ini di-include dalam file source untuk memungkinkan compiler mengetahui tentang simbol-simbol yang digunakan dalam program.

## Operasi File Dasar

Berikut adalah beberapa operasi file dasar yang dapat dilakukan dalam C++:

* Membuka File

Untuk membuka file, kamu perlu menggunakan fungsi `fopen()`. Fungsi ini mengembalikan pointer ke file yang dapat digunakan untuk membaca dan menulis data.

* Membaca dari File

kamu dapat membaca data dari file menggunakan fungsi `fread()`. Fungsi ini membaca sejumlah byte tertentu dari file dan menyimpannya dalam buffer.

* Menulis ke File

kamu dapat menulis data ke file menggunakan fungsi `fwrite()`. Fungsi ini menulis sejumlah byte tertentu dari buffer ke file.

* Menutup File

Ketika kamu selesai dengan file, kamu harus menutupnya menggunakan fungsi `fclose()`. Ini akan membebaskan sumber daya yang digunakan oleh file.

## Contoh Penggunaan File

Berikut adalah contoh sederhana tentang cara menggunakan file dalam C++:

[project.cpp](project.cpp)

Contoh ini membuka file yang dimasukkan pengguna dan mencetak isinya ke layar.

## Kesimpulan

File adalah bagian penting dari pemrograman C++. Dengan memahami cara bekerja dengan file, kamu dapat menyimpan data program, membaca data dari file eksternal, dan menulis data ke file eksternal.

## Referensi

* C++ File I/O Tutorial: [URL yang tidak valid dihapus]
* File Handling in C++: [https://www.programiz.com/cpp-programming/file-handling](https://www.programiz.com/cpp-programming/file-handling)
