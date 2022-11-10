

#include<iostream>
using namespace std;



int main() {
	float contador;
	float n;
	float suma;
	float x;
	cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
	cout << "Cuantos numeros desea ingresar: " << endl;
	cin >> n;
	x = 1;
	contador = 1;
	while (contador<=n) {
		if (x%2==0) {
			cout << x << endl;
			suma = suma+x;
			contador = contador+1;
		}
		x = x+1;
	}
	cout << " La suma es " << suma << endl;
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

