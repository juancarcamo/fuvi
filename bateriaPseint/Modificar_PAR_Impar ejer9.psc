Algoritmo Modificar_PAR_Impar
	
	Definir A Como entero
	Definir nombre Como Caracter
	
	Escribir "같같같같같� INSTITUTO TECNOLOGICO VICTORIA 같같같같같같"
	
	Escribir "Ingrese su nombre: "
	leer nombre
	
	Escribir "Introduzca un numero:"
	leer A
	b<-A MOD 2
	
	MIENTRAS A<=0 HACER
		Escribir "Introducir un numero mayor de cero:"
		leer A
	FinMientras
	SI b=0  Entonces
		Escribir "El numero que usted acaba de ingresar es par"
		
	sino 
		Escribir "El numero que usted acaba de ingresar es Impar"
		
	FinSi

	Escribir "**************** Muchas gracias por usar este algoritmo *******************"
FinAlgoritmo
