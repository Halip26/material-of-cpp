# Abstraksi dan Pewarisan dalam Pemrograman Berorientasi Objek (OOP)

## **Abstraksi**

Abstraksi adalah konsep fundamental dalam OOP yang memungkinkan programmer untuk fokus pada aspek-aspek penting dari suatu objek dan mengabaikan detail implementasinya. Dengan abstraksi, programmer dapat membuat kode yang lebih mudah dipahami, digunakan, dan dipelihara.

Ada dua tingkat abstraksi dalam OOP:

* **Abstraksi data**: Menyembunyikan detail implementasi data dari pengguna. Pengguna hanya perlu mengetahui cara mengakses dan memanipulasi data, tanpa harus mengetahui bagaimana data tersebut disimpan atau diproses.
* **Abstraksi proses**: Menyembunyikan detail implementasi proses dari pengguna. Pengguna hanya perlu mengetahui cara menggunakan proses tersebut, tanpa harus mengetahui bagaimana proses tersebut diimplementasikan.

Abstraksi dapat diimplementasikan dengan menggunakan berbagai teknik, antara lain:

* **Kelas**: Kelas adalah abstraksi data yang mendefinisikan atribut dan metode untuk objek.
* **Interface**: Interface adalah abstraksi proses yang mendefinisikan metode yang harus diimplementasikan oleh kelas.
* **Polimorfisme**: Polimorfisme memungkinkan objek dari kelas yang berbeda untuk menanggapi pesan yang sama dengan cara yang berbeda.

### **Manfaat Abstraksi**

Abstraksi menawarkan beberapa manfaat, antara lain:

* **Membuat kode lebih mudah dipahami**: Programmer hanya perlu fokus pada aspek-aspek penting dari suatu objek, sehingga kode lebih mudah dipahami dan digunakan.
* **Membuat kode lebih mudah dipelihara**: Perubahan pada detail implementasi suatu objek tidak akan memengaruhi kode yang menggunakan objek tersebut.
* **Meningkatkan modularitas**: Abstraksi memungkinkan programmer untuk membuat kode yang lebih modular, sehingga kode lebih mudah dikelola dan dipelihara.

### **Contoh Abstraksi**

Berikut adalah contoh abstraksi dalam bahasa pemrograman C++:

```c++
class Segitiga {
private:
  double alas;
  double tinggi;

public:
  Segitiga(double alas, double tinggi) {
    this->alas = alas;
    this->tinggi = tinggi;
  }

  double hitungLuas() {
    return (alas * tinggi) / 2;
  }
};

int main() {
  Segitiga segitiga(5, 10);
  double luas = segitiga.hitungLuas();
  std::cout << "Luas segitiga: " << luas << std::endl;
  return 0;
}
```

Dalam contoh ini, kelas `Segitiga` menyembunyikan detail implementasi data (`alas` dan `tinggi`) dan proses (`hitungLuas()`) dari pengguna. Pengguna hanya perlu mengetahui cara membuat objek `Segitiga` dan memanggil metode `hitungLuas()`.

### **Pewarisan**

Pewarisan adalah konsep OOP yang memungkinkan kelas untuk mewarisi atribut dan metode dari kelas lain. Kelas yang mewarisi disebut kelas turunan, sedangkan kelas yang diwarisi disebut kelas induk.

Pewarisan menawarkan beberapa manfaat, antara lain:

* **Membuat kode lebih mudah digunakan kembali**: Kode yang telah ditulis di kelas induk dapat digunakan kembali di kelas turunan.
* **Membuat hierarki kelas**: Pewarisan memungkinkan programmer untuk membuat hierarki kelas yang mencerminkan hubungan antar objek.
* **Meningkatkan modularitas**: Pewarisan memungkinkan programmer untuk membuat kode yang lebih modular, sehingga kode lebih mudah dikelola dan dipelihara.

### Contoh Pewarisan

Berikut adalah contoh pewarisan dalam bahasa pemrograman C++:

```c++
class BangunDatar {
public:
  virtual double hitungLuas() = 0;
};

class Segitiga : public BangunDatar {
private:
  double alas;
  double tinggi;

public:
  Segitiga(double alas, double tinggi) {
    this->alas = alas;
    this->tinggi = tinggi;
  }

  double hitungLuas() override {
    return (alas * tinggi) / 2;
  }
};

int main() {
  Segitiga segitiga(5, 10);
  double luas = segitiga.hitungLuas();
  std::cout << "Luas segitiga: " << luas << std::endl;
  return 0;
}
```

