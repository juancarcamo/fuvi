Algoritmo sin_titulo
	Definir v, h, ab, am Como Real
	Definir nombre Como Caracter
	
	
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
	Escribir "Resolvamos el Volumen del Troco del piramide"
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
	Escribir "Ingrese su nombre completo :"
	leer nombre
    Escribir "Ingrese el valor de la Altura: "
	Leer h
	Escribir "Ingrese el valor del Area Base Mayor: "
	Leer ab
	Escribir "Ingrese el valor del Area Base Menor: "
	Leer am
	
	//Datos de proceso
	v = 1/3 * h * (ab + am + raiz(ab*am) )
	
	
	si (v <= 0) Entonces
		Escribir "Los valores que Ud ingresó no son validos"
		
	SiNo
		Escribir "El volumen del Tronco del Cono es de: " v
	FinSi
	
	Escribir "**************** Fin del algoritmo. ***************"
FinAlgoritmo
