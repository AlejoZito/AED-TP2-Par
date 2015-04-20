/* Tp2 - Número Par
 * Alejo Zito
 * 20/4/15
 */

#include <iostream>
using namespace std;

int numero;
int resto;

int main() {
    cout << "Ingrese un número entero: ";
    cin >> numero;
    if (numero%2==0) {
        cout << "El número es par";
    } else {
        cout << "El número es impar";
    }
    return 0;
}
