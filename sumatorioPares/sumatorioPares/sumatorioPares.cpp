//
//  main.cpp
//  sumatorioPares
//
//  Created by Carlos Botella Navarro on 29/9/21.
//
//  --------------------------------------------------------------
//    int --> sumatorioPares --> int
//  --------------------------------------------------------------

#include <iostream>
using namespace std; // no hace falta poner "std::" delante de "cout" o "cin"

int sumatorioParesV1(int num){
    int total = 0;
    for (int i = 0; i <= num; i++) {
        if (i%2==0) { // %2 comprueba si hay resto
            // cout << "i: " << i << "\n";
            total = total + i;
            // cout << total << "\n";
        }
    }
    return total;
}

int sumatorioParesV2(int num){
    int total = 0;
    for (int i = 0; i <= num; i=i+2) {
        if (i%2==0) { // %2 comprueba si hay resto
            // cout << "i: " << i << "\n";
            total = total + i;
            // cout << total << "\n";
        }
    }
    return total;
}
//  --------------------------------------------------------------

int main() {
    int n = 4;
//    cout << "Elige un numero: ";
//    cin >> n;
    cout << sumatorioParesV1(n)<<endl;
    cout << sumatorioParesV2(n)<<endl;
    if ((sumatorioParesV1(n) and sumatorioParesV2(n)) == true) { // prueba automatica
        cout << "ningun problema"<<endl;
    }else{
        cout << "hay un error"<<endl;
    }
    
}
