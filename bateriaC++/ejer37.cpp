

#include<iostream>
using namespace std;



int main() {
	string edad;
	int i;
	string nomb;
	int x;
	cout << "*********** INSTITUTO TECNOLOGICO VICTORIA **********" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nomb;
	cout << "Ingrese su edad: " << endl;
	cin >> edad;
	cout << "Ingrese un número" << endl;
	cin >> x;
	i = 0;
	while (x>1) {
		if (x%2==0) {
			x = x/2;
		} else {
			x = x*3+1;
			i = i+1;
		}
	}
	cout << i << endl;
	cout << "°°°°°°°°°°°°°°°° Muchas gracias por confiar en este trabajo °°°°°°°°°°°°°°°°°" << endl;
	return 0;
}

