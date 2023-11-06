#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

struct Employee {
    string name;
    double totalWorkTime;
};

// Fungsi untuk membandingkan karyawan berdasarkan waktu kerja total
bool compareEmployees(const Employee& emp1, const Employee& emp2) {
    return emp1.totalWorkTime > emp2.totalWorkTime;
}

int main() {
    ifstream inputFile("jam-kerja.txt");

    if (!inputFile) {
        cerr << "Gagal membuka file." << endl; // Gagal membuka file.
        return 1;
    }

    vector<Employee> employees;
    string line;

    while (getline(inputFile, line)) {
        istringstream iss(line); // Membuat stringstream dari baris saat ini

        Employee employee;
        iss >> employee.totalWorkTime >> employee.name; // Membaca waktu kerja total dan nama karyawan

        double workTime;
        while (iss >> workTime) {
            employee.totalWorkTime += workTime; // Menambahkan waktu kerja tambahan ke waktu kerja total
        }

        employees.push_back(employee); // Menambahkan karyawan ke vector
    }

    sort(employees.begin(), employees.end(), compareEmployees); // Mengurutkan karyawan berdasarkan waktu kerja total

    for (const Employee& emp : employees) {
        cout << emp.name << ": " << emp.totalWorkTime << " jam" << endl; // Menampilkan nama karyawan dan waktu kerja total
    }

    inputFile.close();

    return 0;
}
