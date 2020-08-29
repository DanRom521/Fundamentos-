#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()
{
	float phc,phs,pp,ps,t;
	int chc,chs,cp,cs,opcion;
	chc=0;
	chs=0;
	cp=0;
	cs=0;
	opcion=5;
	do{
		cout<<"----------Menu----------"<<endl;
		cout<<"1.- Hamburguesa sin queso"<<endl;
		cout<<"2.- Hamburguesa con queso"<<endl;
		cout<<"3.- Papas fritas"<<endl;
		cout<<"4.- Soda"<<endl;
		cout<<"0.- Finalizar pedido"<<endl;
		cout<<"Ingrese el numero de su pedido: ";
		cin>>opcion;
		cout<<endl;
		switch(opcion){
		case 1:
			cout<<"Ingrese el numero de hamburguesas sin queso desea: ";
			cin>>chs;
			cout<<endl;
			break;
		case 2:
			cout<<"Ingrese el numero de hamburguesas com queso desea: ";
			cin>>chc;
			cout<<endl;
			break;
		case 3:
			cout<<"Ingrese el numero de porciones de papas fritas desea: ";
			cin>>cp;
			cout<<endl;
			break;
		case 4:
			cout<<"Ingrese el numero de sodas desea: ";
			cin>>cs;
			cout<<endl;
			break;
		case 0:
			cout<<"A continuacion se le mostrara el total a pagar:"<<endl;
			break;
		default:
			cout<<"El valor ingresado no pertenece al menu"<<endl;
			cout<<endl;
		}
	}
	while(opcion!=0);
	phs=chs*3;
	phc=chc*5;
	pp=cp*2;
	ps=cs*2.5;
	t=phs+phc+pp+ps;
	cout<<endl;
	cout<<"                          Cantidad     Subtotal"<<endl;
	cout<<"-Hamburguesas sin queso           "<<chs<<"        "<<phs<<"Bs"<<endl;
	cout<<"-Hamburguesas con queso           "<<chc<<"        "<<phc<<"Bs"<<endl;
	cout<<"-Papas Fritas                     "<<cp<<"        "<<pp<<"Bs"<<endl;
	cout<<"-Sodas                            "<<cs<<"        "<<ps<<"Bs"<<endl;
	cout<<endl;
	cout<<"                             Total:       "<<t<<"Bs"<<endl;
	getch();
}
