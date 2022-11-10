

#include<iostream>
using namespace std;



int main() {
	float p;
	float x;
	cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
	cout << "Ingrese el Primer numero=" << endl;
	cin >> x;
	cout << "Ingrse el segundo numero=" << endl;
	cin >> p;
	if (x==p) {
		cout << "LOS NUMEROS SON IGUALES" << endl;
	} else {
		if (x>p) {
			cout << "El primer numero es Mayor " << x << endl;
		} else {
			if (x<p) {
				cout << "El segundo numero es Mayor " << p << endl;
			}
		}
	}
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

