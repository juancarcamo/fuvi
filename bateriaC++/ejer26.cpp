

#include<iostream>
using namespace std;



int main() {
	float n;
	string nomb;
	float producto;
	float res;
	cout << "*********** INSTITUTO TECNOLOGICO VICTORIA **********" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nomb;
	cout << "La ejecuciones finalizan cuando se ingrese cero" << endl;
	n = 1;
	producto = 0;
	res = 1;
	while (n!=0) {
		cout << "Ingrese un numero" << endl;
		cin >> n;
		if (n!=0) {
			res = res*n;
			producto = res;
		}
	}
	cout << "El Producto de los numeros es =" << producto << endl;
	cout << "°°°°°°°°°°°°°°°° Muchas gracias por confiar en este trabajo. °°°°°°°°°°°°°°°°°°°" << endl;
	return 0;
}

