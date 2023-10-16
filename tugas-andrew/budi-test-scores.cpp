#include <iostream>
using namespace std;

int main() {
  // 1.Buatlah sebuah array untuk menyimpan nilai ujian Budi
  int budi_test_scores[] = {4, 8, 5, 7, 8};

  // Temukan nilai yang paling sering muncul
  int most_frequent_score = 0;
  int most_frequent_score_count = 0;
  for (int i = 0; i < 5; i++) {
    int current_score_count = 0;
    for (int j = 0; j < 5; j++) {
      if (budi_test_scores[i] == budi_test_scores[j]) {
        current_score_count++;
      }
    }
    if (current_score_count > most_frequent_score_count) {
      most_frequent_score = budi_test_scores[i];
      most_frequent_score_count = current_score_count;
    }
  }

  // Cetak nilai yang paling sering muncul
  cout << "Nilai yang paling sering muncul adalah: " << most_frequent_score << endl;

  // 2.Temukan nilai tertinggi dan nilai terendah
  int highest_score = budi_test_scores[0];
  int lowest_score = budi_test_scores[0];
  for (int i = 1; i < 5; i++) {
    if (budi_test_scores[i] > highest_score) {
      highest_score = budi_test_scores[i];
    }
    if (budi_test_scores[i] < lowest_score) {
      lowest_score = budi_test_scores[i];
    }
  }

  // Cetak nilai tertinggi dan nilai terendah
  cout << "Nilai tertinggi adalah: " << highest_score << endl;
  cout << "Nilai terendah adalah: " << lowest_score << endl;

  // 3.Periksa apakah Budi mendapatkan niai 7 dan pada berpa banyak dia mendapatkannya
  int budi_got_7 = 0;
  for (int i = 0; i < 10; i++) {
    if (budi_test_scores[i] == 7) {
      budi_got_7++;
    }
  }

  // cetak hasilnya
  cout << "Budi mendapatkan nilai 7 pada " << budi_got_7 << " hasil ujian" << endl;

  // 4.Urutkan nilai ujian dalam urutan menurun
  for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (budi_test_scores[i] < budi_test_scores[j]) {
        int temp = budi_test_scores[i];
        budi_test_scores[i] = budi_test_scores[j];
        budi_test_scores[j] = temp;
      }
    }
  }

  // cetak nilai ujian yg sudah diurutkan dari tertinggi ke terendah
  cout << "Nilai ujian yg sudah diurutkan adalah: ";
  for (int score : budi_test_scores) {
    cout << score << " ";
  }
  cout << endl;

  // 5.Buatlah sebuah array untuk menyimpan string "Pradita, my lovely campus"
  string pradita_campus[] = {"Pradita,", "my", "lovely", "campus"};

  // Cetak array
  for (string word : pradita_campus) {
    cout << word << " ";
  }

  cout << endl;


  return 0;
}