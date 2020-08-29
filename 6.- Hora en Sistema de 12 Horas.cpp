#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()
{
    int h,m,s;
    cout<<"Ingrese la hora: ";
    cin>>h;
    cout<<"Ingrese los minutos: ";
    cin>>m;
    cout<<"Ingrese segundos: ";
    cin>>s;
    if (h>12){
        h=h-12;
        cout<<"La hora es: "<<h<<":"<<m<<":"<<s<<" PM";
    }
    else{
        cout<<"La hora es: "<<h<<":"<<m<<":"<<s<<" AM";
    }
    getch();
}
