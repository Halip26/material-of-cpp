# Pseudocode

Pseudocode adalah cara untuk merepresentasikan algoritma dalam bentuk teks yang lebih mudah dibaca dan dimengerti oleh manusia. Biasanya menggunakan struktur dan kata-kata yang mirip dengan bahasa pemrograman, tetapi tidak terikat oleh sintaksis atau aturan tertentu. Pseudocode digunakan terutama saat merencanakan algoritma sebelum diimplementasikan dalam bahasa pemrograman yang sebenarnya.

## Tugas 1

- Kodenya :

```c++
  int radius = 45;
  const float pi = 3.14;

  double volume = pi * 4/3 * radius * radius * radius;
  cout <<"hasilnya adalah: " << volume << endl;
  return 0;
```

- Pseudocodenya :

```text
DEKLARASI: 
- radius sebagai tipe data integer, 
- pi sebagai tipe data constanta float, 
- volume sebagai tipe data double

ALGORITMA: 

- radius <- 45 pi <- 3.14

- volume <- pi * 4/3 * radius * radius * radius

TULISKAN "hasilnya adalah: " + volume KEMBALIKAN 0

//outputnya adalah volume = 381510
```

## Tugas 2

- Kodenya :

```c++
  int Length = 15;
  int width = 25;

  int area = Length * width;
  cout << "hasilnya adalah: " << area << endl;

  return 0;
```

- Pseudocodenya :

```text
MULAI
    DEKLARASI Length SEBAGAI Integer
    DEKLARASI width SEBAGAI Integer
    DEKLARASI area SEBAGAI Integer

    SET Length MENJADI 15
    SET width MENJADI 25

    SET area MENJADI Length dikalikan dengan width

    TULISKAN "hasilnya adalah: ", area

    KEMBALIKAN 0
SELESAI

```

## Tugas 3

- Kodenya :

```c++
    bool sakit;
    cout<<"Apakah Mahasiswa sakit: ";
    cin>>sakit;

    if (sakit) {
        cout << "Mahasiswa ijin tidak masuk" << endl;
    } else {
        cout << "Mahasiswa masuk" << endl;
    }

    return 0;
```

- Pseudocodenya :

```text
MULAI
    DEKLARASI Firstsentence SEBAGAI String
    DEKLARASI Secondsentence SEBAGAI String
    DEKLARASI Fullsentence SEBAGAI String

    SET Firstsentence MENJADI "today i am eating in a mall"
    SET Secondsentence MENJADI "with my friend"

    SET Fullsentence MENJADI Firstsentence ditambahkan dengan spasi dan diikuti oleh Secondsentence

    TAMPILKAN Fullsentence

    KEMBALIKAN 0
SELESAI

```

## Tugas 4

- Kodenya :

```c++
    bool sakit;
    cout<<"Apakah Mahasiswa sakit: ";
    cin>>sakit;

    if (sakit) {
        cout << "Mahasiswa ijin tidak masuk" << endl;
    } else {
        cout << "Mahasiswa masuk" << endl;
    }

    return 0;
```

- Pseudocodenya :

```text
MULAI
    DEKLARASI sakit SEBAGAI Boolean

    TAMPILKAN "Apakah Mahasiswa sakit: "
    MENGAMBIL INPUT dari pengguna dan SIMPAN ke dalam variabel sakit

    JIKA sakit BENAR MAKA
        TAMPILKAN "Mahasiswa ijin tidak masuk"
    LAINNYA
        TAMPILKAN "Mahasiswa masuk"

    KEMBALIKAN 0
SELESAI

```
