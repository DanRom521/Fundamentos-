#include <iostream>

using namespace std;

void cargar(int m[3][3]);
void Original(int m[3][3]);
void Transpuesta(int m[3][3]);
int main() {
	int m[3][3];
	cargar(m);
	Original(m);
	Transpuesta(m);
	return 0;
}
void cargar(int m[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Ingrese el valor en M[" << i << "][" << j << "]: ";
			cin >> m[i][j];
		}
	}
}
void Original(int x[3][3]) {
	cout << "Matriz Original:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
void Transpuesta(int x[3][3]) {
	cout << "Matriz Transpuesta:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << x[j][i] << " ";
		}
		cout << endl;
	}
}