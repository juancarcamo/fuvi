

#include<iostream>
using namespace std;



int main() {
	float com;
	float costo;
	float die;
	float gr;
	float gs;
	string nomb;
	int opc;
	cout << "*********** INSTITUTO TECNOLOGICO VICTORIA **********" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nomb;
	cout << "De que tipo de gasolina desea hechar a su automovil." << endl;
	cout << "1:Gasolina Regualar:" << endl;
	cout << "2: Gasolina Super: " << endl;
	cout << "3:Diesel: " << endl;
	cin >> opc;
	cout << "Ingrese Cantidad en litros de combustible:" << endl;
	cin >> com;
	switch (opc) {
	case 1:
		costo = com*32.85;
		cout << "Costo de Compra :" << costo << "C$" << endl;
		break;
	case 2:
		costo = com*33.48;
		cout << "Costo de Compra :" << costo << "C$" << endl;
		break;
	case 3:
		costo = com*28.45;
		cout << "Costo de Compra :" << costo << "C$" << endl;
		break;
	default:
		cout << endl;
	}
	cout << "°°°°°°°°°°°°°°°° Muchas gracias por confiar en este trabajo °°°°°°°°°°°°°°°°°" << endl;
	return 0;
}

