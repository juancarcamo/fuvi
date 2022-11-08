Algoritmo sin_titulo
	Definir At, Al, Ab Como Real
	Definir nombre,edad Como Caracter
	
	Escribir "**********************************"
	Escribir "Resolvamos esta piramide"
	Escribir "**********************************"
	Escribir "Ingrese su nombre: "
	Leer nombre
	Escribir "Ingrese su edad: "
	leer edad 
	Escribir "Ingrese el valor del Area Lateral: "
	Leer Al
	Escribir "Ingrese el valor de A_base: "
	Leer Ab
	
	//Datos de Proceso 
	At = Al + Ab
	
	
	Si (At <= 0) Entonces
		Escribir "El valor ingresado no es válido"
	SiNo
		Escribir "El valor del Area Total es:" At
	FinSi
	
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
	Escribir "Gracias por usar el algoritmo."
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
	
FinAlgoritmo
