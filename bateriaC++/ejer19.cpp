

#include<iostream>
using namespace std;


#define SIN_TIPO string



int main() {
	SIN_TIPO alu;
	float np;
	float npro;
	float nt;
	int op;
	float resultado;
	do {
		cout << endl; 
		cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
		cout << " 1: DATOS DEL PRIMER ALUMNO" << endl;
		cout << " 2: DATOS DEL SEGUNDO ALUMNO" << endl;
		cout << " 3: DATOS DEL TERCER ALUMNO" << endl;
		cout << "Ingrese una opcion " << endl;
		cin >> op;
		switch (op) {
		case 1:
			cout << "nombre del primer alumno" << endl;
			cin >> alu;
			cout << "ingrese nota teorica" << endl;
			cin >> nt;
			cout << "ingrese nota practica" << endl;
			cin >> np;
			cout << "ingrese nota problemas" << endl;
			cin >> npro;
			if (nt>0 && nt<=10) {
				nt = nt*10/100;
				cout << "nota teorica " << nt << endl;
				resultado = nt+np+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			if (np>0 && np<=10) {
				np = np*40/100;
				cout << "nota practica " << np << endl;
				resultado = nt+np+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			if (npro>0 && npro<=10) {
				npro = npro*50/100;
				cout << "nota de problemas " << npro << endl;
				resultado = nt+np+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			break;
		case 2:
			cout << "nombre del primer alumno" << endl;
			cin >> alu;
			cout << "ingrese nota teorica" << endl;
			cin >> nt;
			cout << "ingrese nota practica" << endl;
			cin >> np;
			cout << "ingrese nota problemas" << endl;
			cin >> npro;
			if (nt>0 && nt<=10) {
				nt = nt*10/100;
				cout << "nota teorica " << nt << endl;
				resultado = nt+np+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			if (np>0 && np<=10) {
				np = np*40/100;
				cout << "nota practica " << np << endl;
				resultado = nt+np+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			if (npro>0 && npro<=10) {
				npro = npro*50/100;
				cout << "nota de problemas " << npro << endl;
				resultado = nt+np+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			break;
		case 3:
			cout << "nombre del primer alumno" << endl;
			cin >> alu;
			cout << "ingrese nota teorica" << endl;
			cin >> nt;
			cout << "ingrese nota practica" << endl;
			cin >> np;
			cout << "ingrese nota problemas" << endl;
			cin >> npro;
			if (nt>0 && nt<=10) {
				nt = nt*10/100;
				cout << "nota teorica " << nt << endl;
				resultado = nt+np+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			if (np>0 && np<=10) {
				np = np*40/100;
				cout << "nota practica " << np << endl;
				resultado = nt+np+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			if (npro>0 && npro<=10) {
				npro = npro*50/100;
				cout << "nota de problemas " << npro << endl;
				resultado = nt+np+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			break;
		}
		cout << "Presione enter para continuar" << endl;
		cin.get(); 
	} while (op!=3);
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

