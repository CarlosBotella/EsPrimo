//
//  main.cpp
//  EsPrimo
//
//  Created by Carlos Botella Navarro on 29/9/21.
//

#include <iostream>
using namespace std;

int esPrimo(){
    int comparativo;
    comparativo = 0;
    int n;
    cout << "Elige un número ";
    cin >> n;
    if ((n%1) && (n%n)) {
        comparativo = 1;
    }
    cout << comparativo;
    return comparativo;
}

int main(){
    esPrimo();
}
