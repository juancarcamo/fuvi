

#include<iostream>
using namespace std;



int main() {
	float b;
	float c;
	string nomb;
	float suma;
	float x;
	cout << "*********** INSTITUTO TECNOLOGICO VICTORIA **********" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nomb;
	cout << "Ingrese el primer valor:" << endl;
	cin >> x;
	cout << "Ingrese el segundo valor:" << endl;
	cin >> b;
	cout << "Ingrese el tercero valor:" << endl;
	cin >> c;
	suma = x+b;
	if (suma==c) {
		cout << "Los numeros son iguales" << endl;
	} else {
		cout << "Los numeros som distintos" << endl;
	}
	cout << "°°°°°°°°°°°°°°°° Muchas gracias por confiar en este trabajo. °°°°°°°°°°°°°°°°°°°" << endl;
	return 0;
}

