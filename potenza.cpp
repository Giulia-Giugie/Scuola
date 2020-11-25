#include <iostream>
using namespace std; 
int main (){
    int esp, i;
    double base, pot; 
    cout << "Introduci la base : ";
    cin >> base;
    cout << "Introduci l'esponente: ";
    cin >> esp; 
    if (base==0 && esp==0)
     cout << "Potenza non definita!"<<endl; 
     else {
         pot = 1; 
         i=1;
         while (i<=esp){
             pot *= base;
             i++;
         }
         cout << base << "^"<<esp<<" = "<<pot<<endl;
     } 

}