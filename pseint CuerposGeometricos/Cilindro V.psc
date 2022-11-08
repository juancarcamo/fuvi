Algoritmo sin_titulo
	
	Definir V, Ab, h Como Real
	Definir nombre Como Caracter
	
	//entrada
	Escribir "Ingrese su nombre: "
	leer nombre
    Escribir "***************************************"
	Escribir "Realicemos el proceso de este cilindro"
	Escribir "***************************************"
	EScribir "Ingrese el valor de A_base: "
	Leer Ab
	Escribir "Ingrese el valor de la altura: "
	Leer h
	
	//Proceso 
	V = Ab*h
	
	//salida
	Si (V<=0) Entonces
		Escribir "El valor que ingresó no es válido"
	SiNo
		Escribir "El valor equivalente del Volumen es: " V
	FinSi
	
	Escribir "MUCHAS GRACIAS POR USAR ESTE PROGRAMA."
	
FinAlgoritmo
