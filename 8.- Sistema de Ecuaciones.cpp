#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()
{
    float a,b,c,d,e,f,x1,x2,y1,y2,x,y;
    cout <<"Ingrese los valores correspondientes al sistema de ecuaciones"<<endl;
    cout <<"Ax + By = C"<<endl;
    cout <<"Dx + Ey = F"<<endl;
    cout << "Ingrese el termino A: ";
	cin >> a;
    cout << "Ingrese el termino B: ";
	cin >> b;
    cout << "Ingrese el termino C: ";
	cin >> c;
    cout << "Ingrese el termino D: ";
	cin >> d;
    cout << "Ingrese el termino E: ";
	cin >> e;
    cout << "Ingrese el termino F: ";
	cin >> f;
    x1 = c/a; //Terminos independientes
    x2 = (-b)/a; //y
    y1 = f-(d*(x1)); //Terminos independientes
    y2 = (d*x2)+e; //y
    y = y1/y2;
    x = (x2*y)+x1;
    cout <<"El valor de x es: "<<x<<endl;
    cout <<"El valor de y es: "<<y<<endl;
    getch();
}

