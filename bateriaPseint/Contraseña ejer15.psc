Algoritmo Contrase�a
	
	Definir Session,Intentos como enteros
	Definir nombre Como Caracter
	
	Escribir "����������� INSTITUTO TECNOLOGICO VICTORIA ������������"
	
	Escribir "Ingrese su nombre: "
	leer nombre
	Session<-0
	Intentos<-0
	
	Mientras Intentos<=3 Y Session =0 Hacer
		Escribir "Trate de ingresar la clave: "
		leer clave
		Si clave= "valores" Entonces
			Escribir "Contrase�a  Correcta."
			Session<-1
			
		SiNo
			Escribir "Contrase�a Incorrecta="
			Intentos<- Intentos+1
			Limpiar Pantalla
		FinSi
	FinMientras
	
	Escribir "**************** Muchas gracias por usar este algoritmo *******************"
FinAlgoritmo
