Algoritmo Combustible
	
	Definir GR,GS,DIE COMO REAL
	Definir  nomb  Como Caracter
	
	Escribir "*********** INSTITUTO TECNOLOGICO VICTORIA **********"
	
	escribir "Ingrese su nombre: "
	leer nomb
	Escribir "De que tipo de gasolina desea hechar a su automovil."
	Escribir "1:Gasolina Regualar:"
	Escribir "2: Gasolina Super: "
	Escribir "3:Diesel: "
	leer opc
	Escribir "Ingrese Cantidad en litros de combustible:"
	leer Com
	
	Segun opc Hacer
		1:
			Costo<-Com * 32.85
			Escribir "Costo de Compra :",Costo "C$";
			
		2:Costo<- Com *33.48
			Escribir "Costo de Compra :",Costo "C$";
			
			
		3:
			Costo<- Com * 28.45
			Escribir "Costo de Compra :",Costo "C$";
			
		De Otro Modo:
			Limpiar Pantalla
	Fin Segun

	Escribir "같같같같같같같같 Muchas gracias por confiar en este trabajo 같같같같같같같같�"
	
	
FinAlgoritmo
