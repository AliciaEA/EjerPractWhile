Algoritmo SumaVectores
    // Definimos variables
	Definir i Como Entero;
	Definir j Como Entero;
	Definir k Como Entero;
	Definir l Como Entero;
	Definir m Como Entero;
	Definir n Como Entero;
	Definir array1 Como Entero;
	Definir array2 Como Entero;
	Definir array3 Como Entero;
	
	i <- 0;
	
	
	//Vectores
	Dimension array1[3];
	Dimension array2[3];
	Dimension array3[3];
	
    // Datos Vector 1
    
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



    // Salida Vector 1
    k <- 0;
    Escribir "Has ingresado estos datos...";
    Escribir "Arreglo 1";
    Mientras k < 3 Hacer
        Escribir array1[k];
        k <- k + 1;
    FinMientras
    Escribir "";

    // Salida Vector 2
    l <- 0;
    Escribir "Arreglo 2";
    Mientras l < 3 Hacer
        Escribir array2[l];
        l <- l + 1;
    FinMientras
    Escribir "";
	
    // Sumando Vectores
    m <- 0;
    Escribir "Sumando...";
    Escribir "Calculando resultados...";
    Mientras m < 3 Hacer
        array3[m] <- array1[m] + array2[m];
        Escribir "Posicion [ ", m + 1, " ] = ", array3[m];
        m <- m + 1;
    FinMientras

    // Salida Vector
    n <- 0;
    Escribir "Arreglo 3";
    Mientras  n < 3 Hacer
        Escribir array3[n];
        n <- n + 1;
    FinMientras
    Escribir "";
FinAlgoritmo