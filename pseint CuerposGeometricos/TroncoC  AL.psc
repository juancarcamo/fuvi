Algoritmo sin_titulo
	Definir al, R, g, m Como Real
	Definir nombre Como Caracter
	
	Escribir "Ingrese su nombre: "
	leer nombre
    Escribir "***************************************"
	Escribir "Realicemos el proceso de este tronco del cono"
	Escribir "***************************************"
	Escribir "Ingrese el valor del Radio Mayor: "
	Leer R
	Escribir "Ingrese el valor del Radio Menor: "
	Leer m
	Escribir "Ingrese el valor de la generatriz: "
	Leer g
	
	
	al = PI * g * (R + r)
	
	Si (al <= 0) Entonces
		Escribir "Los valores que ingresó son incorrectos"
	SiNo 
		Escribir "El valor del Área Lateral es de: " al
	FinSi
	
	Escribir "ESPERAMOS QUE EL PROGRAMA TE HAYGA GUSTADO"
FinAlgoritmo
