//
//  main.cpp
//  Sumatorio
//
//  Created by Carlos Botella Navarro on 23/9/21.
//

/*
 ------------------------------------------------
unsigned int --> sumatorio --> unsigned int
 ------------------------------------------------
 */
#include <iostream>
using namespace std;
// ----------------------------------------------
unsigned int sumatorio(unsigned int n){
    unsigned int total = 0;
    for (int numeroAsumar = 1; numeroAsumar <= n; numeroAsumar++) {
        total = total + numeroAsumar;
    }
    return total;
}
// ----------------------------------------------
int main() {
    int r;
    r = sumatorio(4);
    if (r != 10) {
        cout << "Hay un error";
    } else { cout << "No hay ningún error" << endl;}
}
