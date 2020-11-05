#include <iostream>
#include "stdlib.h"
#include <conio.h>

using namespace std;

int main()
{
	float a, b, r;
	char opcion ='e';
	bool bandera = false;
	r = 0;
	do {		
		cout << "a.- Suma" << endl;
		cout << "b.- Resta" << endl;
		cout << "c.- Producto" << endl;
		cout << "d.- División" << endl;
		cout << "e.- Salir" << endl;
		cout << "Elige una opción: ";
		cin >> opcion;
		if (opcion=='a' || opcion=='b' || opcion=='c' || opcion=='d'){
			cout << "Ingrese a: ";
			cin >> a;
			cout << "Ingrese b: ";
			cin >> b;
		}
		switch (opcion) {
		case 'a': 
			r = a + b; 
			break;
		case 'b': 
			r = a - b; 
			break;
		case 'c': 
			r = a * b; 
			break;
		case 'd': 
			cin >> b; r = a / b;
			break;
		case 'e': cout << "Salir"<<endl; break;
		default: 
			cout << "Opcion invalida" << endl;
			cout << endl;
		}
		bandera = ((opcion == 'a') || (opcion == 'b') || (opcion == 'c') || (opcion == 'd'));
		if (bandera == true) {
			cout << "El resultado es " << r << endl;
			cout << endl;
		}
		_getch();
		system("cls");
	} while (opcion != 'e');
    return 0;
}