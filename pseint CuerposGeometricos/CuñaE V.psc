Algoritmo sin_titulo
	Definir v, r, n Como Real
	Definir nombre Como Caracter
	
	Escribir "******************************************"
	Escribir "Calculemos el Volumen de la Cuña esferica"
	Escribir "******************************************"
	Escribir "Ingrese su nombre: " 
	leer nombre
	Escribir "Ingrese el valor del Radio: "
	leer r
	Escribir "Ingrese el valor del radio: "
	Leer n
	
	//Proceso 
	v = 4/3 * ((pi^3 * n) /360)
	
	
	Si (v <= 0) Entonces
		Escribir "Los valores que ingreso no son validos"
	SiNo 
		Escribir "El valor del volumen de la Cuña Esferica es de: " v
	FinSi
	
	Escribir "**************Fin del algoritmo.*****************"
	
FinAlgoritmo
