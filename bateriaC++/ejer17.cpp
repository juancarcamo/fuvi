

#include<iostream>
using namespace std;



int main() {
	int a;
	int b;
	int x;
	cout << "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°" << endl;
	x = 1;
	a = 0;
	b = 0;
	while (x<=50) {
		if (x%2==0) {
			cout << x << endl;
			a = a+1;
		}
		if (x%3==0) {
			cout << x << endl;
			b = b+1;
		}
		x = x+1;
	}
	cout << "Numeros multiplos de 2=" << a << endl;
	cout << "Numerso multiplos de 3=" << b << endl;
	cout << "**************** Muchas gracias por usar este algoritmo *******************" << endl;
	return 0;
}

