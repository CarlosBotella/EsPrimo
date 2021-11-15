//
//  EsPositivo.cpp
//  Programacion
//
//  Created by Carlos Botella Navarro on 23/9/21.
//

/*
 -------------------------------------------------
 int --> esPositivo --> true / false
 -------------------------------------------------
 */

#include <iostream>
using namespace std;

// -----------------------------------------------
bool esPositivo(int num){
    bool comparativo;
    comparativo = false;
    if (num >= 0) {
        comparativo = true;
        cout << "Verdadero"<<"\n";
    } else {
        cout << "Falso"<<"\n";
    }
    return comparativo;
}
// -----------------------------------------------

int main(){
//    Las proximas 3 lineas sirven para que el usuario elija el numero pero como voy a hacer la prueba automatica las comento
//    int numero;
//    cout << "Elige un número: ";
//    cin >> numero;
    if (esPositivo(4)){ // prueba numeros positivos
        cout << "todo correcto"<<"\n";
    } else {
        cout << "hay un error"<<"\n";
    }
    if (not esPositivo(-9)){  // prueba numeros negativos
        cout << "todo correcto"<<"\n";
    } else {
        cout << "hay un error"<<"\n";
    }
}
