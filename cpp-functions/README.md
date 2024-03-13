# Fungsi di C++

Fungsi adalah blok kode yang berisi serangkaian pernyataan yang dirancang untuk melakukan tugas tertentu. Dalam C++, fungsi digunakan untuk mengorganisir kode menjadi unit yang dapat digunakan kembali, meningkatkan keterbacaan, dan mengurangi duplikasi kode. C++ memiliki dua jenis fungsi, yaitu fungsi bawaan (built-in functions) dan fungsi pengguna (user-defined functions).

## Fungsi Bawaan (Built-in Functions)

Fungsi bawaan atau fungsi built-in adalah fungsi yang sudah disediakan oleh bahasa C++ dan dapat digunakan tanpa harus mendefinisikan ulang. Contoh fungsi bawaan yang umum digunakan termasuk fungsi untuk memanipulasi input/output, pengolahan string, matematika, dan banyak lagi.

Contoh penggunaan fungsi bawaan:

```cpp
#include <iostream>

using namespace std;

int main() {
    // Fungsi output
    cout << "Hello, World!" << endl;

    // Fungsi input
    int num;
    cin >> num;

    // Fungsi matematika
    int result = abs(-5); // Menghasilkan nilai absolut dari -5
    cout << "Absolute value: " << result << endl;

    return 0;
}
```

## Fungsi Pengguna (User-defined Functions)

Fungsi pengguna adalah fungsi yang didefinisikan oleh pengguna sesuai dengan kebutuhan mereka. Untuk mendefinisikan fungsi pengguna, kamu harus menyertakan tipe pengembalian (return type), nama fungsi, daftar parameter (jika ada), dan blok kode yang menjalankan tugas tertentu.

Contoh definisi dan pemanggilan fungsi pengguna:

```cpp
#include <iostream>

using namespace std;

// Definisi fungsi pengguna
int add(int a, int b) {
    return a + b;
}

int main() {
    // Pemanggilan fungsi pengguna
    int result = add(3, 5);
    cout << "Result: " << result << endl;

    return 0;
}
```

## Tipe-tipe Fungsi

Terdapat dua jenis tipe fungsi berdasarkan tipe pengembalian:

1. **Fungsi dengan Nilai Pengembalian (Value-returning Functions)**: Fungsi ini mengembalikan nilai kepada pemanggilnya menggunakan pernyataan `return`. Contoh: fungsi `add` di atas.

2. **Fungsi Tanpa Nilai Pengembalian (Void Functions)**: Fungsi ini tidak mengembalikan nilai. Biasanya digunakan untuk mengeksekusi tugas tanpa hasil yang perlu dikembalikan. Contoh:

   ```cpp
   void displayMessage() {
       cout << "Hello, World!" << endl;
   }
   ```

## Parameter Fungsi

Parameter adalah nilai yang diberikan kepada fungsi saat dipanggil. Fungsi kemudian menggunakan nilai-nilai ini dalam operasinya. Parameter dideklarasikan dalam tanda kurung setelah nama fungsi.

Contoh:

```cpp
#include <iostream>
using namespace std;

// Definisi fungsi pengguna dengan parameter
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    // Pemanggilan fungsi dengan parameter
    greet("Alice");

    return 0;
}
```

Dalam contoh di atas, `"Alice"` adalah argumen yang diberikan kepada parameter `name` pada fungsi `greet`.

## Overloading Fungsi

Overloading fungsi adalah teknik yang memungkinkan kamu untuk mendefinisikan beberapa fungsi dengan nama yang sama tetapi dengan daftar parameter yang berbeda. Fungsi-fungsi ini kemudian dapat dipanggil berdasarkan jenis dan jumlah parameter yang digunakan.

Contoh:

```cpp
#include <iostream>

using namespace std;

// Fungsi pengguna yang di-overload
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    cout << "Integer Addition: " << add(5, 3) << endl;
    cout << "Float Addition: " << add(3.5f, 2.7f) << endl;

    return 0;
}
```

Dalam contoh di atas, terdapat dua definisi fungsi `add`, satu untuk jenis `int` dan satu lagi untuk jenis `float`.

## Prototipe Fungsi

Prototipe fungsi adalah deklarasi fungsi sebelum penggunaan sesungguhnya dalam program. Ini memungkinkan pemanggilan fungsi sebelum definisinya dalam kode.

Contoh:

```cpp
#include <iostream>

using namespace std;

// Prototipe fungsi
int add(int a, int b);

int main() {
    cout << "Result: " << add(5, 3) << endl;

    return 0;
}

// Definisi fungsi
int add(int a, int b) {
    return a + b;
}
```

Dalam contoh di atas, prototipe fungsi `add` dideklarasikan sebelum `main()`, dan definisi fungsi sesungguhnya ditempatkan setelah `main()`.

## Catatan Penting

- kamu dapat mendefinisikan fungsi di dalam fungsi lainnya (nested functions).
- Fungsi rekursif adalah fungsi yang memanggil dirinya sendiri.
- kamu dapat mengembalikan lebih dari satu nilai dari sebuah fungsi menggunakan referensi atau pointer.

Fungsi adalah alat yang sangat penting dalam pemrograman C++, memungkinkan kamu untuk membagi logika program menjadi bagian-bagian yang terpisah, meningkatkan keterbacaan dan pemeliharaan kode.

---
