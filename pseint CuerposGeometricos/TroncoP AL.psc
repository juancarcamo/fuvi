Algoritmo sin_titulo
	Definir al, pb, pm, ap Como Real
	Definir nombre Como Caracter
	
	
	Escribir "���������������������������������������������"
	Escribir "Resolvamos el siguiente tronco de la piramide"
	Escribir "���������������������������������������������"
	Escribir "Ingrese su nombre completo :"
	leer nombre
	Escribir "Ingrese el valor del perimetro base mayor: "
	Leer pb
	Escribir "Ingrese el valor del perimetro base menor: "
	Leer pm
	Escribir "Ahora ingrese el valor del apotema de piramide: "
	Leer ap
	
	//Datos de proceso
	al = (pb + pm)/2 * ap
	
	
	Si (al <= -1) Entonces
		Escribir "Los valores que ud ingreso estan incorrectos"
	SiNo
		Escribir "El valor del �rea Lateral del Tronco del Piramide es de: " al
	FinSi
	
	Escribir "**************** Fin del algoritmo. ***************"
	
FinAlgoritmo
