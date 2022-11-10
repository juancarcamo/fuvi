

#include<iostream>
using namespace std;



int main() {
	int a;
	int b;
	int h;
	string nomb;
	cout << "*********** INSTITUTO TECNOLOGICO VICTORIA **********" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nomb;
	cout << "Ingresa la Altura=" << endl;
	cin >> h;
	for (a=1;a<=h;a++) {
		for (b=a;b<=h;b++) {
			cout << " ° ";
		}
		cout << " " << endl;
	}
	cout << "Muchas gracias por confiar en este trabajo." << endl;
	return 0;
}

