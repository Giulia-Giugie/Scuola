#include <iostream>
using namespace std;
int main() {
  int num1, num2;
  cout << "Introduci un numero intero:";
  cin >> num1;
  cout << "Introduci un altro numero intero :";
  cin >> num2;
  if (num1 == num2) {
    cout << "Numeri uguali";
  } else if (num1 > num2) {
    cout << "Il maggiore dei due numeri e'" << num1;
  } else {
    cout << "Il maggiore dei due numeri e'" << num2;
  }
  return 0;
}
