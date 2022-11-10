

#include<iostream>
using namespace std;


#define SIN_TIPO string



int main() {
	string car;
	string edad;
	SIN_TIPO monto;
	string nomb;
	float sal;
	cout << "*********** INSTITUTO TECNOLOGICO VICTORIA **********" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nomb;
	cout << "Ingrese su edad: " << endl;
	cin >> edad;
	cout << "Ingrese su codigo de carnet: " << endl;
	cin >> car;
	cout << "Ingrese su Salario=" << endl;
	cin >> sal;
	if (sal<200000) {
		cout << "Credito no Disponible" << endl;
	} else {
		if (sal>20000 && sal<50000) {
			cout << "Monto de Credito es=" << "C$" << 50000 << endl;
			cin >> monto;
		} else {
			if (sal>50000 && sal<100000) {
				cout << "Monto de Credito es=" << "C$" << 200000 << endl;
				cin >> monto;
			}
		}
	}
	cout << "El nombre del trabajador es: " << nomb << endl;
	cout << "°°°°°°°°°°°°°°°° Muchas gracias por confiar en este trabajo °°°°°°°°°°°°°°°°°" << endl;
	return 0;
}

