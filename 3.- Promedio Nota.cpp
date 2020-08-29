#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()
{
    float a,b,c,f,t,x,y,z,n;
    cout<<"A continuacion ingrese las notas correspondientes (0-100)"<<endl;
    cout<<"Primer examen parcial: ";
    cin >> a;
    cout<<"Segundo examen parcial: ";
    cin >> b;
    cout<<"Tercer examen parcial: ";
    cin >> c;
    cout<<"Examen final: ";
    cin >> f;
    cout<<"Trabajo practico: ";
    cin >> t;
    x = ((a+b+c)/3)*0.4;
    y = f*0.4;
    z = t*0.2;
    n = x+y+z;
    cout <<"La nota final del alumno es de "<< n <<" puntos";
    getch();
}
