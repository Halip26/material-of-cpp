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