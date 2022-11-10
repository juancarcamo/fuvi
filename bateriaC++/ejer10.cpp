

#include<iostream>
using namespace std;



int main() {
	string bachiller;
	string col;
	string edad;
	string nombre;
	string prueba_acceso;
	cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	cout << "Ingrese su edad: " << endl;
	cin >> edad;
	cout << "Cual es su centro de educación: " << endl;
	cin >> col;
	bachiller = "si";
	cout << "¿Tienes el titulo de bachiller?" << endl;
	cin >> bachiller;
	if ((bachiller=="si")) {
		cout << "Puedes acceder al grado superior" << endl;
	} else {
		cout << "¿Tienes la prueba de acceso superada?" << endl;
		cin >> prueba_acceso;
		if ((prueba_acceso=="si")) {
			cout << "Puedes acceder al grado superior" << endl;
		} else {
			cout << "No puedes acceder a un grado superior" << endl;
		}
	}
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

