Algoritmo sin_titulo
	Definir v, r Como Real
	Definir nombre Como Caracter
	
    Escribir "Ingrese su nombre: "
	leer nombre
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°"
	Escribir "Resolvamos esta Esfera."
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°"
	Escribir "Ingrese el valor del radio: "
	Leer r
	
	v = 4/3 * PI * (r^3)
	
	Si (v <= 0) Entonces
		Escribir "El valor ingresado es inválido"
	siNo 
		Escribir "El valor del Volumen de la esfera es de: " v
	FinSi
	
	Escribir "Muchas gracias por usar este programa."
	
FinAlgoritmo
