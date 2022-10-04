/*
nombre del archivo: aleatorio.cpp
autor: Juan Carcamo
Lugar: ITV
Instruciones: Esto solo es una plantilla
*/
 #include<iostream>
 #include<cstdlib>
 #include<ctime>
 using namespace std;
 
 int main (){
 	long tiempoTranscurrido = time(nullptr);
 	  srand(tiempoTranscurrido);
 	int aleatorio = rand() % 10;
 	int num, 
 	
 	 cout << " Adivine un numero entre 0 y 10:";
 	 cin>> num;
 	
 	if(num == aleatorio){
 		cout<< "Felicidadesss!";
	 } else {
	 	cout << "Game over !" ;
	 }
	 
 	cout<< aleatorio;
 	
 	return 0;
 	
 }