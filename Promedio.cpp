#include <iostream>
#define max 100

using namespace std;
double promedio(double a[], int tamaño);
int main() {
	double x[max], p;
	int t;
	cout << "Cuantos numeros desea ingresar (ingrese un numero natural menor o igual a 100): ";
	cin >> t;
	if (t <= 100 && t>0) {
		for (int i = 0; i < t; i++) {
			cout << "Ingrese el valor de x["<<i<<"]: ";
			cin >> x[i];
		}
		p = promedio(x, t);
		cout << "El promedio es: " << p;
	}
	else {
		cout << "El valor no pertenece al rango";	
	}
	return 0;
}
double promedio(double a[], int tamaño) {
	double suma = 0;
	for (int j = 0; j < tamaño; j++) {
		suma = suma + a[j];
	}
	suma = suma / tamaño;
	return suma;
}
