

#include<iostream>
using namespace std;



int main() {
	int a;
	int d;
	string gen;
	int m;
	string nombre;
	string nombremes;
	cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
	cout << "Ingre su nombre: " << endl;
	cin >> nombre;
	cout << "Ingrese su genero  " << endl;
	cin >> gen;
	cout << "Ingrese el dia:" << endl;
	cin >> d;
	cout << "Ingrese el mes:" << endl;
	cin >> m;
	cout << "Ingrese el año:" << endl;
	cin >> a;
	if (d<0 || d>31) {
		do {
			cout << "Dia fuera de rango" << endl;
			cout << "ingrese un dia" << endl;
			cin >> d;
		} while (!(d>0 && d<32));
	}
	if (m<1 || m>12) {
		do {
			cout << "Mes fuera del rango" << endl;
			cout << "ingrese el mes " << endl;
			cin >> m;
		} while (!(m>0 && m<13));
	}
	if (a<1) {
		do {
			cout << "Año fuera de rango" << endl;
			cout << "ingrese el año" << endl;
			cin >> a;
		} while (a<=0);
	}
	switch (m) {
	case 1:
		nombremes = "Enero";
		break;
	case 2:
		nombremes = "Febrero";
		break;
	case 3:
		nombremes = "Marzo";
		break;
	case 4:
		nombremes = "Abril";
		break;
	case 5:
		nombremes = "Mayo";
		break;
	case 6:
		nombremes = "Junio";
		break;
	case 7:
		nombremes = "Julio";
		break;
	case 8:
		nombremes = "Agosto";
		break;
	case 9:
		nombremes = "Septiembre";
		break;
	case 10:
		nombremes = "Octubre";
		break;
	case 11:
		nombremes = "Noviembre";
		break;
	case 12:
		nombremes = "Diciembre";
		break;
	}
	cout << d << "/" << nombremes << "/" << a << endl;
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

