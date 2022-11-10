

#include<iostream>
using namespace std;



int main() {
	float i;
	float n;
	cout << "*********** INSTITUTO TECNOLOGICO VICTORIA **********" << endl;
	cout << "Ingrese un numero: " << endl;
	cin >> n;
	for (i=1;i<=n;i++) {
		if (n%i==0) {
			cout << "Estos son devisores de su numero: " << i << endl;
		}
	}
	cout << "°°°°°°°°°°°°°°°° Muchas gracias por confiar en este trabajo. °°°°°°°°°°°°°°°°°°°" << endl;
	return 0;
}

