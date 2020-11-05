//Ejercicio 6 - Daniel Romero
#include <iostream>
#define MAX 100
using namespace std;

void cargar(float a[], int n);
void promediar(float a[], float b[], int n,int &m);
void mostrar(float b[], int m);

int main () {
	float x[MAX], p[MAX];
	int t, tp, r, v = 0;
	do {
		cout << "Ingrese la cantidad de numeros que desea ingresar: ";
		cin >> t;
	} while ((t < 3) || (t > MAX));
	cargar(x, t);
	cout << endl;
	promediar(x, p, t, tp);
	cout << endl;
	do {
		cout << " ¿Desea mostrar los promedios como un vector?" << endl;
		cout << "1.- Si"<<endl;
		cout << "2.- No" << endl;
		cout << "Ingrese su respueta: ";
		cin >> r;
		switch (r)
		{
		case 1:
			mostrar(p, tp);
			v = 1;
			break;
		case 2:
			v = 1;
			break;
		default:
			v = 0;
			break;
		}
	} while (v!=1);
	return 0;
}
void cargar(float a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "x[" << i << "] = ";
		cin >> a[i];
	}
}
void promediar(float a[], float b[], int n, int &m) {
	for (int j = 0; j < n - 2; j++) {
		b[j] = (a[j] + a[j + 1] + a[j + 2]) / 3;
		cout << "P" << j + 1 << " = (x[" << j << "] + x[" << j + 1 << "] + x[" << j + 2 << "]) / 3 = " <<"( "<< a[j] << " + " << a[j + 1] << " + " << a[j + 2] << ") / 3 = " << b[j] << endl;
		m = j;
	}
	
}
void mostrar(float b[], int m)
{
	for (int i = 0; i < m+1; i++)
		cout << "Vector[" << i << "]= " << b[i] << endl;
}