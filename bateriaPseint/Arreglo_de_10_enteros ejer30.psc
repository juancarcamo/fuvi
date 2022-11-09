Algoritmo Arreglo_de_10_enteros
	
	Definir x,a,c,vector como entero
	
	Escribir "*********** INSTITUTO TECNOLOGICO VICTORIA **********"
	
	
	Dimension vector[5]
	Para x<-1 Hasta 5 Con Paso 1 Hacer
		Escribir "Ingrese un Numero: "
		leer vector[x]
	Fin Para
	Escribir "Ingrese un Numero a Buscar: "
	leer a
	c=0
	Para x<-1 Hasta 5 Con Paso 1 Hacer
		si a==vector[x]Entonces
			Escribir "El Numero esta en la posicion=2",x
			c=1
			
		FinSi
	Fin Para
	si c=0 Entonces
		Escribir "El Numero no fue encontrado "
	FinSi

	Escribir "같같같같같같같같 Muchas gracias por confiar en este trabajo. 같같같같같같같같같�"
	
	
FinAlgoritmo
