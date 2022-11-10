

#include<iostream>
using namespace std;



int main() {
	float a;
	float c;
	string edad;
	string nombre;
	float res;
	float x;
	cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	cout << "Ingrese su edad: " << endl;
	cin >> edad;
	cout << "Ingrese el primer numero:" << endl;
	cin >> a;
	cout << "Ingrese el segundo numero:" << endl;
	cin >> x;
	cout << "Ingrese el Tercer numero: " << endl;
	cin >> c;
	if (a<0) {
		res = a*x*c;
	} else {
		res = a+x+c;
	}
	cout << "resultado=" << res << endl;
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

