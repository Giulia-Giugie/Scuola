#include <math.h>

#include <iostream>
using namespace std;
int main() {
  int numeri, somma, numero, i;
  float media;
  cout << "Quanti numeri vuoi?" << endl;
  cin >> numeri;
  somma = 0;
  if (numeri < 1) {
    cout << "Non ci sono abbastanza numeri" << endl;

  } else {
    for (i = 0; i < numeri; i++) {
      cout << "Inserisci un numero" << endl;
      cin >> numero;
      somma = somma + numero;
    }
    media = somma / numeri;
    cout << "la media dei numeri e' " << media << endl;
  }
  return 0;
}
