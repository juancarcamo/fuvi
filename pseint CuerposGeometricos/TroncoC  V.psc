Algoritmo sin_titulo
	
	Definir v, h, r, rm Como Real
	Definir nombre Como Caracter
	
	Escribir "Ingrese su nombre: "
	leer nombre
    Escribir "***************************************"
	Escribir "Realicemos el proceso de este tronco del cono"
	Escribir "***************************************"
	Escribir "Ingrese el valor de la Altura: "
	Leer h
	Escribir "Ingrese el valor del Radio Mayor: "
	Leer r
	Escribir "Ingrese el valor del Radio Menor: "
	Leer rm
	

	v = 1/3 * pi * h * ((r^2)+(rm^2)+(r*rm))
	
	si (v <= 0) Entonces
		Escribir "Los valores que Ud ingresó no son validos"
		Escribir "Por favor verifique que sean mayor que 0"
	SiNo
		Escribir "El volumen del Tronco del Cono es de: " v
	FinSi
	
	Escribir "ESPERAMOS QUE EL PROGRAMA TE HAYGA GUSTADO"

FinAlgoritmo
