Algoritmo MultiplicacionMatrices
	Definir f, c Como Entero;
	Definir matriz1, matriz2 Como Entero;
	f <- 0;
	
	
	//Declaramos matrices
	Dimension matriz1[3, 3];
	Dimension matriz2[3, 3];
	
	//Datos Matriz 1
	Mientras f < 3 Hacer
		c <- 0;
		Mientras c < 3 Hacer
			Escribir "Matriz 1 - Posicion [", f + 1, ",", c + 1, "] = Dime un numero: ";
			Leer matriz1[f, c];
			c <- c + 1;
		FinMientras
		f <- f + 1;
	FinMientras
	
	// Salida Matriz 1
	Escribir "Matriz 1";
	f <- 0;
	Mientras f < 3 Hacer
		c <- 0;
		Mientras c < 3 Hacer
			Escribir matriz1[f, c], "    ", Sin Saltar;
			c <- c + 1;
		FinMientras
		Escribir "";
		f <- f + 1;
	FinMientras
	Escribir "";
	
	//Matriz Transpuesta
	Escribir "Matriz Transpuesta";
	f <- 0;
	Mientras f < 3 Hacer
		c <- 0;
		Mientras c < 3 Hacer
			Escribir matriz1[c, f], "    ", Sin Saltar;
			c <- c + 1;
		FinMientras
		Escribir "";
		f <- f + 1;
	FinMientras
	Escribir "";
FinAlgoritmo
