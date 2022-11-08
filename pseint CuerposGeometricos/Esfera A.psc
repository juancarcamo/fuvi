Algoritmo sin_titulo
	Definir a, r Como Real
	Definir nombre Como Caracter
	
    Escribir "Ingrese su nombre: "
	leer nombre
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°"
	Escribir "Resolvamos esta Esfera."
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°"
	EScribir "Cual es elvalor del Radio: "
	Leer r
	
	a = 4 * PI * (r^2)
	
	Si (a <= 0) Entonces
		Escribir "El valor que ingresó no es correcto"
	SiNo
		Escribir "El valor del Área de la Esfera es de: " a
	FinSi
	
	Escribir "Muchas gracias por usar este programa."
	
FinAlgoritmo
