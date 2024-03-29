#include <iostream>

using namespace std;
// Deretan fibanocci ad/ setiap angka berikutnya didapatkan dengan menjumlahkan dua angka sebelumnya, dimulai dari angka 0 dan 1, & seterusnya.
// Fungsi rekursif untuk mencetak deret fibanocci
int fibanocci(int n)
{
  if (n <= 1)
  {
    return n;
  }
  else
  {
    return fibanocci(n - 1) + fibanocci(n - 2);
  }
}

int main()
{
  // deretan angka Fibonacci diawali: 0, 1, 1, 2, 3, 5, 8, 13, 21,..
  // Deretan ini bisa terus berlanjut tanpa henti.
  int userInput;

  while (true)
  {
    // Untuk pengguna menginput angkanya
    cout << "Enter the number: " << endl;
    cin >> userInput;

    int cek_fibanocci = fibanocci(userInput);

    // untuk keluar dari programnya
    if (userInput <= 1)
    {
      cout << "Invalid input!\nYou've exited the program" << endl;
      break;
    }

    // menampilkan dereta angka fibanocci
    else
    {
      cout << "Deret fibanocci dari " << userInput << " angka pertama adalah: " << endl;
      for (int i = 0; i < userInput; i++)
      {
        cout << fibanocci(i) << " ";
      }
      cout << cek_fibanocci << endl;
    }
  }

  return 0;
}