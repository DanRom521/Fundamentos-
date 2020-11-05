#include <iostream>

using namespace std;

int main()
{
    int suma = 0, n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    if ((n%2) == 0) {
        for (int i = 0; i <= n; i = i + 2) {
            suma = suma + i;
        }
        cout << "La suma de los numeros es: " << suma;
    }
    else {
        cout << "El valor ingresado no es un numero par";
    }
    cout << endl;
    cout << endl;
    return 0;
}