Algoritmo ProductoVectores
	Definir array1 Como Entero;
	Definir array2 Como Entero;
	Definir producto Como Entero;
	Definir i Como Entero;
	Definir j Como Entero;
	Definir m Como Entero;
	
	Dimension array1[3];
	Dimension array2[3];
	
	producto <- 0;
	
	// Datos Vector 1
	i <- 0;
    Escribir "Ingresando datos para el vector 1...";
    Mientras i < 3 Hacer
        Escribir "Posicion [ ", i + 1, " ] = Dime un numero: ";
        Leer array1[i];
        i <- i + 1;
    FinMientras
	
    // Datos Vector 2
    j <- 0;
    
	Escribir "Ingresando datos para el vector 2...";
    Mientras j < 3 Hacer
        Escribir "Posicion [ ", j + 1, " ] = Dime un numero: ";
        Leer array2[j];
        j <- j + 1;
    FinMientras
	
	// Multiplicando Vectores
    m <- 0;
    Escribir "Multiplicando...";
    Escribir "Calculando resultados...";
    Mientras m < 3 Hacer
        producto <- producto + (array1[m] * array2[m]);
        m <- m + 1;
    FinMientras
	
	Escribir  "El producto punto de ambos vectores es: ", producto;
FinAlgoritmo
