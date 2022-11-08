Algoritmo sin_titulo
	Definir a, b Como Real
	Definir nombre,edad Como Caracter
	
	Escribir "Ingrese su nombre: "
	Leer nombre
	Escribir "Ingrese su edad: "
	leer edad 
	Escribir "**********************************"
	Escribir "Calculemos el area del Dodecaedro"
	Escribir "**********************************"
	Escribir "Ingrese el valor de b: "
	Leer b
	
	a = 3 * b^2 * (raiz(25+10*raiz(5)))
	
	si (a <= 0) Entonces
		Escribir "El valor que ingreso no es correcto"
		Escribir "Intente de nuevo"
	SiNo
		Escribir "El área del Dodecaedro es de: " a
	FinSi
	
	Escribir "Fin del proceso del algoritmo."

FinAlgoritmo
