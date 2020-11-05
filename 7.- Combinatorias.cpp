#include <iostream>

using namespace std;
int FACT(int x);
float Combi(int a, int b);
int main() {
	float n, r, c;
	cout << "Combinatorio(n,r)" << endl;
	cout << "Para un numero combinatorio ingrese el valor de n: ";
	cin >> n;
	cout << "Para un numero combinatorio ingrese el valor de r: ";
	cin >> r;
	c = Combi(n, r);
	cout << "C(" << n << "," << r << ") = " << c;
	return 0;
}
int FACT(int x) {
	int s = 1;
	for (int i = 1; i <= x; i++) {
		s = s * i;
	}
	return s;
}
float Combi(int a, int b) {
	int com;
	com = FACT(a) / (FACT(b) * FACT(a-b));
	return com;
}
