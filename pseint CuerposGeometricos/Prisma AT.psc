Algoritmo sin_titulo
	Definir At, Al, Ab como real
	Definir nombre Como Caracter
	
	Escribir "Ingrese su nombre: "
	leer nombre
    Escribir "***************************************"
	Escribir "Realicemos el proceso de este prisma"
	Escribir "***************************************"
	Escribir "Ingrese el área lateral: "
	Leer Al
	Escribir "Ingresa el A_base: "
	Leer Ab
	
	At = Al + (2*Ab)
	
	Si (At<=0) Entonces
		Escribir "El valor que ingresó no es válido"
	SiNo
		Escribir "El valor equivalente del Área Total es: " At
		
	FinSi
	
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
	Escribir "MUCHAS GRACIAS POR USAR ESTE PROGRAMA."
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
FinAlgoritmo
