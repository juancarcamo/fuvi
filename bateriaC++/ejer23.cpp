// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float cervezas;
	string cod;
	float jamon;
	string nomb;
	float refrescos;
	float total;
	cout << "*********** INSTITUTO TECNOLOGICO VICTORIA **********" << endl;
	cout << " Ingrese su nombre: " << endl;
	cin >> nomb;
	cout << " Codigo del mesero que le atendio: " << endl;
	cin >> cod;
	cout << " Introduzca la cantidad servida de ..." << endl;
	cout << " Bocadillos de jamón: " << endl;
	cin >> jamon;
	cout << " Refresco: " << endl;
	cin >> refrescos;
	cout << "Cervezas: " << endl;
	cin >> cervezas;
	total = jamon*1.5+refrescos*1.05+cervezas*0.75;
	cout << "El total de la factura es: " << total << " Cordobas" << endl;
	cout << "Muchas gracias por confiar en este trabajo." << endl;
	return 0;
}

