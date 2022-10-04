/*
nombre del archivo: sumanumeros.cpp
autor: Juan Carcamo
Lugar: ITV
Instruciones: otro ejemplo sobre numeros aleatorios
*/
 #include<iostream>
  #include<cstdlib>
 #include<ctime>
 
 using namespace std;
 
 int main(){
 	srand(time(nullptr));
 	int valorMin = 1, valorMax = 6;
 	
 	short dado1 = (rand() % (valorMax - valorMin + 1 ))+ valorMin;
 	short dado2 = (rand() % (valorMax - valorMin + 1 ))+ valorMin;
 	
 	
 	cout<< dado1 << " , " << dado2;
 	
 	
 	return 0;
 	
 	
 }
 
 
 
 
 