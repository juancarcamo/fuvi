Algoritmo Suma_N_Pares
	
	Definir n,x,contador COMO REAL
	
	Escribir "같같같같같� INSTITUTO TECNOLOGICO VICTORIA 같같같같같같"
	
	Escribir "Cuantos numeros desea ingresar: "
	LEER n
	x=1
	contador=1
	Mientras contador <=n hacer 
			si x mod 2 = 0 Entonces		
				Escribir x
				suma = suma +x
				contador= contador +1		
			FinSi
			x=x+1
		FinMientras
		Escribir " La suma es ",suma;
	
	
	Escribir "**************** Muchas gracias por usar este algoritmo *******************"
FinAlgoritmo
