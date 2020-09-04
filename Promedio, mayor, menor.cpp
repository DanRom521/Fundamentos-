#include <iostream>

using namespace std;

int main()
{
	float p, i, ma, me;
	int n, c;
	cout << "Cuantos numeros desea promediar: ";
	cin >> n;
	c = 1;
	p = 0;
	cout << "Ingrese un numero: ";
	cin >> i;
	ma = i;
	me = i;
	while (c != n) {
		p = p + i;
		cout << "Ingrese un numero: ";
		cin >> i;
		if (i > ma) {
			ma = i;
		}
		if (i < me) {
			me = i;
		}	
		c++;
	} 
	p = p + i;
	p = p / n;
	cout << "El mayor es: " << ma <<endl;
	cout << "El menor es: " << me <<endl;
	cout << "El promedio es: " << p << endl;
	return 0;
}