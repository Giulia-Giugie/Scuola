#include <iostream>
#include <string>
using namespace std;
int main() {
  string nome;
  int lung;
  char car;
  nome = "x";
  // cout <<"il tuo nome e cognome "<< nome <<endl;
  cout << "Inserisci il tuo nome:  ";
  cin >> nome;
  lung = nome.length();
  cout << "Il tuo nome e': " << nome;
  cout << " Il tuo nome è lungo " << lung << " caratteri " << endl;
  car = nome.at(0);
}
