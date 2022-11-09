Algoritmo Credito
	
	Definir  nomb,edad,car  Como Caracter
	
	Escribir "*********** INSTITUTO TECNOLOGICO VICTORIA **********"
	
	escribir "Ingrese su nombre: "
	leer nomb
	Escribir "Ingrese su edad: "
	leer edad
	Escribir "Ingrese su codigo de carnet: "
	leer car
	
	Escribir "Ingrese su Salario="
	leer SAL
	Si SAL< 200000 Entonces
		Escribir "Credito no Disponible"
	SiNo
		Si SAL >20000 Y SAL<50000 Entonces
			Escribir "Monto de Credito es=", "C$",50000
			LEER monto
		SiNo
			Si SAL > 50000 Y SAL <100000 Entonces
				Escribir "Monto de Credito es=", "C$",200000
				leer monto
				
			Fin Si
		Fin Si
	Fin Si
	
	Imprimir "El nombre del trabajador es: ", nomb
	Escribir "같같같같같같같같 Muchas gracias por confiar en este trabajo 같같같같같같같같�"
	
FinAlgoritmo
