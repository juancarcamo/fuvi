

#include<iostream>
using namespace std;



int main() {
	int a;
	int b;
	float c;
	int d;
	float e;
	int facta;
	int factb;
	int factc;
	string nomb;
	int x;
	int z;
	cout << "*********** INSTITUTO TECNOLOGICO VICTORIA **********" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nomb;
	cout << "Ingrese el valor de a =" << endl;
	cin >> a;
	cout << "Ingrese el valor de b =" << endl;
	cin >> b;
	if (a<0) {
		cout << "Ingrese un numero positivo= " << endl;
	} else {
		for (x=1;x<=a;x++) {
			facta = 1;
			facta = facta*x;
		}
	}
	cout << "valor de factorial =" << facta << endl;
	if (b<0) {
		cout << "Ingrese un numero positivo =" << endl;
	} else {
		for (z=1;z<=b;z++) {
			factb = 1;
			factb = factb*z;
		}
	}
	cout << "valor de factorial =" << factb << endl;
	if (c<0) {
		cout << "Ingrese un numero positivo =" << endl;
	} else {
		c = (a-b);
		factc = 1;
		for (d=1;d<=c;d++) {
			factc = factc*d;
		}
	}
	cout << "valor de factorial =" << factc << endl;
	e = facta/(factc*factb);
	cout << "Valor de la formula a!/((a-b)!b!)es =" << e << endl;
	cout << "°°°°°°°°°°°°°°°° Muchas gracias por confiar en este trabajo °°°°°°°°°°°°°°°°°" << endl;
	return 0;
}

