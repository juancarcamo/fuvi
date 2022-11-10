

#include<iostream>
using namespace std;



int main() {
	string clave;
	int intentos;
	string nombre;
	int session;
	cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	session = 0;
	intentos = 0;
	while (intentos<=3 && session==0) {
		cout << "Trate de ingresar la clave: " << endl;
		cin >> clave;
		if (clave=="valores") {
			cout << "Contraseña  Correcta." << endl;
			session = 1;
		} else {
			cout << "Contraseña Incorrecta=" << endl;
			intentos = intentos+1;
			cout << endl; 
		}
	}
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