Dalam contoh ini, kelas `Segitiga` mewarisi metode `hitungLuas()` dari kelas `BangunDatar`. Kelas `Segitiga` kemudian mengimplementasikan metode `hitungLuas()` dengan cara yang spesifik untuk segitiga.

### Kesimpulan Abstraksi

Abstraksi dan pewarisan adalah dua konsep fundamental dalam OOP yang memungkinkan programmer untuk menulis kode yang lebih mudah dipahami, digunakan,

---

## **Pewarisan Lebih Dalam (Inheritance) di C++**

Konsep pewarisan (inheritance) dalam C++ telah disinggung sebelumnya. Mari kita bahas lebih dalam tentang jenis-jenis pewarisan dan hal-hal penting yang perlu diperhatikan.

### Jenis-jenis Pewarisan

Ada tiga jenis pewarisan dasar dalam C++:

1. **Pewarisan Publik (Public Inheritance)**:
    * Merupakan jenis pewarisan yang paling umum digunakan.
    * Saat kelas turunan mewarisi secara publik dari kelas induk, semua anggota publik dan protected dari kelas induk menjadi anggota publik dari kelas turunan.
    * Anggota private kelas induk tetap menjadi private dan tidak dapat diakses secara langsung oleh kelas turunan maupun objeknya.

2. **Pewarisan Protected (Protected Inheritance)**:
    * Digunakan ketika kelas turunan perlu mengakses anggota protected dari kelas induk, namun tidak ingin anggota tersebut menjadi publik.
    * Anggota publik dan protected dari kelas induk menjadi anggota protected di kelas turunan.
    * Anggota private tetap tidak bisa diakses.

3. **Pewarisan Private (Private Inheritance)**:
    * Digunakan jarang karena membatasi akses anggota kelas induk.
    * Anggota publik dan protected dari kelas induk menjadi anggota private di kelas turunan.
    * Ini artinya anggota tersebut tidak bisa diakses langsung dari luar kelas turunan, bahkan dari objek turunan sekalipun.  

### Contoh Jenis-jenis Pewarisan

```c++
// Pewarisan Publik
class BangunDatar {
public:
  virtual double hitungLuas() = 0;
};

class Segitiga : public BangunDatar {
private:
  double alas;
  double tinggi;

public:
  Segitiga(double alas, double tinggi) {
    this->alas = alas;
    this->tinggi = tinggi;
  }

  double hitungLuas() override {
    return (alas * tinggi) / 2;
  }
};

// Pewarisan Protected (sebagai contoh)
class Kendaraan {
protected:
  int jumlahRoda;

public:
  Kendaraan(int jumlahRoda) {
    this->jumlahRoda = jumlahRoda;
  }
};

class SepedaMotor : protected Kendaraan { // Perhatikan penggunaan protected pada inheritance
public:
  SepedaMotor() : Kendaraan(2) {} // Memanggil konstruktor kelas induk saat objek dibuat
  void display() {
    std::cout << "Sepeda Motor memiliki " << jumlahRoda << " roda." << std::endl;
  }
};
```

### Hal Penting yang Perlu Diperhatikan

* **Konstruktor dalam Pewarisan**:
  * Saat kelas turunan memiliki anggota tambahan, pastikan untuk diinisialisasi dalam konstruktornya.
  * Jika kelas induk memiliki konstruktor dengan parameter, maka wajib untuk memanggil konstruktor tersebut dari konstruktor kelas turunan menggunakan inisialisasi list.
* **Destruktor dalam Pewarisan**:
  * Umumnya destruktor kelas turunan cukup memanggil destruktor kelas induk secara otomatis.
* **Akses Anggota**:
  * Gunakan operator `::` untuk mengakses anggota private kelas induk dari method publik kelas turunan (jika memang diperlukan).
* **Polimorfisme**:
  * Pewarisan merupakan dasar untuk polimorfisme, yaitu kemampuan objek dari kelas berbeda untuk merespon pesan yang sama dengan cara yang berbeda.

### Kesimpulan Pewarisan (Inheritence)

Pewarisan adalah konsep penting dalam OOP yang memungkinkan kita untuk membuat hierarki kelas dan memanfaatkan kode yang sudah ada. Dengan memahami jenis-jenis pewarisan dan hal-hal penting yang menyertainya, Anda dapat menulis kode C++ yang lebih efisien dan terstruktur.
