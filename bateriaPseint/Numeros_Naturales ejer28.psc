Algoritmo Numeros_Naturales
	
	
	
	cant_pares<-0
	cant_impares<-0
	cont<-1
	
	Escribir "*********** INSTITUTO TECNOLOGICO VICTORIA **********"
	
	Escribir "Ingrese la Cantidad de Numeros: "
	LEER N
	Mientras cont<= N HACER 
		Escribir "Ingrese el Valor =",CONT
		leer num
		si num mod 2 =0 entonces
			cant_pares<-cant_pares+1
		SiNo
			cant_impares<-cant_impares+1
			suma<-suma + num
			med<-suma/cant_impares
			
		FinSi
		cont<-cont+1
	FinMientras
	Escribir "La cantidad de pares son=",cant_pares;
	
	Escribir "La cantidad de impares son =",cant_impares;
	
	Escribir "El Promedio de los impares es =",med;

	
	
	Escribir "같같같같같같같같 Muchas gracias por confiar en este trabajo. 같같같같같같같같같�"
	
FinAlgoritmo
