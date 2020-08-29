#include "stdafx.h"
#include <iostream>
#include "math.h"
#include "conio.h"

using namespace std;

void main()
{
    float d,r,p,a,v;
    const float PI  = 3.1416;
    cout<<"Ingrese el diametro de la circunferencia: ";
    cin >> d;
    r = d/2;
    p = PI*d; //perimetro
    cout <<"El perimetro es: " <<p <<" unidades."<<endl;
    a = PI*pow(r,2); //area
    cout <<"El area es: " <<a <<" unidades cuadradas."<<endl;
    v = (4/3)*PI*pow(r,3); //volumen
    cout <<"El volumen es: " <<v <<" unidades cubicas."<<endl;
    getch();
}
