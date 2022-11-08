Algoritmo sin_titulo
	Definir al, pb, g Como Real
	Definir nombre Como Caracter
	
	Escribir "Ingrese su nombre: "
	leer nombre
    Escribir "***************************************"
	Escribir "Realicemos el proceso de este cono"
	Escribir "***************************************"
	Escribir "Ingrese el valor de P_base: "
	Leer pb
	Escribir "Ingrese al valor de genertriz: "
	Leer g
	
	al = (pb * g)/2
	
	Si (al <= 0) Entonces
		Escribir "los valores que ingresó no son válidos"
	SiNo
		Escribir "El valor del Área Lateral del cono es: " al
	FinSi
	
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
	Escribir "MUCHAS GRACIAS POR USAR ESTE PROGRAMA."
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
FinAlgoritmo

