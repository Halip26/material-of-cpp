# Objects, Class and Encapsulation

## Kelas dan Enkapsulasi dalam C++

### **Kelas**

Kelas adalah cetak biru untuk objek, yang mendefinisikan atribut (data) dan metode (fungsi) yang terkait dengan objek tersebut. Kelas bertindak sebagai templat untuk membuat objek, yang merupakan instansiasi konkret dari kelas.

**Struktur Kelas:**

```c++
class NamaKelas {
  // Deklarasi atribut (data)
  tipe_data nama_atribut;

  // Deklarasi metode (fungsi)
  public:
    tipe_kembalian nama_metode(parameter);
    // ...

  private:
    tipe_kembalian nama_metode_private(parameter);
    // ...
};
```

### **Enkapsulasi**

Enkapsulasi adalah prinsip dalam pemrograman berorientasi objek (OOP) yang menyembunyikan detail implementasi internal suatu objek dan hanya mengekspos antarmuka publiknya. Hal ini membantu untuk:

- **Meningkatkan keamanan:** Data dan metode internal objek terlindungi dari akses dan modifikasi yang tidak sah.
- **Meningkatkan modularitas:** Kode menjadi lebih mudah dipahami, diubah, dan dipelihara karena detail implementasi tersembunyi.
- **Meningkatkan keandalan:** Perubahan internal pada kelas tidak berdampak pada pengguna yang hanya berinteraksi dengan antarmuka publiknya.

- **Access Modifier**

Access modifier digunakan untuk mengontrol akses ke atribut dan metode kelas. Ada tiga access modifier utama dalam C++:

- **public:** Dapat diakses dari mana saja.
- **private:** Hanya dapat diakses dari dalam kelas itu sendiri.
- **protected:** Dapat diakses dari dalam kelas itu sendiri dan kelas turunannya.

### **Contoh Penggunaan Kelas dan Enkapsulasi**

Berikut adalah contoh kelas sederhana untuk merepresentasikan titik dalam ruang 2D:

```c++
class Titik {
private:
  double x, y;

public:
  Titik(double x, double y);
  double getX() const;
  double getY() const;
  void setX(double x);
  void setY(double y);
};

Titik::Titik(double x, double y) {
  this->x = x;
  this->y = y;
}

double Titik::getX() const {
  return x;
}

double Titik::getY() const {
  return y;
}

void Titik::setX(double x) {
  this->x = x;
}

void Titik::setY(double y) {
  this->y = y;
}
```

Dalam contoh ini, atribut `x` dan `y` dideklarasikan sebagai `private`, sehingga hanya dapat diakses dari dalam kelas `Titik` itu sendiri. Metode `getX()`, `getY()`, `setX()`, dan `setY()` menyediakan antarmuka publik untuk mengakses dan memodifikasi nilai atribut.

### **Manfaat Kelas dan Enkapsulasi**

Kelas dan enkapsulasi menawarkan banyak manfaat dalam pengembangan perangkat lunak, termasuk:

- **Kode yang lebih terstruktur dan mudah dipahami:** Kelas membantu mengelompokkan data dan fungsionalitas yang terkait, membuat kode lebih terstruktur dan mudah dipahami.
- **Kode yang lebih mudah dipelihara:** Enkapsulasi membantu menyembunyikan detail implementasi internal, sehingga kode lebih mudah diubah dan dipelihara tanpa berdampak pada pengguna.
- **Kode yang lebih aman dan andal:** Enkapsulasi membantu melindungi data dan metode internal dari akses dan modifikasi yang tidak sah, meningkatkan keamanan dan keandalan kode.
- **Kode yang lebih mudah digunakan kembali:** Kelas dapat digunakan kembali untuk membuat objek yang serupa, meningkatkan produktivitas dan efisiensi pengembangan.

Secara keseluruhan, kelas dan enkapsulasi adalah konsep fundamental dalam pemrograman berorientasi objek yang membantu membangun kode yang lebih terstruktur, mudah dipahami, mudah dipelihara, aman, andal, dan mudah digunakan kembali.
