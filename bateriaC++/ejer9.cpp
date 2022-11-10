

#include<iostream>
using namespace std;



int main() {
	int a;
	float b;
	string nombre;
	cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	cout << "Introduzca un numero:" << endl;
	cin >> a;
	b = a%2;
	while (a<=0) {
		cout << "Introducir un numero mayor de cero:" << endl;
		cin >> a;
	}
	if (b==0) {
		cout << "El numero que usted acaba de ingresar es par" << endl;
	} else {
		cout << "El numero que usted acaba de ingresar es Impar" << endl;
	}
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

