Algoritmo sin_titulo
	Definir  v, ab, h Como Real
	Definir nombre,edad Como Caracter
	
	Escribir "**********************************"
	Escribir "Resolvamos esta piramide"
	Escribir "**********************************"
	Escribir "Ingrese su nombre: "
	Leer nombre
	Escribir "Ingrese su edad: "
	leer edad 
	Escribir "Ingrese el valor de A_base: "
	Leer ab
	Escribir "Igrese el valor de la Altura: "
	Leer h
	
	//Datos de porceso
	v = (ab * h )/3
	
	
	Si (v <= 0) Entonces
		Escribir "Los valores ingresados no están correctos"
	SiNo
		Escribir "El valor del Volumen de la piramide es: " v
	FinSi
	
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
	Escribir "Gracias por usar el algoritmo."
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
	
FinAlgoritmo
