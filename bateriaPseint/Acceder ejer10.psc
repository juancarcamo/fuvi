Algoritmo ACCEDER
	
	Definir bachiller  como caracter
	Definir nombre,edad, col Como Caracter
	
	Escribir "같같같같같� INSTITUTO TECNOLOGICO VICTORIA 같같같같같같"
	
	Escribir "Ingrese su nombre: "
	leer nombre
	Escribir "Ingrese su edad: "
	leer edad
	Escribir "Cual es su centro de educaci�n: "
	leer col
	
	bachiller<-"si"
	Escribir "풲ienes el titulo de bachiller?"
	Leer bachiller
	si (bachiller="si") Entonces
		Escribir "Puedes acceder al grado superior"
	Sino
		Escribir "풲ienes la prueba de acceso superada?"
		Leer prueba_acceso
		si (prueba_acceso="si") Entonces
			Escribir "Puedes acceder al grado superior"
		Sino
			Escribir "No puedes acceder a un grado superior"
		FinSi
	FinSi

	Escribir "**************** Muchas gracias por usar este algoritmo *******************"
FinAlgoritmo
