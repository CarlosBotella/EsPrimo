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
    comparativo = false;
    int n;
    cout << "Elige un número ";
    cin >> n;
    if ((n%1 == 0) && (n%n == 0)) {
        comparativo = true;
    }
    cout << comparativo;
    return comparativo;
}

int main(){
    esPrimo();
}
