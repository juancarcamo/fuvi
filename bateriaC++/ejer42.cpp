

#include<iostream>
#include<cmath>
using namespace std;



int main() {
	int cantidad;
	float cociente;
	float cociente10;
	float cociente100;
	float cociente1000;
	float cociente10ct;
	float cociente20;
	float cociente200;
	float cociente25ct;
	float cociente5;
	float cociente50;
	float cociente500;
	float cociente50ct;
	float cociente5ct;
	string nomb;
	float res10;
	float res100;
	float res1000;
	float res10ct;
	float res10ct100;
	float res20;
	float res200;
	float res25ct;
	float res25ct100;
	float res5;
	float res50;
	float res500;
	float res50ct;
	float res50ct100;
	float res5100;
	float res5ct;
	cout << "*********** INSTITUTO TECNOLOGICO VICTORIA **********" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nomb;
	cout << "Ingrese la cantidad en multiplo de 5=" << endl;
	cin >> cantidad;
	while (cantidad%5!=0 || cantidad<0) {
		cout << "Ingrese una cantidad Positivas y multiplo de 5:" << endl;
		cin >> cantidad;
	}
	cociente1000 = cantidad/1000;
	res1000 = cantidad%1000;
	cociente500 = res1000/500;
	res500 = res1000%500;
	cociente200 = res500/200;
	res200 = res500%200;
	cociente100 = res200/100;
	res100 = res200%100;
	cociente50 = res100/50;
	res50 = res100%50;
	cociente20 = res50/20;
	res20 = res50%20;
	cociente10 = res20/10;
	res10 = res20%10;
	cociente = res10/5;
	res5 = res10%5;
	cociente50ct = res5100/0.50;
	res50ct = res5%100/50;
	cociente25ct = res50ct100/25;
	res25ct = res50ct%100/25;
	cociente10ct = res25ct100/10;
	res10ct = res25ct%100/10;
	cociente5ct = res10ct100/5;
	res5ct = res10ct%100/5;
	cout << "Billetes de 1000:" << int(cociente1000) << endl;
	cout << "Billetes de 500:" << int(cociente500) << endl;
	cout << "Billetes de 200:" << int(cociente200) << endl;
	cout << "Billetes de 100:" << int(cociente100) << endl;
	cout << "Billetes de 50:" << int(cociente500) << endl;
	cout << "Billetes de 20:" << int(cociente20) << endl;
	cout << "Billetes de 10:" << int(cociente10) << endl;
	cout << "Billetes de 5:" << int(cociente5) << endl;
	cout << "Monedas de 50 ctv:" << int(cociente50ct) << endl;
	cout << "Billetes de 25:" << int(cociente25ct) << endl;
	cout << "Monedas de 10 ctv:" << int(cociente10ct) << endl;
	cout << "Billetes de 5ct:" << int(cociente5ct) << endl;
	cout << "°°°°°°°°°°°°°°°° Muchas gracias por confiar en este trabajo °°°°°°°°°°°°°°°°°" << endl;
	return 0;
}

