#include <iostream>

using namespace std;
int contador(int a,int c);
int main()
{
	int num, cont, digi, com, cont10, numsld, n;
	cout << "Ingrese el numero cuyo complemento desea hallar: ";
	cin >> num;
	n = num;
	cont = 0;
	cont = contador(num, cont);
	cont10 = 1;
	numsld = 0;
	for (int i=0; i < cont; i++) {
		digi = num % 10;
		//cout << digi << " ";
		com = 9 - digi;
		com = com * cont10;
		numsld = numsld + com;
		//cout << com << endl;
		num = num / 10;
		cont10 = cont10 * 10;
	}
	cout << "El complemento de " << n << " es igual a " << numsld;
	return 0;
}
int contador(int a, int c) {
	while (a != 0) {
		a = a / 10;
		c++;
	}
	return c;
}