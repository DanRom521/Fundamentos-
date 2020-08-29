#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()
{
    float m,p;
    cout<<"Ingrese el peso de la carta: ";
    cin>> m;
	if (m<0){
		cout<<"ERROR";
	}
    else if (0<m && m<50){
        p=1.50 ;
        cout<<"El costo de envio es de: "<<p<<"Bs";
    }
    else if (50<m && m<=100){
        p=4.00 ;
        cout<<"El costo de envio es de: "<<p<<"Bs";
    }
    else if (100<m && m<=200){
        p=6.00 ;
        cout<<"El costo de envio es de: "<<p<<"Bs";
    }
    else if (200<m && m<=350){
        p=10.50 ;
        cout<<"El costo de envio es de: "<<p<<"Bs";
    }
    else if (350<m && m<=500){
        p=15.00 ;
        cout<<"El costo de envio es de: "<<p<<"Bs";
    }
    else{
        cout<<"NO PUEDE ENVIAR COMO CARTA";
    }
    getch();
}
