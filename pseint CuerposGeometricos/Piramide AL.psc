Algoritmo sin_titulo
	Definir Pb, Ap, A Como Real
	Definir nombre,edad Como Caracter
	
	Escribir "**********************************"
	Escribir "Resolvamos la siguiente piramide"
	Escribir "**********************************"
	Escribir "Ingrese su nombre: "
	Leer nombre
	Escribir "Ingrese su edad: "
	leer edad 
	Escribir "Ingrese el valor de P_base: "
	Leer Pb
	Escribir "Ingrese el valor de Apotema: "
	Leer Ap
	
	//Datos de Proceso 
	A = (Pb * Ap)/2
	
	
	Si (A<=0) Entonces
		Escribir "El valor ingresado no es válido"
	SiNo
		Escribir "El valor del Área lateral es:" A
	FinSi
	
	
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
	Escribir "Gracias por usar el algoritmo."
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
FinAlgoritmo
