/*
nombre del archivo: sumanumeros.cpp
autor: Juan Carcamo
Lugar: ITV
Instruciones: Esto solo es una plantilla
*/
 #include<iostream>
 #include<cmath>
 
 using namespace std;
 
 int main(){
 	cout << "Ingrese el cateto 1: ";
 	cin>> cateto1;
 	cout <<" Ingrese el cateto 2: ";
 	cin >> cateto2;
 	
 	hipotenusa = sqrt (pow (cateto1,2) + pow (cateto2,2))
 	
 	cout << "cateto 1 = " << cateto1 << endl;
 	cout << "cateto 2 = " <<cateto2 << endl;
 	cout << "hipotenusa = " << hipotenusa << endl ;
 	
 	return 0;
 }