

#include<iostream>
using namespace std;


#define SIN_TIPO string


int main() {
	float a;
	float b;
	SIN_TIPO c;
	string edad;
	string nombre;
	float x;
	cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	cout << "Ingrese su edad: " << endl;
	cin >> edad;
	cout << "Ingresar el valor de A" << endl;
	cin >> a;
	cout << "Ingresar el valor de B" << endl;
	cin >> b;
	x = a;
	a = b;
	b = c;
	cout << "Valor de A =" << a << endl;
	cout << "Valor de B =" << x << endl;
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

