

#include<iostream>
using namespace std;



int main() {
	float b;
	string nombre;
	int x;
	cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	cout << "Ingrese su  numero:" << endl;
	cin >> x;
	b = x%2;
	if (x==0) {
		cout << "El numero no es par ni impar" << endl;
	} else {
		if (b==0) {
			cout << "El numero que usted ingreso es Par" << endl;
		} else {
			cout << "El numero que usted ingreso no es par" << endl;
		}
	}
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

