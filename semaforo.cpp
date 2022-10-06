/*
nombre del archivo:Semafaro.cpp
autor:juan carcamo
Lugar:ITV
Intrucciones: mas ejemplos de estructura condicionales if
*/
#include<iostream>

using namespace std;

int main(){
	int edad;
	char color;
	cout<< "Ingrese su edad: ";
	cin >> edad;
	
	if (edad < 17){
		cout<< "Ud no tiene la edad suficiente para confudicir un vehiculo. " << endl;
		
	}else{
		cout << "Color del semaforo: (r=rojo, a=amarillo, v=verde)";
		cin >> color;
		
		if (color == 'r'){
			cout << " Baje la velocidada hasta detenerse suavemente." << endl;
		}else if (color == 'a'){
			cout << "Tenga preacuacion. no puede avanzar." << endl;
		}else if (color == 'v'){
			cout << "siga adelante."<< endl;
			
		}else {
			cout << "color incorrecto/invalido. "<< endl;
		}
		
		
	}
	cout<< " Fin del programa " << endl;
	
	
	
	
	return 0;
}