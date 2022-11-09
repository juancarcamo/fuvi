Algoritmo Factorial
	
	Definir a,b,x,z,d,facta,factb,factc como entero
	definir c como real
	Definir  nomb  Como Caracter
	
	Escribir "*********** INSTITUTO TECNOLOGICO VICTORIA **********"
	
	escribir "Ingrese su nombre: "
	leer nomb
    Escribir "Ingrese el valor de a ="
	leer a
	Escribir "Ingrese el valor de b ="
	leer b
	
	
	si  a<0  Entonces
		Escribir "Ingrese un numero positivo= "
	SiNo
		
		para x=1 hasta a con paso 1 hacer 
			facta=1
			facta = facta*x
		FinPara
	FinSi
	Escribir "valor de factorial =",facta
	
	si b<0 entonces
		Escribir "Ingrese un numero positivo ="
	SiNo
		
		para z=1 hasta b con paso 1 hacer 
			factb=1
			factb=factb*z
		FinPara
		
	FinSi
    Escribir "valor de factorial =",factb 
	
	si c<0 Entonces
		Escribir "Ingrese un numero positivo ="
	SiNo
		c=(a-b)
		factc=1
		para d=1 hasta c con paso 1 hacer 
			factc=factc*d
		FinPara
		
	FinSi
	Escribir "valor de factorial =",factc 
	E=facta/(factc*factb)
	
	Escribir "Valor de la formula a!/((a-b)!b!)es =",E
    Escribir "같같같같같같같같 Muchas gracias por confiar en este trabajo 같같같같같같같같�"
	
FinAlgoritmo
