#include <iostream>
#include "conio.h"
#define MAX 100

using namespace std;

void cargar(int vec[], int n);
void mostrar(int vec[], int n);
void unir(int v1[], int n, int v2[], int m, int vec[], int& tam);
void burbuja(int vec[], int m);
void cargarC(int v[], int n, int v3[], int& tam);

int main() {
	int tam, n, m, A[MAX], B[MAX], C[MAX], op, op1, op11, op3, op4;
	do {
		cout << "Ingresar el tamaño del vector A:";
		cin >> n;
	} while ((n <= 0) || (n > MAX));
	cargar(A, n);
	do {
		cout << "Ingresar el tamaño del vector B:";
		cin >> m;
	} while ((m <= 0) || (m > MAX));
	cargar(B, m);
	unir(A, n, B, m, C, tam);
	cout << endl;
	do {
		cout << "Vectores" << endl;
		cout << "1.- Asignar valor a un vector" << endl;
		cout << "2.- Concatenar el vector A y B en un vector C" << endl;
		cout << "3.- Ordenar un vector" << endl;
		cout << "4.- Mostrar los valores de un vector" << endl;
		cout << "0.- Salir" << endl;
		cout << "Ingrese el numero de la funcion que desea realizar: ";
		cin >> op;
		cout << endl;
		switch (op)
		{
		case 1:
			cout << "1.- Asignar un nuevo valor al vector A" << endl;
			cout << "2.- Asignar un nuevo valor al vector B" << endl;
			cout << "3.- Asignar el valor del vector C a otro vector" << endl;
			cout << "Ingrese el numero de la funcion que desea realizar: ";
			cin >> op1;
			switch (op1)
			{
			case 1:
				do {
					cout << "Ingresar el tamaño del vector A:";
					cin >> n;
				} while ((n <= 0) || (n > MAX));
				cargar(A, n);
				break;
			case 2:
				do {
					cout << "Ingresar el tamaño del vector B:";
					cin >> m;
				} while ((m <= 0) || (m > MAX));
				cargar(B, m);
				break;
			case 3:
				cout << "1.- Asignar al vector C los valores del vector A" << endl;
				cout << "2.- Asignar al vector C los valores del vector B" << endl;
				cout << "Ingrese el numero de la funcion que desea realizar: ";
				cin >> op11;
				switch (op11)
				{
				case 1:
					cargarC(A, n, C, tam);
					break;
				case 2:
					cargarC(B, m, C, tam);
					break;
				default:
					cout << "El numero ingresado no es una opcion";
					break;
				}
				break;
			default:
				cout << "El numero ingresado no es una opcion";
				break;
			}
			cout << endl;
			break;
		case 2:
			unir(A, n, B, m, C, tam);
			cout << endl;
			break;
		case 3:
			cout << "1.- Ordenar el vector A" << endl;
			cout << "2.- Ordenar el vector B" << endl;
			cout << "3.- Ordenar el vector C" << endl;
			cout << "Ingrese el numero de la funcion que desea realizar: ";
			cin >> op3;
			switch (op3)
			{
			case 1:
				burbuja(A, n);
				break;
			case 2:
				burbuja(B, m);
				break;
			case 3:
				burbuja(C, tam);
				break;
			default:
				cout << "El numero ingresado no es una opcion";
				break;
			}
			cout << endl;
			break;
		case 4:
			cout << "1.- Mostrar el vector A" << endl;
			cout << "2.- Mostrar el vector B" << endl;
			cout << "3.- Mostrar el vector C" << endl;
			cout << "Ingrese el numero de la funcion que desea realizar: ";
			cin >> op4;
			switch (op4)
			{
			case 1:
				mostrar(A, n);
				break;
			case 2:
				mostrar(B, m);
				break;
			case 3:
				mostrar(C, tam);
				break;
			default:
				cout << "El numero ingresado no es una opcion";
				break;
			}
			cout << endl;
			break;
		case 0:
			cout << "Salir";
			break;
		default:
			cout << "El numero ingresado no es una opcion";
			break;
		}
	} while (op != 0);
	return 0;
}

void cargar(int vec[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Vector[" << i << "]= ";
		cin >> vec[i];
	}
}

void mostrar(int vec[], int n)
{
	for (int i = 0; i < n; i++)
		cout << "Vector[" << i << "]= " << vec[i] << endl;
}

void unir(int v1[], int n, int v2[], int m, int vec[], int& tam)
{
	for (int i = 0; i < n; i++)  
		vec[i] = v1[i];
	for (int i = 0; i < m; i++) 
		vec[i + n] = v2[i];
	tam = n + m;
}

void burbuja(int vec[], int m)
{
	int aux;
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = i + 1; j < m; j++)
			if (vec[i] > vec[j])
			{
				aux = vec[j];
				vec[j] = vec[i];
				vec[i] = aux;
			}
	}
}
void cargarC(int v[], int n, int v3[],int& tam)
{
	for (int i = 0; i < n; i++) {
		v3[i] = v[i];
	}
	tam = n;
}