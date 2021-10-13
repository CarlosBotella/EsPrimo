//
//  main.cpp
//  EsPrimo
//
//  Created by Carlos Botella Navarro on 29/9/21.
//
//-----------------------------------------------
//  unsigned int --> esPrimo --> bool
//-----------------------------------------------
#include <iostream>
using namespace std;

bool esPrimo(unsigned int numero){
    bool comparativo;
    comparativo = false; // inicializado
    unsigned int total = 0; // contador
    for (unsigned int i = 1; i<=numero; i=i+1) {
        unsigned int remainder;
//        cout << "i: " << i << "\n";
        remainder = numero%i;
//        cout << remainder << "\n";
        if (remainder == 0 ) {
            total = total + 1;
            
    if (total == 2) {
        comparativo = true;
    }
    else {
        comparativo = false;
            }
        }
    }
//    cout << comparativo << "\n";
    return comparativo;
}
//-----------------------------------------------
int main(){
    int n;
    n = 13; // inicializado
//    cout<<"elige un numero";
//    cin >> n;
    if (esPrimo(n)==true) {
        cout << "el número " << n <<" es primo" << "\n";
    } else {
        cout << "el número " << n <<" no es primo" << "\n";
    }
}
