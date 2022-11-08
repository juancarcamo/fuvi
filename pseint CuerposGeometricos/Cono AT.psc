Algoritmo sin_titulo
	Definir al, at, ab Como Real
	Definir nombre Como Caracter
	
	Escribir "Ingrese su nombre: "
	leer nombre
    Escribir "***************************************"
	Escribir "Realicemos el proceso de este cono"
	Escribir "***************************************"
	Escribir "Ingrese el valor de su area lateral: "
	Leer al
	Escribir "Ingrese al valor de A_Base: "
	Leer ab
	
	at = al + ab 
	
	Si (al <= 0) Entonces
		Escribir "los valores que ingresó no son válidos"
	SiNo
		Escribir "El valor del Área Total del cono es: " at
	FinSi
	
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
	Escribir "MUCHAS GRACIAS POR USAR ESTE PROGRAMA."
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
FinAlgoritmo
