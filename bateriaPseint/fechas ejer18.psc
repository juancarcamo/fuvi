Algoritmo fecha_dia_mes_Año
	
	Definir d,m,a como entero
	Definir nombremes, nombre, gen como caracter
	
	Escribir "°°°°°°°°°°° INSTITUTO TECNOLOGICO VICTORIA °°°°°°°°°°°°"
	Escribir "Ingre su nombre: "
	leer nombre
	Escribir "Ingrese su genero  "
	leer gen
	Escribir "Ingrese el dia:"
	leer d
	Escribir "Ingrese el mes:"
	leer m
	Escribir "Ingrese el año:"
	leer a
	si d<0 o d>31 entonces
		Repetir
			Escribir "Dia fuera de rango"
			Escribir "ingrese un dia"
			leer d
		Hasta Que d>0 Y d<32
		
	FinSi
	si m<1 o m>12 entonces
		Repetir
			Escribir "Mes fuera del rango"
			Escribir "ingrese el mes "
			leer m
			
		Hasta Que  m>0 Y m<13
		
	FinSi
	si a<1 Entonces
		Repetir
			Escribir "Año fuera de rango"
			escribir "ingrese el año"
			leer a
			
		Hasta Que a >0
	FinSi
	Segun m Hacer
		Caso 1:nombremes <- "Enero"
		Caso 2:nombremes<-"Febrero"
		Caso 3:nombremes<-"Marzo"
		Caso 4:nombremes<-"Abril"
		Caso 5:nombremes<-"Mayo"
		Caso 6:nombremes<-"Junio"
		Caso 7:nombremes<-"Julio"
		Caso 8:nombremes<-"Agosto"
		Caso 9:nombremes<-"Septiembre"
		Caso 10:nombremes<-"Octubre"
		Caso 11:nombremes<-"Noviembre"
		Caso 12:nombremes<-"Diciembre"
			
			
	Fin Segun
	Escribir d ,"/", nombremes , "/", a

	Escribir "**************** Muchas gracias por usar este algoritmo *******************"
	
FinAlgoritmo
