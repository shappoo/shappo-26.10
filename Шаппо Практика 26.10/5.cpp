#include <iostream>

using namespace std;

int main() {
  int n; 
  int id[10];
  int score[5];

  cout << "Введите количество участников: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Введите идентификационный номер участника: ";
    cin >> id[i];
    cout << "Введите количество баллов участника: ";
    cin >> score[i];
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (score[i] < score[j]) {
        int temp_id = id[i];
        id[i] = id[j];
        id[j] = temp_id;

        int temp_score = score[i];
        score[i] = score[j];
        score[j] = temp_score;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << "Участник с идентификационным номером " << id[i] << " набрал " << score[i] << " баллов." << endl;
  }

  return 0;
}