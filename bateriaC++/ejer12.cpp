

#include<iostream>
using namespace std;



int main() {
	float i;
	string nombre;
	float res;
	float s;
	float x;
	float z;
	cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	cout << "Ingrese el numero: " << endl;
	cin >> z;
	res = 0;
	for (i=1;i<=z;i++) {
		res = res+i;
	}
	cout << "El Resultado del proceso de suma: " << res << endl;
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

