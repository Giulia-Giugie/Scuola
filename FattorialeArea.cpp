#include <iostream>
using namespace std;

int Area(int base, int altezza) { return base * altezza; }
int fattoriale(int numero) {
  int prodotto = 1;
  while (numero > 1) {
    prodotto *= numero;
    numero--;
  }
  return prodotto;
}
int fattorialeRic(int numero) {
  if (numero == 0)
    return 1;
  else
    return numero * fattoriale(numero - 1);
}
int main() {
  /* area
  int base, altezza;
   cout << "Inserire base : ";
   cin >> base;
   cout << "Inserire altezza: ";
   cin >> altezza;
   int area = Area(base, altezza);
   cout << area;*/

  int numero;
  cout << "Inserisci il numero: ";
  cin >> numero;
  while (numero < 1) {
    cout << "Inserisci il numero: ";
    cin >> numero;
  }
  cout << fattoriale(numero);

  return 0;
}
