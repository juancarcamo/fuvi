Algoritmo sin_titulo
	Definir Al, h, Pb como real
	Definir nombre Como Caracter
	
	//Entrada
	Escribir "Ingrese su nombre: "
	leer nombre
    Escribir "***************************************"
	Escribir "Realicemos el proceso de este cilindro"
	Escribir "***************************************"
	Escribir "Ingrese el valor de la altura: "
	Leer h
	Escribir "INgrese el valor de P_base: "
	Leer Pb
	
	// proceso
	At =(Pb*h)
	// Salida
	Si (At<=0) Entonces
		EScribir " *El valor que ingrsó no es válido* "
	sino 
		EScribir "El valor equivalente del cilindro del area lateral es: " At
	FinSi
	
	
	Escribir "MUCHAS GRACIAS POR USAR ESTE PROGRAMA."
FinAlgoritmo
