Algoritmo Precio_Billete
	
	Definir distancia Como Real;
	Definir dias Como Entero;
	Definir precio_de_ida, precio_de_regreso Como Real;
	Definir precio_total, descuento Como Real;
	Definir  nomb Como Caracter
	
	Escribir "*********** INSTITUTO TECNOLOGICO VICTORIA **********"
	
	escribir "Ingrese su nombre: "
	leer nomb

	Escribir "Ingrese los dias de estancia";
	Leer dias;
	Escribir "Ingrese la distancia del viaje";
	Leer distancia;
	
	precio_total <- dias * 8.50;
	
	Si dias Es Mayor Que 7 Y distancia Es Mayor Que 1000 Entonces
		descuento <- (precio_total * 0.3);
		precio_total <- precio_total - descuento;
	FinSi
	
	precio_de_ida <- precio_total / 2;
	precio_de_regreso <-precio_total / 2;
	
	Escribir "Precio de Ida: ", precio_de_ida;
	Escribir "Precio de regreso: ", precio_de_regreso;
	Escribir "Descuento: ", descuento;
	

	
	Escribir "같같같같같같같같 Muchas gracias por confiar en este trabajo. 같같같같같같같같같�"
	
FinAlgoritmo
