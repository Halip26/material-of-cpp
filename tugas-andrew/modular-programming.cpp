#include <iostream>
using namespace std;

// Fungsi untuk menghitung rata-rata nilai
double hitungRataRata(int n) {
    double totalNilai = 0;

    for (int i = 0; i < n; i++) {
        double nilai;
        cout << "Masukkan nilai siswa " << i + 1 << ": ";
        cin >> nilai;
        totalNilai += nilai;
    }

    return totalNilai / n;
}

// Fungsi untuk menghitung jumlah bilangan ganjil dan menghitungnya
void hitungJumlahbilanganGanjil(int n) {
    int totalBilanganGanjil = 0;
    int hitung = 0;
    int bilanganSaatIni = 1;

    while (hitung < n) {
        if (bilanganSaatIni % 2 == 1) {
            totalBilanganGanjil += bilanganSaatIni;
            hitung++;
        }
        bilanganSaatIni++;
    }

    cout << "Jumlah " << n << " bilangan ganjil pertama adalah: " << totalBilanganGanjil << endl;
    cout << "Jumlah bilangan ganjil yang dihitung adalah: " << hitung << endl;
}

int main() {
    int pilihan;

    cout << "Pilih opsi:" << endl;
    cout << "1. Hitung Rata-rata Nilai" << endl;
    cout << "2. Hitung Jumlah Bilangan Ganjil dan Hitung" << endl;
    cout << "Masukkan pilihan kamu: ";

    cin >> pilihan;

    switch (pilihan) {
        case 1: {
            int n;
            cout << "Masukkan jumlah siswanya: ";
            cin >> n;
            double rataRata = hitungRataRata(n);
            cout << "Rata-rata nilai adalah: " << rataRata << endl;
            break;
        }
        case 2: {
            int n;
            cout << "Masukkan jumlah bilangan ganjil yang akan dihitung: ";
            cin >> n;
            hitungJumlahbilanganGanjil(n);
            break;
        }
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}