Algoritmo Año_Bisiesto
	
	Definir  nomb Como Caracter
	
	Escribir "*********** INSTITUTO TECNOLOGICO VICTORIA **********"
	
	escribir "Ingrese su nombre: "
	leer nomb
	Escribir "Ingrese el AÑO"
	LEER AÑO
	Si año mod 4 = 0 Y ((año mod 100<>0) o (año mod 400=0)) Entonces
		Escribir "El año que usted ingreso es Bisiesto"
	SiNo
		Escribir "No es un año Bisiesto"
	Fin Si

	Escribir "Muchas gracias por confiar en este trabajo."
FinAlgoritmo
