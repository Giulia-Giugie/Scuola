#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  const int N = 10;
  int arr[N] = {};
  int cont = 0;
  int numeroDaCercare;
  srand(time(NULL));
  cout << "Inserisci Quale numero vuoi cercare: ";
  cin >> numeroDaCercare;

  for (int i = 0; i < N; i++) {
    arr[i] = rand() % 10;
  }

  for (int i = 0; i < N; i++) {
    if (arr[i] == numeroDaCercare) cont++;
  }

  cout << "Il numero compare " << cont << " volte nell'array";
}