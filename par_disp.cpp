#include <iostream>
using namespace std;
int main() {
  int n, i, num, pari = 0, dispari = 0;
  cout << "Quanti numeri vuoi?" << endl;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Inserisci il numero: ";
    cin >> num;
    if (num % 2 == 0)
      pari++;
    else
      dispari++;
  }
  cout << "I numeri pari sono " << pari << " e i numeri dispari sono "
       << dispari;
}