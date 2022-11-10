

#include<iostream>
using namespace std;



int main() {
	int cobro;
	int matricula;
	int mensualidad;
	int ninos;
	int niños;
	string nomb;
	int sociedad;
	cout << "*********** INSTITUTO TECNOLOGICO VICTORIA **********" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nomb;
	cout << "Ingrese cantidad de niños:" << endl;
	cin >> ninos;
	cout << "monto de matricula por niños:" << endl;
	cin >> matricula;
	cout << "Mensualidad del mes de Septiembre: " << endl;
	cin >> mensualidad;
	cout << "Cobro de la Socieda por Familia: " << endl;
	cin >> cobro;
	if (ninos==2) {
		sociedad = cobro-cobro*0.10;
	} else {
		if (ninos==3) {
			sociedad = cobro-cobro*0.15;
		} else {
			if (ninos>3) {
				sociedad = cobro-cobro*0.20;
			}
		}
	}
	cout << "Cantidad a pagar = " << matricula+mensualidad+sociedad << endl;
	cout << "°°°°°°°°°°°°°°°° Muchas gracias por confiar en este trabajo. °°°°°°°°°°°°°°°°°°°" << endl;
	return 0;
}

