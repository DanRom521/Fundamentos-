#include <iostream>

using namespace std;

int main()
{
    int multi = 0, n,x;
    cout << "Calcule la tabla de multiplicar del siguiente valor: ";
    cin >> n;
    cout << "Por cuantos numeros desea multiplicar: ";
    cin >> x;
    for (int i = 0; i <= x; i++) {
        multi = n * i;
        cout << n << "*" << i << "=" << multi << endl;
    }
    return 0;
}