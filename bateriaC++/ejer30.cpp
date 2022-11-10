
#include<iostream>
using namespace std;



int main() {
	int a;
	int c;
	int vector[5];
	int x;
	cout << "*********** INSTITUTO TECNOLOGICO VICTORIA **********" << endl;
	for (x=1;x<=5;x++) {
		cout << "Ingrese un Numero: " << endl;
		cin >> vector[x-1];
	}
	cout << "Ingrese un Numero a Buscar: " << endl;
	cin >> a;
	c = 0;
	for (x=1;x<=5;x++) {
		if (a==vector[x-1]) {
			cout << "El Numero esta en la posicion=2" << x << endl;
			c = 1;
		}
	}
	if (c==0) {
		cout << "El Numero no fue encontrado " << endl;
	}
	cout << "°°°°°°°°°°°°°°°° Muchas gracias por confiar en este trabajo. °°°°°°°°°°°°°°°°°°°" << endl;
	return 0;
}

