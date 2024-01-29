# Penjelasan Reference Variable

Variabel referensi di C++ adalah variabel yang menunjuk ke variabel lain. Variabel referensi tidak memiliki nilai sendiri, melainkan menunjuk ke variabel lain dan menggunakan nilai variabel tersebut.

Variabel referensi dideklarasikan dengan menggunakan simbol &. Misalnya, deklarasi berikut mendeklarasikan variabel referensi bernama ref yang menunjuk ke variabel a:

```cpp
int a = 10;
int& ref = a;
```

Variabel ref sekarang memiliki nilai yang sama dengan variabel a. Jika kita mengubah nilai ref, nilai a juga akan berubah.

```cpp
ref = 20;

cout << a << endl; // 20
```

Variabel referensi dapat digunakan untuk menghemat memori. Jika kita memiliki dua variabel yang menyimpan nilai yang sama, kita dapat menggunakan variabel referensi untuk menunjuk ke satu variabel saja.

```cpp
int a = 10;
int b = a;

// Menggunakan variabel referensi
int& ref = a;

cout << a << endl; // 10
cout << b << endl; // 10
```

Variabel referensi juga dapat digunakan untuk mempermudah pemrograman. Misalnya, kita dapat menggunakan variabel referensi untuk mengirimkan parameter ke fungsi.

```cpp
void foo(int& x) {
  x = 20;
}

int main() {
  int a = 10;

  foo(a);

  cout << a << endl; // 20
}
```

Pada contoh di atas, fungsi foo() menerima parameter x yang merupakan variabel referensi. Ini berarti bahwa fungsi foo() dapat mengubah nilai variabel a langsung.

Berikut adalah beberapa perbedaan antara variabel referensi dan variabel biasa di C++:
|Fitur |Variabel referensi |Variabel biasa|
| -- | -- | -- |
|Nilai  | Tidak memiliki nilai sendiri, melainkan menunjuk ke variabel lain |  Memiliki nilai sendiri |
|Memori | Menghemat memori | Membutuhkan memori untuk menyimpan nilai sendiri |
|Pemrograman | Mempermudah pemrograman | Lebih kompleks |
