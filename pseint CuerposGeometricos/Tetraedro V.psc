Algoritmo sin_titulo
	Definir v, a Como Real
	
	
	Escribir "**********************************"
	Escribir "Calculemos el Volumen del Tetraedro"
	Escribir "**********************************"
	Escribir "Ingrese en valor del área: "
	Leer a
	
	// Proceso 
	v = (raiz(2)/12) * a^3
	
	Si (v <= 0) Entonces
		Escribir "El valor que ingreso no es valido"
		
	SiNo
		Escribir "El volumen el tetraedro es: " v
	FinSi
	
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
	Escribir "Gracias por usar el algoritmo."
	Escribir "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
FinAlgoritmo
