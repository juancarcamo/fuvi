

#include<iostream>
using namespace std;



int main() {
	int a;
	int b;
	int maximo;
	int x;
	cout << "*********** INSTITUTO TECNOLOGICO VICTORIA **********" << endl;
	cout << "Ingrese el primer valor:" << endl;
	cin >> a;
	cout << "Ingrese el segundo valor:" << endl;
	cin >> b;
	if (a>0 && b>0) {
		maximo = 1;
		x = 1;
		while (x<=a) {
			if (a%x==0 && b%x==0) {
				if (x>maximo) {
					maximo = x;
				}
			}
			x = x+1;
		}
		cout << "El maximo comun divisor es=" << maximo << endl;
	} else {
		cout << "Ingresar numeros positivos=" << endl;
	}
	cout << "°°°°°°°°°°°°°°°° Muchas gracias por confiar en este trabajo. °°°°°°°°°°°°°°°°°°°" << endl;
	return 0;
}

