algoritmo Peso_Persona
	
	Definir nombre,telefono Como caracter;
	Definir i,h,p,n,peso,altura,peso_ideal,imc Como real
	
	Escribir "*********** INSTITUTO TECNOLOGICO VICTORIA **********"
	
	
	Escribir ""
	Escribir "  BIENVENIDOS ";
	Escribir "                               "
	Escribir "Este programa crea una matriz"
	Escribir "a partir de datos suministrados "
	Escribir "por el usuario"
	Escribir "같같같같같같같같같같같같같같�"
	Escribir "cuantos grabara hoy "
	leer n
	Dimension nombre[n], peso[n], altura[n],telefono[n],imc[n]
	
	Para i=1 hasta n Hacer
		nombre[i] = " "		
		telefono[i]= " "
		
	FinPara
	
	Para i=1 hasta n con paso 1 Hacer
		escribir "Ingrese el nombre completo "
		leer nombre[i]
		Escribir "Ingrese el peso en kg de  ",nombre[i] 
		leer peso[i]
		
		Escribir "Ingrese su altura en metros de  ",nombre[i]
		leer altura[i]
		
		Escribir " Ingrese su telefono de  ",nombre[i]
		leer telefono[i]
		imc[i]=(peso[i])/(altura[i]*altura[i])
		
	FinPara
	
	
	para i=1 hasta n con paso 1 hacer 
		
		SI imc[i] <= 20 entonces
			Escribir "Persona Delgada: "
		SiNo
			si imc[i] >20 Y imc[i] < 23 Entonces
				
				Escribir "La persona es Normal: "
			sino 
				si imc[i] > 23 y imc[i] < 26 Entonces
					Escribir "Persona con Sobre Peso:"
				SiNo
					si imc[i] >26 Entonces
						Escribir "Persona Obesa:"
					FinSi
				FinSi
			FinSi
		FinSi
	FinPara
	
	Escribir   "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같�"
	Escribir   "| matriz        Nombre     Peso    Altura    Telefono   Indice de Masa corporal  |"
	Escribir   "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같"
	
	Para i<-1 hasta n con Paso 1 Hacer		
		Escribir "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같"
		Escribir "| nombre",i "   ",nombre[i], "     ",peso[i],"     ",altura[i],"        ",telefono[i],"     ",imc[i],"  |"
		Escribir "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같"
	FinPara
	Escribir  " "
	
	
	Escribir "같같같같같같같같 Muchas gracias por confiar en este trabajo 같같같같같같같같�"
	
FinAlgoritmo
