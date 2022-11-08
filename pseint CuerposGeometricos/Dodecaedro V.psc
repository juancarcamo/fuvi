Algoritmo sin_titulo
	Definir v, a Como Real
	Definir nombre,edad Como Caracter
	
	Escribir "Ingrese su nombre: "
	Leer nombre
	Escribir "Ingrese su edad: "
	leer edad 
	Escribir "**********************************"
	Escribir "Calculemos el volumen del Dodecaedro"
	Escribir "**********************************"
	Escribir "Ingrese el valor de a: "
	Leer a
	
	
	v = 1/4 * (15+7*raiz(5)) * a^3 
	
	
	si (v <= 0) Entonces
		Escribir "El valor que ingreso no es correcto"
		Escribir "Intente de nuevo"
	SiNo
		Escribir "El volumen del Dodecaedro es de: " v
	FinSi
	
	Escribir "Fin del proceso del algoritmo."
FinAlgoritmo
