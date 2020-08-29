#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <cmath>

using namespace std;

void main()
{
	float c, t, i1, i, r;
	cout << "Ingrese es el capital inicial: ";
	cin >> c;
	cout << "Ingrese el porcentaje del interés anual: ";
	cin >> i1;
   	cout << "Ingrese la cantidad de años transcurridos: ";
	cin >> t;
	i=i1/100;
	r=c*(pow((1+i),2)-1);
	cout << "El interes en " << t << " año(s) es de " << r << "$";
	getch();

}

