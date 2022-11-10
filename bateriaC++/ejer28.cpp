

#include<iostream>
using namespace std;



int main() {
	float cant_impares;
	float cant_pares;
	float cont;
	float med;
	float n;
	float num;
	float suma;
	cant_pares = 0;
	cant_impares = 0;
	cont = 1;
	cout << "*********** INSTITUTO TECNOLOGICO VICTORIA **********" << endl;
	cout << "Ingrese la Cantidad de Numeros: " << endl;
	cin >> n;
	while (cont<=n) {
		cout << "Ingrese el Valor =" << cont << endl;
		cin >> num;
		if (num%2==0) {
			cant_pares = cant_pares+1;
		} else {
			cant_impares = cant_impares+1;
			suma = suma+num;
			med = suma/cant_impares;
		}
		cont = cont+1;
	}
	cout << "La cantidad de pares son=" << cant_pares << endl;
	cout << "La cantidad de impares son =" << cant_impares << endl;
	cout << "El Promedio de los impares es =" << med << endl;
	cout << "°°°°°°°°°°°°°°°° Muchas gracias por confiar en este trabajo. °°°°°°°°°°°°°°°°°°°" << endl;
	return 0;
}

