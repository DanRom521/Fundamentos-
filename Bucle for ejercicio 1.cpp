#include <iostream>

using namespace std;

int main()
{
    int suma = 0, n = 0;
    cout << "Ingrese la cantidad de numeros a sumar: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        suma = suma + i;
    }
    cout << "La suma es igual a: " << suma;
    return 0;
}