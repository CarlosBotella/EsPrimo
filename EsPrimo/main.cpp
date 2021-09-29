//
//  main.cpp
//  EsPrimo
//
//  Created by Carlos Botella Navarro on 29/9/21.
//

#include <iostream>
using namespace std;

bool esPrimo(){
    bool comparativo;
    comparativo = false; // inicializado
    int n; // inicializado
    int i;
    int total = 0;
    cout << "Elige un número entero: ";
    cin >> n;
    for (i = 1; i<=n; i=i+1) {
        int remainder;
//        cout << "i: " << i << "\n";
        remainder = n%i;
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

int main(){
    if (esPrimo()==true) {
        cout << "el número es primo" << "\n";
    } else {
        cout << "el número no es primo" << "\n";
    }
}
