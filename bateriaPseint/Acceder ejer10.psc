Algoritmo ACCEDER
	
	Definir bachiller  como caracter
	Definir nombre,edad, col Como Caracter
	
	Escribir "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°"
	
	Escribir "Ingrese su nombre: "
	leer nombre
	Escribir "Ingrese su edad: "
	leer edad
	Escribir "Cual es su centro de educación: "
	leer col
	
	bachiller<-"si"
	Escribir "¿Tienes el titulo de bachiller?"
	Leer bachiller
	si (bachiller="si") Entonces
		Escribir "Puedes acceder al grado superior"
	Sino
		Escribir "¿Tienes la prueba de acceso superada?"
		Leer prueba_acceso
		si (prueba_acceso="si") Entonces
			Escribir "Puedes acceder al grado superior"
		Sino
			Escribir "No puedes acceder a un grado superior"
		FinSi
	FinSi

	Escribir "**************** Muchas gracias por usar este algoritmo *******************"
FinAlgoritmo
