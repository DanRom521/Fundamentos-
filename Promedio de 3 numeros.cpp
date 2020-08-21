#include <iostream>

using namespace std;

int main()
{
    int x,y,z,r;
    cout<<"Ingrese el primer numero entre 0 y 10 (x): ";
    cin >> x;
    if (0<=x && x<=10){
        cout<<"Ingrese el segundo numero entre 0 y 10 (y): ";
        cin >> y;
        if (0<=y && y<=10) {
            cout<<"Ingrese el tercer numero entre 0 y 10 (z): ";
            cin >> z;
            if (0<=z && z<=10) {
            r = (x+y+z)/3;
            cout <<"El promedio es: "<<r;  
            return 0;
            }
            else if (z>10){
            cout<<"El valor ingresado para z es mayor que 10"<< endl;
            return 0;
            }
            else if (0>z){
            cout<<"El valor ingresado para z es menor que 10"<< endl;
            return 0;
            }
            else{
            cout<< "El valor ingresado para z no es valido"<<endl;
            return 0;}
    }
        else if (y>10){
        cout<<"El valor ingresado para y es mayor que 10"<< endl;
        return 0;
        }
        else if (0>y){
        cout<<"El valor ingresado para y es menor que 10"<< endl;
        return 0;
        }
        else{
        cout<< "El valor ingresado para y no es valido"<<endl;
        return 0;
        }
        
    }
    else if (x>10){
    cout<<"El valor ingresado para x es mayor que 10"<< endl;
    return 0;
    }
    else if (0>x){
    cout<<"El valor ingresado para x es menor que 10"<< endl;
    return 0;
    }
    else{
    cout<< "El valor ingresado para x no es valido"<<endl;
    return 0;
    }
}
