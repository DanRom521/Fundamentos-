#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout<<endl;
    c = a+b; //suma
    cout << "La suma es: " << c <<endl;
    c = a-b; //resta
    cout << "La resta es: " << c <<endl;
    c = a*b; //multiplicación
    cout << "La multiplicación es: " << c <<endl;    
    c = a/b; //división
    cout << "La división es: " << c <<endl;
    c = a%b; //residuo
    cout << "El resto es: " << c <<endl;    
    return 0;
 }