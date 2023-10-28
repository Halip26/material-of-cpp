#include <stdio.h>
#include <stdlib.h>

// Variabel global dengan inisialisasi
int global_initialized_var = 42;

// Variabel global tanpa inisialisasi
int global_uninitialized_var;

// Fungsi yang mengalokasikan memori di heap
void allocate_memory_on_heap() {
    int *dynamic_var = (int *)malloc(sizeof(int));
    if (dynamic_var == NULL) {
        printf("Gagal mengalokasikan memori di heap.\n");
        return;
    }
    *dynamic_var = 100;
    printf("Nilai di heap: %d\n", *dynamic_var);
    free(dynamic_var); // Dealokasi memori
}

int main() {
    // Variabel lokal di stack
    int local_var = 10;

    printf("Variabel global dengan inisialisasi: %d\n", global_initialized_var);
    printf("Variabel global tanpa inisialisasi: %d\n", global_uninitialized_var); // Akan memiliki nilai nol
    printf("Variabel lokal di stack: %d\n", local_var);

    // Panggil fungsi yang mengalokasikan memori di heap
    allocate_memory_on_heap();

    return 0;
}

/* c++ 

#include <iostream>

// Variabel global dengan inisialisasi
int global_initialized_var = 42;

// Variabel global tanpa inisialisasi
int global_uninitialized_var;

// Fungsi yang mengalokasikan memori di heap
void allocate_memory_on_heap() {
    int* dynamic_var = new int;
    if (dynamic_var == nullptr) {
        cout << "Gagal mengalokasikan memori di heap." << endl;
        return;
    }
    *dynamic_var = 100;
    cout << "Nilai di heap: " << *dynamic_var << endl;
    delete dynamic_var; // Dealokasi memori
}

int main() {
    // Variabel lokal di stack
    int local_var = 10;

    cout << "Variabel global dengan inisialisasi: " << global_initialized_var << endl;
    cout << "Variabel global tanpa inisialisasi: " << global_uninitialized_var << endl;
    cout << "Variabel lokal di stack: " << local_var << endl;

    // Panggil fungsi yang mengalokasikan memori di heap
    allocate_memory_on_heap();

    return 0;
}


*/