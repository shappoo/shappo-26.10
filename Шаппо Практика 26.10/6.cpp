#include <iostream>

using namespace std;

int main() {
  int n, n_end; 
  int base_from;
  int base_to; 
  string result = "";
  int current_digit; 

  cout << "Введите число: ";
  cin >> n;
  n_end=n;

  cout << "Введите исходную систему счисления: ";
  cin >> base_from;

  cout << "Введите целевую систему счисления: ";
  cin >> base_to;

  while (n != 0) {
    current_digit = n % base_to;
    result = to_string(current_digit) + result;
    n /= base_to;
  }

  cout << "Число "<<n_end<<" из системы счисления "<<base_from<<" в системе счисления " << base_to << " равно " << result << endl;

  return 0;
}