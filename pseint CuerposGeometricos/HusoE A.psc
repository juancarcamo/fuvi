Algoritmo sin_titulo
	Definir a, n, r Como Real
	definir nombre Como Caracter
	
	
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
	Escribir "Calculemos el área del Huso Esferico"
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
	Escribir "Ingrese su nombre: " 
	leer nombre
	Escribir "Ingrese el valor del Radio: "
	Leer r
	Escribir "Ingrese el valor de los grados: "
	Leer n
	
	a = (4 * pi * (r^2) * n)/360
	
	Si (a <= 0) Entonces
		Escribir "Los valores que ud ingreso no estan correctos"
	SiNo
		Escribir "El valor del Área del Huso Esferico es de: " a
	FinSi
	
	Escribir "**************Fin del algoritmo.*****************"
FinAlgoritmo
