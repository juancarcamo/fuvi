

#include<iostream>
using namespace std;



int main() {
	float i;
	float j;
	float n;
	string nombre;
	cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	cout << "Ingrese el numero" << endl;
	cin >> n;
	for (i=1;i<=n;i++) {
		for (j=1;j<=n;j++) {
			cout << " * ";
		}
		cout << "  " << endl;
	}
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

