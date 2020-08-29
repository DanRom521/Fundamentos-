#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()
{
    char n[40];
    float t,c,i,s;
    cout<<"Ingrese su nombre: ";
    cin.getline(n,40);
    cout<<"Ingrese el numero de horas trabajadas: ";
    cin >> t;
    cout<<"Ingrese el salario por hora: ";
    cin >> c;
    s = t*c;
    if (s>8272){
        s = s*0.87;
        cout<<"Sr/Sra "<< n<< " su sueldo es de "<< s<<"Bs";
    }
    else{
        cout<<"Sr/Sra "<< n<< " su sueldo es de "<< s<<"Bs";
    }
    getch();
}
