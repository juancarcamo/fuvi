Algoritmo sin_titulo
	Definir al, ab, b Como Real
	Definir nombre Como Caracter
	
	Escribir "Ingrese su nombre: "
	leer nombre
    Escribir "***************************************"
	Escribir "Realicemos el proceso de este tronco del cono"
	Escribir "***************************************"
    Escribir "Ingresel el valor del Área Lateral: "
	Leer al
	Escribir "Ingrese el valor del Área Mayor: "
	Leer ab
	Escribir  "Ingrese el valor del Área Menor: "
	Leer b
	
	at = al + ab +b
	
	Si (at <= 0) Entonces
		Escribir  "Los valores que Ud ingresó no son válidos"
	SiNo
		Escribir "El Área Total del Tronco es de: " at
	FinSi
	
	Escribir "ESPERAMOS QUE EL PROGRAMA TE HAYGA GUSTADO"
	
FinAlgoritmo
