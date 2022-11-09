Algoritmo Maximo_Comun_Divisor
	
	Definir a,b,x,maximo como entero
	
	Escribir "*********** INSTITUTO TECNOLOGICO VICTORIA **********"
	
	Escribir "Ingrese el primer valor:"
	leer a
	Escribir "Ingrese el segundo valor:"
	leer b
	Si a>0 Y b>0 Entonces
		maximo<-1
		x<-1
		Mientras x<=a Hacer
			si a mod x = 0 y b mod x = 0 Entonces
				si x>maximo Entonces
					maximo<-x
					
				FinSi
			FinSi
			x<-x+1
			
		Fin Mientras
		Escribir "El maximo comun divisor es=",maximo;
	SiNo
		Escribir "Ingresar numeros positivos="
		
	Fin Si
	
	
	Escribir "같같같같같같같같 Muchas gracias por confiar en este trabajo. 같같같같같같같같같�"
	
FinAlgoritmo
