

#include<iostream>
using namespace std;



int main() {
	string empleado;
	float ht;
	float i;
	float sbh;
	float sm;
	float sn;
	cout << "*********** INSTITUTO TECNOLOGICO VICTORIA **********" << endl;
	cout << "Nombre del Empleado: " << endl;
	cin >> empleado;
	cout << "Numeros de Horas Trabajadas en la semana: " << endl;
	cin >> ht;
	cout << "Salario neto mensual:" << endl;
	cin >> sm;
	sbh = sm/30/8;
	if (ht>48) {
		i = 1.35*(ht-48);
	} else {
		if (ht<=48) {
			i = 0;
		}
	}
	sn = sbh*8*6+i;
	cout << "Salario Neto por Semana = " << sn << "C$" << endl;
	cout << "El nombre del empleado es:" << empleado << endl;
	cout << "°°°°°°°°°°°°°°°° Muchas gracias por confiar en este trabajo °°°°°°°°°°°°°°°°°" << endl;
	return 0;
}

