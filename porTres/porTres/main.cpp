//
//  PorTres.cpp
//  Programacion
//
//  Created by Carlos Botella Navarro on 23/9/21.
//

/*
 --------------------------------------------------------------
 double --> porTres --> double
 --------------------------------------------------------------
 */

#include <iostream>
using namespace std;

double porTres(double num){
    
    num = num*3;
    cout << num << endl;
    return num;
}
// --------------------------------------------------------------
int main(){
    
/*  Las proximas 4 lineas sirven para que el usuario elija el
    numero pero como voy a hacer la prueba automatica las comento */
    
//    int num;
//    cout << "Elige un número: ";
//    cin >> num;
//    porTres(num);

    if (porTres(5)==15) { // prueba numeros positivos
        cout<<"correcto"<<endl;
    } else {
        cout<<"hay un error"<<endl;
    }
    if (porTres(-3)==-9) { // prueba numeros negativos
        cout<<"correcto"<<endl;
    } else {
        cout<<"hay un error"<<endl;
    }
}
//  --------------------------------------------------------------
