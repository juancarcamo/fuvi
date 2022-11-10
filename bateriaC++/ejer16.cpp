

#include<iostream>
using namespace std;


#define SIN_TIPO string



int main() {
	float c;
	SIN_TIPO max;
	SIN_TIPO min;
	float n;
	string nombre;
	float suma;
	bool x;
	cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	x = true;
	c = 0;
	do {
		cout << "Ingrese el Numero=" << endl;
		cin >> n;
		if (x==true) {
			max = n;
			min = n;
			x = false;
		} else {
			if (n>max) {
				max = n;
			} else {
				if (n<min) {
					min = n;
				}
			}
		}
		suma = suma+n;
		c = c+1;
	} while (n!=0);
	cout << "El maximo es =" << max << endl;
	cout << "El minimo es =" << min << endl;
	cout << "El promedio es=" << suma/c << endl;
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

