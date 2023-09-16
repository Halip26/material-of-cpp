#include <iostream>
using namespace std;

int main() {

    bool sakit;
    cout<<"Apakah Mahasiswa sakit: ";
    cin>>sakit;

    if (sakit) {
        cout << "Mahasiswa ijin tidak masuk" << endl;
    } else {
        cout << "Mahasiswa masuk" << endl;
    }

    return 0;
}