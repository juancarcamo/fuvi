

#include<iostream>
#include<cmath>
using namespace std;



int main() {
	string nombre;
	float x;
	cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	cout << "Ingrese el numero que desea calcular:" << endl;
	cin >> x;
	if (x<=0) {
		cout << "Error" << endl;
	} else {
		cout << "El Cuadrado de ese numero =" << pow(x,2) << endl;
		cout << "la Raiz Cuadrada=" << sqrtf(x) << endl;
	}
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

