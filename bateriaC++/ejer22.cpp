// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
#define SIN_TIPO string

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se ley? otra variable con >>.

int main() {
	float ano;
	SIN_TIPO a?o;
	string nomb;
	cout << "*********** INSTITUTO TECNOLOGICO VICTORIA **********" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nomb;
	cout << "Ingrese el A?O" << endl;
	cin >> ano;
	if (ano%4==0 && ((ano%100!=0) || (ano%400==0))) {
		cout << "El a?o que usted ingreso es Bisiesto" << endl;
	} else {
		cout << "No es un a?o Bisiesto" << endl;
	}
	cout << "Muchas gracias por confiar en este trabajo." << endl;
	return 0;
}

