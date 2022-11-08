Algoritmo sin_titulo
	
	Definir At, Al, Ab como real 
	Definir nombre Como Caracter
	
	Escribir "Ingrese su nombre: "
	leer nombre
    Escribir "***************************************"
	Escribir "Realicemos el proceso de este cilindro"
	Escribir "***************************************"
	Escribir "Ingrese el valor de su area lateral : "
	Leer Al
	Escribir "INgrese el valor de A_base: "
	Leer Ab
	
	// proceso
	At =Al + (2*Ab)
	// Salida
	Si (At<=0) Entonces
		EScribir " *El valor que ingrsó no es válido* "
	sino 
		EScribir "El valor equivalente del Area total es: " At
	FinSi
	
	Escribir "MUCHAS GRACIAS POR USAR ESTE PROGRAMA."
	
FinAlgoritmo
