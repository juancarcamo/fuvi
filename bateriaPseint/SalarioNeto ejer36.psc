Algoritmo SalarioNeto
	
	Definir empleado como caracter
	definir sbh,ht,sn,sm,I como real
	
	Escribir "*********** INSTITUTO TECNOLOGICO VICTORIA **********"
	
	Escribir "Nombre del Empleado: "
	leer empleado
	Escribir "Numeros de Horas Trabajadas en la semana: "
	leer ht
	Escribir "Salario neto mensual:"
	leer sm
	sbh<-sm/30/8
	
	Si ht>48  Entonces
		I<-1.35*(ht-48)
		
	SiNo
		SI ht <=48 Entonces
			I<-0
			
		FinSi
	Fin Si
	
	sn<-sbh*8*6+I
	Escribir "Salario Neto por Semana = ",sn "C$";
	
	imprimir "El nombre del empleado es:",empleado
	
	Escribir "같같같같같같같같 Muchas gracias por confiar en este trabajo 같같같같같같같같�"
	
FinAlgoritmo
