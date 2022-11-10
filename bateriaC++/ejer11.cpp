

#include<iostream>
#include<cmath>
using namespace std;



int main() {
	string nombre;
	float num;
	float res;
	cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	for (num=1;num<=9;num++) {
		res = pow(num,2);
		cout << "El cuadrado es:" << res << endl;
	}
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

