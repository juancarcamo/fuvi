/*
Nombre del archivo: calculosalioneto.cpp
Autor:Juan carcamo
Lugar:ITV
Instruciones:Ejemplo de programacion de estructura
*/
#include<iostream>
#include <iomanip>

using namespace std;
const double TASA_ANTIGUEDAD = 15;
const double TASA_SINDICATO = 1;
const double TASA_INSS =7 ;
const double TASA_IR = 15.6;
const double TASA_INSS_PATRONAL= 22.5;

int main(){
	
	double salarioBasico, salarioNeto,ingresoTotal, deduccionesTotales,ingresoNeto;
	double ingresoAntiguedad, montoSindicato, montoINSS, montoIR, montoINSSPatronal;
	
	cout << "Ingrese su salario basico: C$";
	cin >> salarioBasico;
	//Calcular los ingresos
	ingresoAntiguedad = salarioBasico * (TASA_ANTIGUEDAD/100);
	ingresoTotal = salarioBasico + ingresoAntiguedad;
	// calcular las deduciones
	 montoSindicato = salarioBasico * (TASA_SINDICATO/100);
	montoINSS = ingresoTotal * (TASA_INSS/100);
	montoIR = ingresoTotal * (TASA_IR/100);
	deduccionesTotales= montoSindicato + montoINSS + montoIR;
	// calcular decciones al empleador
	montoINSSPatronal = ingresoTotal * (TASA_INSS_PATRONAL/100);
	// calcular ingreso o salario neto
	ingresoNeto = ingresoTotal - deduccionesTotales;
	// mostrar resultados
	cout << "Salario bruto o basico = C$" << salarioBasico<< endl;
	cout << "Ingresos totales " << endl ;
	cout << "Monto por antiguedad = C$" << ingresoAntiguedad << endl;
	cout << "Monto de ingresos totales = C$" << ingresoTotal << endl;
	cout << "**********Deduciones totales*********** " << endl ;
	cout << "Monto por sindicato = C$" << montoSindicato<< endl;
	cout << "Monto por INSS = C$ "<< montoINSS << endl;
	cout << "Monto por IR = C$ " << montoIR << endl;
	cout << "Monto de deduciones totales = C$" << deduccionesTotales << endl;
	cout << "*********ingreso total neto******** " << endl;
	cout << "Ingreso o salario neto = C$" << ingresoTotal << endl;
	cout << " *****Deducciones del empleado***** " << endl;
	cout << " Monto por INSS Patronal = C$ " << montoINSSPatronal << endl;
	
	
	
	
	
	
		return 0;
}











