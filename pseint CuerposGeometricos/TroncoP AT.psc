Algoritmo sin_titulo
	Definir at, al, ab, b Como Real
	Definir nombre Como Caracter
	
	
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
	EScribir "Encontremos el Área Total del Tronco de Piramide"
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
	Escribir "Ingrese su nombre completo :"
	leer nombre
	Escribir "Ingresel el balor del Área Lateral: "
	Leer al
	Escribir "Ingrese el valor del Área Base Mayor: "
	Leer ab
	Escribir  "Ingrese el valor del Área Base Menor: "
	Leer b
	
	//Datos de proceso
	at = al + ab +b
	
	
	Si (at <= 0) Entonces
		Escribir  "Los valores que Ud ingresó no son válidos"
	SiNo
		Escribir "El Área Total del Tronco es de: " at
	FinSi
	
	Escribir "**************** Fin del algoritmo. ***************"

FinAlgoritmo
