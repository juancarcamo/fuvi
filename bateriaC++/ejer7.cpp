
#include<iostream>
using namespace std;


int main() {
	string ced;
	float compra;
	float d;
	float importe;
	string nombre;
	cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	cout << "Ingrese los digitos de su numero de cedula: " << endl;
	cin >> ced;
	cout << "Ingrese el valor de Importe:" << endl;
	cin >> compra;
	d = compra-compra*0.15;
	cout << "Valor Cobrado =" << d << endl;
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

