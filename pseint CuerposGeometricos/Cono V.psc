Algoritmo sin_titulo
	Definir v, ab, h Como Real
	Definir nombre Como Caracter
	
	Escribir "Ingrese su nombre: "
	leer nombre
    Escribir "***************************************"
	Escribir "Realicemos el proceso de este cono"
	Escribir "***************************************"
	Escribir "Ingrese el valor de A_base: "
	Leer ab
	Escribir "Ingrese el valor de la Altura: "
	Leer h
	
	v = (ab * h)/3
	
	Si (v <= 0) Entonces
		Escribir "Los valores que ingreso no son correctos"
	SiNo
		Escribir "El Volumen del Cono es: " v
	FinSi
	
	Escribir "같같같같같같같같같같같같같같같같같같같"
	Escribir "MUCHAS GRACIAS POR USAR ESTE PROGRAMA."
	Escribir "같같같같같같같같같같같같같같같같같같같"
FinAlgoritmo
